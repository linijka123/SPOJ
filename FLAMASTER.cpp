#include <iostream>

using namespace std;

int main()
{
    string word;
    int t=0,counter=1;
    cin>>t;
    for( int i=0; i<t; i++)
    {
        cin>>word;
        for( int i=0; i<word.length(); i++)
        {
            if(word[i]==word[i+1])
            {
                counter++;
            }
            else if(counter>=3)
            {
                cout<<word[i]<<counter;
                counter=1;
            }
            else if(counter<2)
            {
                cout<<word[i];
                counter=1;

            }
            else if(counter==2)
            {
                cout<<word[i-1]<<word[i];
                counter=1;


            }
        }
        cout<<endl;


    }
}
