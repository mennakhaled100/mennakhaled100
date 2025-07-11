#include<iostream>
using namespace std ;
int main()
{
    string str;
    cin>>str;
    string substring ;
    cin>>substring ;
    bool found =true ;
    for(int i=0; i<str.size(); i++)
    {
        bool found =true ;
        if(substring[i] != str[i])
            found = false;
    }
    if (found == true )
        cout<< "Yes!";
    else
        cout<<"No!" ;
    return 0;
}

