#include<iostream>
using namespace std;
bool czyZero(int *a, int rozmiar)
{
	int licznik = 0;
	for (int i = 0; i < rozmiar; i++)
	{
		if (a[i] == 0)
			licznik++;
	}
	if (licznik == rozmiar)
	{
		return true;
	}
	return false;
}
bool czyProstopadly(int *a,int *b ,int rozmiar)
{
	int suma = 0;
	for (int i = 0; i < rozmiar; i++)
	{
		suma += a[i] * b[i];
	}
	if (suma == 0)
	{
		return true;
	}	
	return false;
}
void dodajWektory(int* a, int* b, int rozmiar)
{
	for (int i = 0; i < rozmiar; i++)
	{
		a[i] += b[i];
	}
}
void wyswietl(int* a, int rozmiar)
{
	for (int i = 0; i < rozmiar; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
int main()
{
	int test = 0;
	int wielkoscWektora = 0;
	int ileWektorow = 0;
	cin >> test;
	for (int i = 0; i < test; i++)
	{
		cin >> wielkoscWektora; // liczba kolumn w mojej macierzy
		cin >> ileWektorow; // liczba wieszy w mojej macierzy

		int** tab = new int* [ileWektorow]; // moja macierz
		
		for (int j = 0; j < ileWektorow; j++)
		{
			tab[j] = new int[ileWektorow];
			for (int k = 0; k < wielkoscWektora; k++)
			{
				cin >> tab[j][k];
			}
		}
		int ostatniPoprawny = 0;
		for (int j = 1; j < ileWektorow; j++)
		{
			if (czyZero(tab[j], wielkoscWektora))
			{
				continue;
			}
			if (czyProstopadly(tab[j],tab[ostatniPoprawny],wielkoscWektora))
			{	
				dodajWektory(tab[0], tab[j],wielkoscWektora);
				ostatniPoprawny = j;
			}

		}
		wyswietl(tab[0],wielkoscWektora);

	}
}