// Do - While loop exemple: creation of a tickets menu
#include <iostream>

int main()
{
	int escolha = 0;
	do
	{
		std::cout << "***Movie tickets***" << std::endl;
		std::cout << "\n1 - Student priced ticket\n";
		std::cout << "\n2 - Normal ticket\n";
		std::cout << "\n3 - Exit";
		std::cout << "\nWrite your option: ";
		std::cin >> escolha;

		switch (escolha)
		{
		case 1: std::cout << "\nYou bought the student ticket\n";
			break;
		case 2: std::cout << "\nYou bought the normal Ticket\n";
			break;
		case 3: std::cout << "\nExiting the menu...\n";
			break;
		default: std::cout << "\nInvalid option!\n";
		}
	} while (escolha != 3);
	system("PAUSE");
	return 0;
}