#include <iostream>
using namespace std;
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
int main()
{
    int liczba, liczba2, rozmiarmacierzy = 0;
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
    while (cin >> liczba >> liczba2)
    {
        if (liczba > rozmiarmacierzy)
        {
            rozmiarmacierzy = liczba;
        }
        if (liczba2 > rozmiarmacierzy)
        {
            rozmiarmacierzy = liczba2;
        }

        tab[liczba-1][liczba2-1] = 1;
    }
    
    if(przechodnia(rozmiarmacierzy,tab))
    {
        cout<< "TAK"<<endl;
    }
    else
    {
        cout<< "NIE"<<endl;
    }



}
