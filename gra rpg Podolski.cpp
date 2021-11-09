// gra rpg.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
struct hero {
	string id;
	
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
	char name;


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
		price = 40;
		power = 40;
		hp = 600;
		speed = 2;
		armor = 30;
		damage = 25;
		




		hero knight;
		knight.name = "knight";
		price = 100;
		power = 90;
		hp = 1000;
		speed = 1;
		armor = 80;
		damage = 50;
		



		hero warrior;
		warrior.name = "warrior";
		price = 120;
		power = 90;
		hp = 1000;
		speed = 1;
		armor = 70;
		damage = 70;
		
	
	}
}