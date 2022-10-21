#include <iostream>
using namespace std;
int main()
{
    int liczba , minimalna = 0 , polozenie = 0 , i = 0;
    while(cin>>liczba)
    {
        i++;
        if(liczba <= minimalna) {
            minimalna = liczba;
            polozenie = i ;
        }
        else if( liczba == 0){
            break;
        }
    }
    cout<<minimalna<<endl;
    cout<<polozenie<<endl;
    return 0;
}
