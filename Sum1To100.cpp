// Using for loop to sum numbers from 1 to 100
#include <iostream>

int main()
{
	int soma = 0;
		for (int num = 1; num <= 100; num++)
		{
			soma = soma + num;
		}
	std::cout << "\nSum of numbers from 1 to 100: " << soma<<"\n";
	system("PAUSE");
	return 0;
}