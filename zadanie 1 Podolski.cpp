// zadanie 1 Podolski.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
void odejmowanie(int a, int b)
{
	cout << "odejmowanie" << a - b << endl;

}

void dzielenie(int a, int b)
{
	cout << "dzielenie" << a / b << endl;
}
void mnozenie(int a, int b)
{
	cout << "mnozenie" << a * b << endl;
}

void trapez (int a, int b, int h)
{
	cout << "trapez" << (a + b) * (h) / 2 << endl;
}

void trojkat(int a, int b, int c)
{
	cout << "obwod trojkata" << a + b + c << endl;
}

void kwardat(int a)
{
	cout << "obwod kwadratu" << a * 4 << endl;
}

void pole_kwadratu(int a)
{
	cout << "pole kwardatu" << a * a << endl;
}

void pole_trojkata(int a, int h)
{
	cout << "pole trojkata" << (1 / 2 *(a))* h << endl;
}

int main()

{
	cout << "podaj boki" << endl;
	int a;
	int b;
	int h;
	int c;
	odejmowanie(2, 1);
	dzielenie(5, 4);
	mnozenie(5, 5);
	trapez(2, 3, 4);
	cin >> a >> b >> c;
	trojkat(a, b, c);
	cin >> a;
	kwardat(a);
	cin >> a;
	pole_kwadratu(a);
	cin >> a >> h;
	pole_trojkata(a, h);
}