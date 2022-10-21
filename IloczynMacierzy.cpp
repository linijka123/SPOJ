#include <iostream>
using namespace std;
void pomnozMacierziWyswietl(int** W, int** P, int wiersze,int kolumny)
{
    int** tab = new int* [wiersze];
    for (int i = 0; i < kolumny; i++)
    {
        tab[i] = new int[kolumny];
        for (int j = 0; j < kolumny; j++)
        {
            tab[i][j] = 0;
            for (int k = 0; k < wiersze; k++)
            {
                tab[i][j] += W[i][k] * P[k][j];
            }
        }
    }
    for (int i = 0; i < kolumny; i++)
    {
        cout << endl;
        for (int j = 0; j < kolumny; j++)
        {
            cout << tab[i][j]<<" ";
        }
    }
}
void transponujMacierz(int** W,int **P,int wiersze, int kolumny)
{
    int** tab = new int* [kolumny];
    for (int i = 0; i < kolumny; i++)
    {
        tab[i] = new int[wiersze];
    }
    for (int i = 0; i < kolumny; i++)
    {
        for (int j = 0; j < wiersze; j++)
        {
            tab[i][j] = W[j][i];
        }
    }
    /*
    cout << endl;
    for (int i = 0; i < kolumny; i++)
    {
        cout << endl;
        for (int j = 0; j < wiersze; j++)
        {
            cout << tab[i][j];
        }
    }
    */
    pomnozMacierziWyswietl(tab, P, wiersze, kolumny);
}
int main()
{

    int wiersze = 0;
    int kolumny = 0;

    cin >> wiersze;
    cin >> kolumny;

    int** tab = new int* [wiersze];
    int** tab2 = new int* [wiersze];
    for (int i = 0; i < wiersze; i++)
    {
        tab[i] = new int[kolumny];
        tab2[i] = new int[kolumny];
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
    transponujMacierz(tab,tab2,wiersze, kolumny);
 



}
