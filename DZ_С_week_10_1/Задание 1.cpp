#include <iostream>

using namespace std;

int main()
{
	int const rowCount = 10;
	int const colCount = 2;
	long mass[rowCount][colCount];
	int userEnter;
	long buff;
	cout << "Vvedite chislo, s kotorogo nachnetsia massiv: ";
	cin >> userEnter;
	mass[0][0] = userEnter;
	for (int i = 0; i < colCount; i++)
	{
		for (int j = 0; j < rowCount; j++)
		{
			if (j == 0 && i == 0)
			{
				mass[j][i] = userEnter;
				buff = userEnter;
			}
			else
			{
				mass[j][i] = buff * 2;
				buff = mass[j][i];
			}
		}
	}
	cout << "mass[10][2] = ";
	for (int i = 0; i < colCount; i++)
	{
		cout << "{";
		for (int j = 0; j < rowCount; j++)
		{
			cout << mass[j][i] << ", ";
		}
		cout << "}" << endl;
	}
	return 0;
}
