#include <iostream>
#include <ctime>

#define MASS_SIZE 10
using namespace std;

enum ShiftType
{
	Up = 1,
	Down,
	Left,
	Right
};

int main()
{
	enum ShiftType shift;
	int mass[MASS_SIZE][MASS_SIZE];
	int displacementType;
	int numberOfShifts;
	int buff;
	srand(5);
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
	cout << "1. Vverh" << endl
		<< "2. Vniz" << endl
		<< "3. Vlevo" << endl
		<< "4. Vpravo" << endl;
	cout << "Vvedite nomer, sootvetstvyjyshij neobhodimomy tipy smeshenija chisel v massive: ";
	do
	{
		cin >> displacementType;
		if (displacementType < 1 || displacementType > 4)
		{
			cout << "Ne vernij vvod!" << endl
				<< "vibirite napravlenije sdviga, i povtorite vvod sootvetstvyjyshego pynkta: ";
		}
	} while (displacementType < 1 || displacementType > 4);
	shift = (enum ShiftType)displacementType;
	cout << "Vvedite chislo, na kotoroe neobhodimo sdvinyt' massiv: ";
	do
	{
		cin >> numberOfShifts;
		if (numberOfShifts > MASS_SIZE - 1)
		{
			cout << "Kolichestvo sdvigov ne dolno bit' bol'she ." << MASS_SIZE - 1 << endl
				<< "Povtorite vvod: ";
		}
		else if (numberOfShifts < 1)
		{
			cout << "Kolichestvo sdvigov ne moget bit' men'she 1\n"
				"Povtorite vvod: ";
		}
	} while (numberOfShifts < 1 || numberOfShifts > MASS_SIZE - 1);
	for (int l = 0; l < numberOfShifts; l++)
	{
		for (int k = MASS_SIZE - 1; k >= 0; k--)
		{
			for (int m = 0; m < MASS_SIZE; m++)
			{
				switch (shift)
				{
					case Up:
						if (m >= MASS_SIZE - 1)
						{
							break;
						}
						buff = mass[k][m];
						mass[k][m] = mass[k][m + 1];
						mass[k][m + 1] = buff;
						break;
					case Down:
						if (k == 0)
						{
							break;
						}
						buff = mass[m][k];
						mass[m][k] = mass[m][k - 1];
						mass[m][k - 1] = buff;
						break;
					case Left:
						if (m >= MASS_SIZE - 1)
						{
							break;
						}
						buff = mass[m][k];
						mass[m][k] = mass[m + 1][k];
						mass[m + 1][k] = buff;
						break;
					case Right:
						if (k == 0)
						{
							break;
						}
						buff = mass[k][m];
						mass[k][m] = mass[k - 1][m];
						mass[k - 1][m] = buff;
						break;
					default:
						cout << "Ne verno vveden tip smeshenija!!";
						return 1;
				}
			}
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
	return 0;
}