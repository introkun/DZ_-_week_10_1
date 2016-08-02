#include <iostream>
#include <ctime>

#define MASS_SIZE 10
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int mass[MASS_SIZE][MASS_SIZE];
	int displacementType;
	int 
	srand(time(NULL));
	for (int i = 0; i < MASS_SIZE; i++)
	{
		for (int j = 0; j < MASS_SIZE; j++)
		{
			mass[j][i] = rand() % 9 + 1;
		}
	}
	cout << "mass[" << MASS_SIZE << "][" << MASS_SIZE << "] :" << endl;
		for (int i = 0; i < MASS_SIZE; i++)
		{
			for (int j = 0; j < MASS_SIZE; j++)
			{
				cout << mass[j][i] << " ";
			}
			cout << endl;
		}
		cout << "1. ¬верх" << endl
			<< "2. ¬низ" << endl
			<< "3. ¬право" << endl
			<< "4. ¬лево" << endl;
		cout << "¬ведите номер, соответствующий необходимому типу смещени€ чисел в массиве: ";
		cin >> displacementType;
		cout << "¬ведите число, на которое необходиме сместить массив:";
		cin >> 
}