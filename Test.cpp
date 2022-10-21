#include <iostream>
#include <string>
int main()
{
    using std::cout;
    using std::endl;
    using std::cin;

    std::string Darek=" ";
    std::string Jarek=" ";
    std::string Marek=" ";

    int punkty=0;

    getline(cin,Darek);
    getline(cin,Jarek);
    getline(cin,Marek);

    for( int i=0; i<Darek.length(); i++)
    {
         if(Marek[i] == Darek [i] && Jarek[i]==Darek[i])
         {
             continue;
         }
         if(Darek[i] != Jarek[i] || Darek[i] != Marek[i])
         {

             if(Jarek[i]==Marek[i])
             {
                 punkty+=2;
             }
             else
             {
                 punkty++;
             }
         }
    }
    cout<<punkty<<endl;

}
