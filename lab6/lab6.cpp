/*Задание к теме 6.
1. Поменять местами содержимое переменных A и B и вывести новые значения A и B.
2. Даны переменные A, B, C.Изменить их значения, переместив содержимое A в B, B — в C, C — в A, и вывести новые значения переменных A, B, C.
3. Даны переменные A, B, C.Изменить их значения, переместив содержимое A в C, C — в B, B — в A, и вывести новые значения переменных A, B, C.
4. Найти значение функции y = 3x6 − 6x2 − 7 при данном значении x
5. Найти значение функции y = 4(x−3)6 − 7(x−3)3 + 2 при данном значении x
6. Дано число A.Вычислить A8, используя вспомогательную переменную и три операции умножения.
7. Дано число A.Вычислить A15, используя две вспомогательные переменные и пять операций умножения.
*/

#include <math.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, x, c, y,temp,temp2;
	cout << "1)введите a и b"<<endl;
	cin >> a >> b;
	x = a;
	a = b;
	b = x;
	cout << a<<" "<< b << endl;
	cout << "2)введите a,b и c " << endl;
	cin >> a >> b >> c;
	x = b;
	b = a;
	a = c;
	c = x;
	cout << a << " " << b << " " << c << endl;
	cout << "3)введите a,b и c " << endl;
	cin >> a >> b >> c;
	x = a;
	a = b;
	b = c;
	c = x;
	cout << a << " " << b << " " << c << endl;
	cout << "4)введите x " << endl;
	cin >> x;
	y = (3 * pow(x, 6) - 6 * pow(x, 2) - 7);
	cout << y << endl;
	cout << "5)введите x " << endl;
	cin >> x;
	y = (4 * pow(x-3, 6) - 7 * pow(x-3, 3) + 2);
	cout << y << endl;
	cout << "6)введите a " << endl;
	cin >> a;
	temp = a * a;
	temp = temp * temp;
	a = temp * temp;
	cout << a;
	cout << "7)введите a " << endl;
	cin >> a;
	temp = a * a;//2-я степень
	temp2 = temp * a;//3-я
	temp = temp * temp2;//5-я
	temp2 = temp * temp;//10-я
	temp = temp2 * temp;//15-я
	cout << temp;
}

