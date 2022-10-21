#include <iostream>
using namespace std;
string word;
int counter_for_numbers=0;
int counter_for_words=0;
int main()
{
    while(getline(cin,word))
    {
        for( int i=0; i<word.length(); i++)
        {
             if(word[i]>=48&&word[i]<=57)
             {
                 if(word[i+1]==32) //SPACJA
                 {
                     counter_for_numbers++;
                 }

             }
             else if(word[i]>=65&&word[i]<=122)
             {
                 if(word[i+1]==32) //SPACJA
                 {
                     counter_for_words++;
                 }

             }
        }
        for( int i=word.length()-2; i<word.length()-1; i++)
        {
             if(word[word.length()-1]>=65&&word[word.length()-1]<=122)
             {
                  counter_for_words++;
             }
        }
        for( int i=word.length()-2; i<word.length()-1; i++)
        {
             if(word[word.length()-1]>=48&&word[word.length()-1]<=57)
             {
                  counter_for_numbers++;
             }

        }
        for( int i=word.length(); i<=word.length(); i++)
        {
             if(word[word.length()]>=48&&word[word.length()]<=57)
             {
                  counter_for_numbers++;
             }

        }



        cout<<counter_for_numbers<<' '<<counter_for_words<<endl;
        counter_for_numbers=0;
        counter_for_words=0;


    }
}
