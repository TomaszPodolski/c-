#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string>
using namespace std;
struct attack {
	string id;
	string name;
	int zwykly;
	int magiczny;
	int mana;
	int damage;

};

struct hero {
	string id;
	string name;
	int price;
	int power;
	int hp;
	int armor;
	int damage;
	int attack;
	int attack1;
	int attack2;
	int attack3;
	int heal;

};

void skille() {
	int attack;

	cout << " wybierz atak:" << endl;
	cout << "ataki do wyboru" << endl << "1. Zwykly" << endl << "2. Magiczny " << endl;
	cin >> attack;
	switch (attack)
	{
	case 1:
		cout << "wybrales zwykly " << attack << endl;


		break;

	case 2:
		cout << "wybrales magiczny" << attack << endl;

		break;


	}
}
int main()
{





	srand(time(NULL));
	int enemy_choice = rand() % 10 + 1;

	hero archer;
	archer.name = "archer";
	archer.hp = 600;
	archer.armor = 30;
	archer.damage = 25;





	hero knight;
	knight.name = "knight";
	knight.hp = 1000;
	knight.armor = 80;
	knight.damage = 50;




	hero warrior;
	warrior.name = "warrior";
	warrior.hp = 1000;
	warrior.armor = 70;
	warrior.damage = 70;

	hero soldier;
	soldier.name = "soldier";
	soldier.hp = 500;
	soldier.armor = 25;
	soldier.damage = 20;

	hero sniper;
	sniper.name = "sniper";
	sniper.hp = 300;
	sniper.armor = 20;
	sniper.damage = 60;


	hero swordman;
	swordman.name = "sword.soldier";
	swordman.hp = 900;
	swordman.armor = 50;
	swordman.damage = 35;


	hero barbarian;
	barbarian.name = "barbarian";
	barbarian.hp = 300;
	barbarian.armor = 15;
	barbarian.damage = 15;


	hero boss;
	boss.name = "boss";
	boss.hp = 1200;
	boss.armor = 90;
	boss.damage = 50;


	hero megaknight;
	megaknight.name = "mega knight";
	megaknight.hp = 2000;
	megaknight.armor = 100;
	megaknight.damage = 80;

	hero dinozaur;
	dinozaur.name = "dinozaur";
	dinozaur.hp = 8000;
	dinozaur.armor = 10;
	dinozaur.damage = 8;


	int myherohp;
	int myheroarmor;
	int myherodamage;
	int myheromana;

	int enemyherohp;
	int enemyheroarmor;
	int enemyherodamage;
	int enemyheromana;


	attack zwykly;
	zwykly.name = "zwykly atak";
	myherodamage = zwykly.damage;
	zwykly.mana = 10;




	attack magiczny;
	magiczny.name = "magiczy atak";
	magiczny.damage = 120;
	magiczny.mana = 60;



	int wybor;
	cout << " wybierz postac:" << endl;
	cout << "postacie do wyboru" << endl << "1. rycerz" << endl << "2. lucznik" << endl << "3. wojownik" << endl << "4. zolnierz" << endl << "5. snajper" << endl << "6. zolnierz z mieczem" << endl << "7. barbarzynca" << endl
		<< "8. szef" << endl << "9. mega rycerz" << endl << "10. dinozaur" << endl;
	cin >> wybor;
	if (wybor == 1)
	{
		cout << "wybrales rycerza" << endl << endl;
		myherohp = knight.hp;
		myheroarmor = knight.armor;
		myherodamage = knight.damage;
		myheromana = 100;
	}
	else if (wybor == 2)
	{
		cout << "wybrales lucznika" << endl << endl;
		myherohp = archer.hp;
		myheroarmor = archer.armor;
		myherodamage = archer.damage;
		myheromana = 100;
	}
	else if (wybor == 3)
	{
		cout << "wybrales wojownika" << endl << endl;
		myherohp = warrior.hp;
		myheroarmor = warrior.armor;
		myherodamage = warrior.damage;
		myheromana = 100;
	}

	else if (wybor == 4)
	{
		cout << "wybrales zolnierza" << endl << endl;
		myherohp = soldier.hp;
		myheroarmor = soldier.armor;
		myherodamage = soldier.damage;
		myheromana = 100;
	}
	else if (wybor == 5)
	{
		cout << "wybrales snajpera" << endl << endl;
		myherohp = sniper.hp;
		myheroarmor = sniper.armor;
		myherodamage = sniper.damage;
		myheromana = 100;
	}
	else if (wybor == 6)
	{
		cout << "wybrales zolnierza z mieczem" << endl << endl;
		myherohp = swordman.hp;
		myheroarmor = swordman.armor;
		myherodamage = swordman.damage;
		myheromana = 100;
	}
	else if (wybor == 7)
	{
		cout << "wybrales barbarzynce" << endl << endl;
		myherohp = barbarian.hp;
		myheroarmor = barbarian.armor;
		myherodamage = barbarian.damage;
		myheromana = 100;
	}
	else if (wybor == 8)
	{
		cout << "wybrales szefa" << endl << endl;
		myherohp = boss.hp;
		myheroarmor = boss.armor;
		myherodamage = boss.damage;
		myheromana = 100;
	}
	else if (wybor == 9)
	{
		cout << "wybrales Mega Rycerza" << endl << endl;
		myherohp = megaknight.hp;
		myheroarmor = megaknight.armor;
		myherodamage = megaknight.damage;
		myheromana = 100;
	}
	else if (wybor == 10)
	{
		cout << "wybrales dinozaura" << endl << endl;
		myherohp = dinozaur.hp;
		myheroarmor = dinozaur.armor;
		myherodamage = dinozaur.damage;
		myheromana = 100;
	}


	else
	{
		cout << "nie ma tylu postaci" << endl;
	}

	if (enemy_choice == 1)
	{
		cout << "przeciwnik wybral rycerza" << endl << endl;
		enemyherohp = knight.hp;
		enemyheroarmor = knight.armor;
		enemyherodamage = knight.damage;
		enemyheromana = 100;
	}

	else if (enemy_choice == 2)
	{
		cout << "przeciwnik wybral lucznika" << endl << endl;
		enemyherohp = archer.hp;
		enemyheroarmor = archer.armor;
		enemyherodamage = archer.damage;
		enemyheromana = 100;
	}
	else if (enemy_choice == 3)
	{
		cout << "przeciwnik wybral wojownika" << endl << endl;
		enemyherohp = warrior.hp;
		enemyheroarmor = warrior.armor;
		enemyherodamage = warrior.damage;
		enemyheromana = 100;
	}
	else if (enemy_choice == 4)
	{
		cout << "przeciwnik wybral zolnierza" << endl << endl;
		enemyherohp = soldier.hp;
		enemyheroarmor = soldier.armor;
		enemyherodamage = soldier.damage;
		enemyheromana = 100;
	}
	else if (enemy_choice == 5)
	{
		cout << "przeciwnik wybral snajpera" << endl << endl;
		enemyherohp = sniper.hp;
		enemyheroarmor = sniper.armor;
		enemyherodamage = sniper.damage;
		enemyheromana = 100;
	}
	else if (enemy_choice == 6)
	{
		cout << "przeciwnik wybral zolnierza z mieczem" << endl << endl;
		enemyherohp = swordman.hp;
		enemyheroarmor = swordman.armor;
		enemyherodamage = swordman.damage;
		enemyheromana = 100;
	}
	else if (enemy_choice == 7)
	{
		cout << "przeciwnik wybral barbarzynce" << endl << endl;
		enemyherohp = barbarian.hp;
		enemyheroarmor = barbarian.armor;
		enemyherodamage = barbarian.damage;
		enemyheromana = 100;
	}
	else if (enemy_choice == 8)
	{
		cout << "przeciwnik wybral szefa" << endl << endl;
		enemyherohp = boss.hp;
		enemyheroarmor = boss.armor;
		enemyherodamage = boss.damage;
		enemyheromana = 100;
	}
	else if (enemy_choice == 9)
	{
		cout << "przeciwnik wybral mega rycerza" << endl << endl;
		enemyherohp = megaknight.hp;
		enemyheroarmor = megaknight.armor;
		enemyherodamage = megaknight.damage;
		enemyheromana = 100;
	}
	else if (enemy_choice == 10)
	{
		cout << "przeciwnik wybral dinozaura" << endl << endl;
		enemyherohp = dinozaur.hp;
		enemyheroarmor = dinozaur.armor;
		enemyherodamage = dinozaur.damage;
		enemyheromana = 100;
	}

	cout << "statystyki twojej postaci" << endl << "hp:" << myherohp << endl << "armor:" << myheroarmor << endl << "damage:" << myherodamage << endl << "mana" << myheromana << endl;
	cout << "statystyki przeciwnika" << endl << "hp:" << enemyherohp << endl << "armor:" << enemyheroarmor << endl << "damage:" << enemyherodamage << endl << "mana" << enemyheromana << endl;





	int attack = 0;
	int choose;

	do {
		cout << "wybierz atak" << endl;
		cout << "ataki do wyboru :" << " 1. zwykly   2. magiczny" << endl;
		cin >> choose;

		switch (choose)
		{
		case 1:
			attack = myherodamage;

			enemyherohp -= attack;
			cout << "twoja postac atakuje zadajac " << attack << " przeciwnikowi " << "zdrowie przeciwnika : " << enemyherohp << endl;
			break;
		case 2:
			attack = magiczny.damage;

			enemyherohp -= attack;
			cout << "twoja postac atakuje zadajac " << attack << " przeciwnikowi " << "zdrowie przeciwnika : " << enemyherohp << endl;
			break;
		default:
			break;
		}


		srand(time(NULL));
		int los = rand() % 2 + 1;
		switch (los) {
		case 1:
			attack = enemyherodamage;
			myherohp -= attack;
			cout << "przeciwnik atakuje  zadając " << attack << " twojej postaci" << " twoje zdrowie  : " << myherohp << endl;
			break;
		case 2:
			attack = magiczny.damage;
			myherohp -= attack;
			cout << "przeciwnik atakuje  zadając " << attack << " twojej postaci" << " twoje zdrowie  : " << myherohp << endl;
			break;
		default:

			break;
		}

	} while (myherohp > 0 && enemyherohp > 0);
	if (enemyherohp <= 0) {


		cout << "KONIEC GRY" << endl;
		cout << "WYGRALES" << endl;
		cout << "GRATULACJE" << endl;
	}
	else if (myherohp <= 0) {
		cout << "KONIEC GRY" << endl;
		cout << "PRZEGRALES" << endl;
		cout << "POCWICZ TROCHE" << endl;
	}




}
