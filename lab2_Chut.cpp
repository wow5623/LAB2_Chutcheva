
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>  /*Использование функции system*/


using namespace std;

double schet(double x);
bool IsinArea(double x, double y);

int main()
{
	double x, y;
	int k;
	cout << "Choose task 1 or 2 \n";
	cin >> k;
	switch (k)
	{
	case 1:
		cout << "vvedite x = ";
		cin >> x;
		cout << "vvedite y = ";
		cin >> y;
		if (IsinArea(x, y) == 1)
			cout << "Promah! =( ";
		else
			cout << "uspeh! =) ";
		break;
	case 2:
		cout << "vvedite x = ";
		cin >> x;
		cout << "Func  = " << schet(x);
		break;
	default:
		cout << "Nepravilno vvedeno uslovie ";
		break;
	}
	return 0;
}
bool IsinArea(double x, double y)
{
	if (sqrt(x*x + y * y) <= 1) /*Сначала попадание в круг*/
		if (x > 0 && y < 0)   /*Исключение 4 четверти */
			return true;
		else
			return false;
}

double schet(double x)
{
	if (x <= 3)
		return pow(x, 2) - 3 * x + 9;
	else
		return 1 / (pow(x, 3) + 6);
}
