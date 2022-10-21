#include <iostream>
#include <vector>
using namespace std;
int dzielzwyciezaj(vector<int> &liczby, int prawy , int lewy)
{
    int x = liczby[prawy];
    int i = prawy, j = lewy, w;
    while(true)
    {

        while(liczby[j] > x)
            j--;
        while(liczby[i] < x)
            i++;
        if(i < j)
        {
            w = liczby[i];
            liczby[i] = liczby[j];
            liczby[j] = w;
            i++;
            j--;
        }
        else
            return j;

    }


}
void sortuj(vector<int> &liczby, int prawy , int lewy)
{
    int q;
    if(prawy < lewy)
    {
        q = dzielzwyciezaj(liczby,prawy,lewy);
        sortuj(liczby,prawy,q);
        sortuj(liczby,q+1,lewy);
    }
}
int main()
{

    vector<int> liczby;
    int liczba;
    while (cin >> liczba)
    {
        
        liczby.push_back(liczba);

    }
    sortuj(liczby,0,liczby.size()-1);

    for( int i=0; i<liczby.size(); i++)
    {
        cout<<liczby[i]<<endl;
    }


    return 0;
}
