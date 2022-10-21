#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t = 0, x = 0, y = 0, z = 0;
    float W=0,Wx=0,Wy=0,s=0,wynik;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y >> z;
        s=y*z;
        s=y-s;
        W=1*(-1)-z*(-1);
        Wx=-x*(-1)-s*(-1);
        wynik=Wx/W;
        wynik=wynik*(-12);

        cout<<round(wynik)<<endl;


    }

}
