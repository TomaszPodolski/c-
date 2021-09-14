
//

#include <iostream>
using namespace std;
int main()
{

	int tab[2][2];
	cout << "wpisz 4 rozne wartosci do tablicy" << endl;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++) {
			cin >> tab[i][j];
		}
	}
	
	
	cout << "wyswietlam wartosci" << endl << " " << tab[0][0] << " " << tab[0][1] << endl << " " << tab[1][0] << " " << tab[1][1] << endl;

	int wyznacznik = tab[0][0] * tab[0][1] - tab[1][0] * tab[1][1];
	cout << "wyznacznik macierzy:  "  << wyznacznik << endl;
}



	




//

#include <iostream>
using namespace std;
int main()
{

	int tab[10][10];
	

	for (int i = 0; i =0; i++)
	{
		for (int j = 0; j =0 ; j++) {
			
		}
	}


	cout << "wyswietlam wartosci" << endl << " " << tab[0][0] << " " << tab[0][1]  << " " << tab[1][0] << endl << " " << tab[1][1] << " " 
		<< tab[2][1] << " " << tab[1][2] << " " << endl
	  << tab[0][0] << " " << tab[0][1] << " " << tab[1][0] << endl << " " << tab[1][1] << " "
		<< tab[2][1] << " " << tab[1][2] << " " << endl;

	int wyznacznik = tab[0][0] * tab[0][1] - tab[1][0] * tab[1][1];
	cout << "wyznacznik macierzy:  " << wyznacznik << endl;
}