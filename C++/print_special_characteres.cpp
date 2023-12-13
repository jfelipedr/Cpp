//Raw strings
#include <iostream>
#include <stdlib.h>

char shape_selected = 32; // 32 --> " " (space on ANSI CODE)

//clear screen no matter the system
void clear_screen() {
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

void select_shape();
void print_shape(char);

int main()
{
	select_shape();
	print_shape(shape_selected);
	
	return 0;
}

void select_shape()
{
    do {
        clear_screen();
        std::cout << "\t------------------------------------------------------------" << "\n";
        std::cout << "\t--------------------- Select the shape ---------------------" << "\n";
        std::cout << "\t------------------------------------------------------------" << "\n";
        std::cout << "\n\n\tC --> Circle" << "\n";
        std::cout << "\tS --> Square" << "\n";

        std::cin >> shape_selected;

    } while (shape_selected != 'C' && shape_selected != 'S' && shape_selected != 'c' && shape_selected != 's');
	
}

void print_shape(char shape_selected)
{
	if (shape_selected == 'C' || shape_selected == 'c'){
	std::cout << "       _____" << "\n";
	std::cout << "    .-'     '-." <<"\n";
	std::cout << "  .'           '." <<"\n";
    std::cout << R"( /               \)"<<"\n"; //use R"()" to enable print the '\' character. --> AKA 'raw string'
	std::cout << ";                 ;" <<"\n";
    std::cout << "|                 |" <<"\n";
    std::cout << ";                 ;" <<"\n";
    std::cout << R"( \               /)" <<"\n";
    std::cout << "  '.           .'" <<"\n";
    std::cout << "    '-._____.-'" <<"\n";
	}
	if (shape_selected == 'S' || shape_selected == 's'){
		std::cout << " ________________" << "\n";
		std::cout << "|                |" <<"\n";
		std::cout << "|                |" <<"\n";
		std::cout << "|                |" <<"\n";
		std::cout << "|                |" <<"\n";
		std::cout << "|                |" <<"\n";
		std::cout << "|                |" <<"\n";
		std::cout << "|                |" <<"\n";
		std::cout << "|                |" <<"\n";
		std::cout << " ---------------- " <<"\n";
	}
}
