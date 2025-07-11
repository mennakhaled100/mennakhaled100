#include<iostream>
#include<queue> //first in -> first out
#include<stack> //last in -> first out
#include<map>
using namespace std ;

int main()
{
    vector<string> strings;
    cout<<"Enter num of strings\n";
    int t ; cin>> t;
    string str ;
    cout<<"Enter strings\n";
    for(int i=0; i<t; i++)
    {
        cin>>str;
       strings.push_back(str) ;
    }
    cout<<"Enter num of your Queries\n";
    int queries; cin>>queries ;
    string q ;
    cout<<"Enter your Queries\n";
    while(queries--)
    {
        cin>>q ;
        for(int i=0; i<t; i++)

        {
            int len = q.length();
            if(strings[i].substr(0 , len) == q)
            {
                cout<<strings[i] <<"\n";
            }
       }
    }


    return 0;
}

