#include <iostream>
using namespace std;
int main()
{
    int liczba , minimalna = 501  , polozenie = 0 , i = 0 , najwieksza = -501  , polozenie2 = 0;
    while(cin>>liczba)
    {
        i++;
        if(liczba >= najwieksza)
        {
            najwieksza = liczba;
            polozenie2 = i;
        }
        if(liczba < minimalna)
        {
            minimalna = liczba;
            polozenie = i ;
        }
    }
    cout<<minimalna<<endl<<polozenie<<endl<<najwieksza<<endl<<polozenie2;


    return 0;

}
