// gra rpg.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string>
using namespace std;
struct hero {
	string id;
	string name;
	int price;
	int power;
	int hp;
	int speed;
	int armor;
	int damage;
	int attack;
	int attack1;
	int attack2;
	int attack3;
	int heal;


};


void skille(int attack, int attack1, int attack2, int attack3)
{

	cout << "wybierz atak" << endl;

	switch (attack)
	{
	case 1:
		cout << "atak 1 " << attack1 << endl;

		break;

	case 2:
		cout << "atak 2" << attack2 << endl;

		break;

	case 3:
		cout << "atak 3" << attack3 << endl;

		break;

	}
}
int main()
{
	hero archer;
	archer.name = "archer";
	archer.price = 40;
	archer.power = 40;
	archer.hp = 600;
	archer.speed = 2;
	archer.armor = 30;
	archer.damage = 25;





	hero knight;
	knight.name = "knight";
	knight.price = 100;
	knight.power = 90;
	knight.hp = 1000;
	knight.speed = 1;
	knight.armor = 80;
	knight.damage = 50;




	hero warrior;
	warrior.name = "warrior";
	warrior.price = 120;
	warrior.power = 90;
	warrior.hp = 1000;
	warrior.speed = 1;
	warrior.armor = 70;
	warrior.damage = 70;

	int myherohp;
	int myherospeed;
	int myheroarmor;
	int myherodamage;
	int myheroattack;

	int wybor;
	cout << " wybierz postac:" << endl;
	cout << "postacie do wyboru" << endl << "rycerz" << endl << "lucznik" << endl << "wojownik" << endl;
	cin >> wybor;
	if (wybor == 1)
	{
		cout << "wybrales rycerza" << endl;
		myherohp = knight.hp;
		myherospeed = knight.speed;
		myheroarmor = knight.armor;
		myherodamage = knight.damage;
		myheroattack = knight.attack;
	}
	else if (wybor == 2)
	{
		cout << "wybrales lucznika" << endl;
		myherohp = archer.hp;
		myherospeed = archer.speed;
		myheroarmor = archer.armor;
		myherodamage = archer.damage;
		myheroattack = archer.attack;
	}
	else if (wybor == 3)
	{
		cout << "wybrales wojownika" << endl;
		myherohp = warrior.hp;
		myherospeed = warrior.speed;
		myheroarmor = warrior.armor;
		myherodamage = warrior.damage;
		myheroattack = warrior.attack;
	}
	else
	{
		cout << "nie ma tylu postaci" << endl;
	}



}
