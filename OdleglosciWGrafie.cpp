#include <iostream>
using namespace std;
void AlgorytmFloyda(int** tab, int rozmiarZbioru, int** macierz)
{

    for (int i = 0; i < rozmiarZbioru; i++)
    {
        for (int j = 0; j < rozmiarZbioru; j++)
        {
            if (tab[i][j] == 1) macierz[i][j] = 1;
        }
    }

    for (int k = 0; k < rozmiarZbioru; k++)
        for (int i = 0; i < rozmiarZbioru; i++)
            for (int j = 0; j < rozmiarZbioru; j++)
            {
                if (macierz[i][j] > macierz[i][k] + macierz[k][j]) macierz[i][j] = macierz[i][k] + macierz[k][j];
            }


    for (int i = 0; i < rozmiarZbioru; i++)
    {
        for (int j = 0; j < rozmiarZbioru; j++)
        {
            if (macierz[i][j] == rozmiarZbioru + 1)
            {
                cout << "NaN" << " ";
            }
            else
            {
                cout << macierz[i][j] << " ";

            }
        }
        cout << endl;
    }
}
int main()
{
    int testy, liczbaKrawedzi, wielkosc = 0, a, b, ** macierz;
    const int rozmiarMacierzy = 101;
    cin >> testy;
    for (int i = 0; i < testy; i++)
    {
        wielkosc = 0;
        macierz = new int* [rozmiarMacierzy];

        for (int i = 0; i < rozmiarMacierzy; i++)
        {
            macierz[i] = new int[rozmiarMacierzy];
            for (int j = 0; j < rozmiarMacierzy; j++)
            {
                macierz[i][j] = 0;
            }
        }

        cin >> liczbaKrawedzi;

        for (int i = 0; i < liczbaKrawedzi; i++)
        {
            cin >> a >> b;

            if (a > wielkosc)
            {
                wielkosc = a;
            }
            if (b > wielkosc)
            {
                wielkosc = b;
            }
            macierz[a - 1][b - 1] = 1;
            macierz[b - 1][a - 1] = 1;
        }
        
        int** d = new int* [wielkosc];
        for (int i = 0; i < wielkosc; i++)
        {
            d[i] = new int[wielkosc];
            for (int j = 0; j < wielkosc; j++)
                d[i][j] = wielkosc + 1;
            d[i][i] = 0;
        }

        AlgorytmFloyda(macierz, wielkosc, d);
        cout << endl;
    }

}