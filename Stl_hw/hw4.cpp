#include<iostream>
#include<queue> //first in -> first out
#include<stack> //last in -> first out
#include<map>
#include<set>
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
        set <string> print ;
         //bool isdouble = false ;
        cin>>q ;
        for(int i=0; i<t; i++)
        {
            int len = q.length();
            if(strings[i].substr(0 , len) == q)
            {
                print.insert(strings[i]);
            }
        }

       for(auto element : print)
       {
           cout<<element <<" ";
       }


    }
    return 0;
}
