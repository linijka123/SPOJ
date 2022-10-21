#include <iostream>
using namespace std;
void pomnozMacierziWyswietl(double** W, double** P,double* wektor ,int wiersze, int kolumny)
{
    double* wynik = new double[kolumny];
    for (int i = 0; i < kolumny; i++)
    {
        wynik[i] = 0;
        for (int j = 0; j < wiersze; j++)
        {
            wynik[i] += W[i][j] * wektor[j];
        }
    }
    cout.precision(7);
    for (int i = 0; i < kolumny-1; i++)
    {
        cout << fixed << wynik[i] <<" ";
    }
}
void transponujMacierz(double** W, double** P,double* wektor ,int wiersze, int kolumny)
{
    double** tab = new double* [kolumny];
    for (int i = 0; i < kolumny; i++)
    {
        tab[i] = new double[wiersze];
    }
    for (int i = 0; i < kolumny; i++)
    {
        for (int j = 0; j < wiersze; j++)
        {
            tab[i][j] = W[j][i];
        }
    }
    pomnozMacierziWyswietl(tab, P,wektor ,wiersze, kolumny);
}
int main()
{

    int wiersze = 0;
    int kolumny = 0;

    cin >> kolumny;
    cin >> wiersze;
    kolumny++;

    double** tab = new double* [wiersze];
    double** tab2 = new double* [wiersze];
    double* wektor = new double[wiersze];
    for (int i = 0; i < wiersze; i++)
    {
        tab[i] = new double[kolumny];
        tab2[i] = new double[kolumny];
        for (int j = 0; j < kolumny; j++)
        {
            cin >> tab[i][j];
        }
    }
    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
        {
            tab2[i][j] = tab[i][j];
        }
    }
    for (int i = 0; i < wiersze; i++)
    {
        wektor[i] = tab[i][kolumny-1];
    }
    transponujMacierz(tab,tab2,wektor,wiersze, kolumny);

}
