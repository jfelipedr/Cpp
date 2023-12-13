//ejemplo del condiconal switch
#include <iostream>

int main()
{
    int num;
	char *meses[] = {"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};

    std::cout << "Escriba el numero del mes: "; std::cin >> num;

	if (num<1 || num>12)
		std::cout << "Error, verifique el mes";
	else
		std::cout << "El mes que selecciono es:" << meses[num-1];

	return 0;
}

/*
{
    int num;

    std::cout << "Escriba el numero del mes: "; std::cin >> num;

	switch (num) {
		case 1: std::cout << "enero"; break;
		case 2: std::cout << "febrero"; break;
		case 3: std::cout << "marzo"; break;
		case 4: std::cout << "abril"; break;
		case 5: std::cout << "mayo"; break;
		case 6: std::cout << "junio"; break;
		case 7: std::cout << "julio"; break;
		case 8: std::cout << "agosto"; break;
		case 9: std::cout << "septiembre"; break;
		case 10: std::cout << "octubre"; break;
		case 11: std::cout << "noviembre"; break;
		case 12: std::cout << "diciembre"; break;
		default: std::cout << "ERROR, verifique el mes"; break;
	}

	return 0;
}*/