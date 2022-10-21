#include <iostream>
using namespace std;
bool antysymetryczna(int** R, int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (R[i][j] && R[j][i]) return 0;
	return 1;
}
bool symetryczna(int** R, int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (R[i][j] != R[j][i]) return 0;
	return 1;
}
bool spojna(int** R, int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (!(R[i][j] || R[j][i])) return 0;
	return 1;
}
bool przechodnia(int n, int** R)
{
	int i, j, k;
	int B;
	for (i = 0; i < n; i++) for (j = 0; j < n; j++)
	{
		B = 0;
		for (k = 0; (!B) && (k < n); k++) B = R[i][k] && R[k][j];
		if (R[i][j] < B) return 0;
	}
	return 1;
}
bool zwrotna(int** R, int n)
{
	int i;
	for (i = 0; i < n; i++)
		if (R[i][i] == 0) return 0;
	return 1;
}
bool przeciwzwrotna(int** R, int n)
{
	int i;
	for (i = 0; i < n; i++)
		if (R[i][i]) return 0;
	return 1;
}


int main()
{
	int liczba, liczba2, wielkoscZbioru = 0;
	const int rozmiar = 100;
	int ** tab = new int*[rozmiar];
	for( int i=0; i<rozmiar; i++)
    {
        tab[i] = new int[rozmiar];
    }
	for (int i = 0; i < rozmiar; i++)
	{
		for (int j = 0; j < rozmiar; j++)
		{
			tab[i][j] = 0;
		}
	}

	//int tab[101][101];
	while (cin >> liczba >> liczba2)
	{
		if (liczba > wielkoscZbioru)
        {
            wielkoscZbioru = liczba;
        }
		if (liczba2 > wielkoscZbioru)
        {
            wielkoscZbioru = liczba2;
        }

		tab[liczba-1][liczba2-1] = 1;
	}

	bool z = zwrotna(tab, wielkoscZbioru);
	bool pz = przeciwzwrotna(tab, wielkoscZbioru);
	bool s = symetryczna(tab, wielkoscZbioru);
	bool as = antysymetryczna(tab, wielkoscZbioru);
	bool p = przechodnia(wielkoscZbioru, tab);
	bool sp = spojna(tab, wielkoscZbioru);
	bool rr = z && p && s;
	bool rpcz = z && p && as;
	bool rpl = z && p && as && sp;

	if (z)
	{
		cout << "Z ";
	}
	if (pz)
	{
		cout << "PZ ";
	}
	if (s)
	{
		cout << "S ";
	}
	if (as)
	{
		cout << "AS ";
	}
	if (p)
	{
		cout << "P ";
	}
	if (sp)
	{
		cout << "SP ";
	}
	if (z + pz + s + as + p + sp == 0) // każdy bool to jest 1 albo 0 więc operacją arytmetyczną też można go w warunku sprawdzić
	{
		cout << "X ";
		return 0;
	}
	else { // jeżeli coś jest tych relacji to da \n
		cout << endl;
	}
	if (rr)
	{
		cout << "RR ";
	}
	if (rpl) // jeżeli będzie porządek liniowy to porządku częściowego już nie będzie 
	{
		cout << "RPL";
	}
	else if (rpcz)
	{
		cout << "RPCz";
	}
	if (rr + rpl + rpcz == 0) 
	{
		cout << "X";
	}
	return 0;
}
