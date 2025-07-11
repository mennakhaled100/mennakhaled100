#include<iostream>
#include<queue> //first in -> first out
#include<stack> //last in -> first out
#include<set>
using namespace std ;
int main()
{
    string str ; cin>>str;
    stack<char> charstack ;
    for(auto c : str)
    {
        if(!charstack.empty() && charstack.top() == c)
        {
            charstack.pop(c)
        }
        else
            charstack.push(c);
    }



    for(auto element : s)
    {
        cout<<element<" " ;
    }



    return 0;
}

