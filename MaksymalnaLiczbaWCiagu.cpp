#include <iostream>
using namespace std;
int main()
{
    int liczba , maksimum = 0;
    while(cin>>liczba)
    {
        if(liczba > maksimum)
            maksimum = liczba;
        else if( liczba == 0)
            break;
    }
    cout<<maksimum<<endl;
    return 0;
}
