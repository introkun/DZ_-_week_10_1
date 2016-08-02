#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	long mass[10][2];
	int userEnter;
	long buff;
	cout << "¬ведите число.ю с которого начнетс€ массив: ";
	cin >> userEnter;
	mass[0][0] = userEnter;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 0 && i == 0)
			{
				mass[j][i] = userEnter;
				buff = userEnter;
			}
			else
			{
				mass[j][i] = buff + 1;
				buff = mass[j][i];
			}
		}
	}
	cout << "mass[10][2] = ";
	for (int i = 0; i < 2; i++)
	{
		cout << "{";
		for (int j = 0; j < 10; j++)
		{
			cout << mass[j][i] << ", ";
		}
		cout << "}" << endl;
	}
	return 0;
}