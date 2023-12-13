/*Este codigo es de C pero revisar para implementar algo parecido a C++*/
struct variable_s {
    union {
        int ival;
        char cval;
        float fval;
    } value;
    enum {
        VARIABLE_INT,
        VARIABLE_CHAR,
        VARIABLE_FLOAT,
    } type;
} variable;

// If user wants an int...
variable = (struct variable_s){ .type = VARIABLE_INT, .value.ival = 10 };

// If user wants a char...
variable = (struct variable_s){ .type = VARIABLE_CHAR, .value.cval = 'c' };

// If user wants a float...
variable = (struct variable_s){ .type = VARIABLE_FLOAT, .value.fval = 3.33 };
