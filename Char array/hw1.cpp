#include<iostream>
using namespace std ;
int main()
{
    string str;
    cin>>str;
    string prefix ;
    cin>>prefix ;
    bool isprefix = false;
    for(int i=0; i<prefix.size(); i++)
    {
        bool isprefix = false;
        if(prefix[i] == str[i])
            isprefix =true ;
    }
    if (isprefix == true )
        cout<< "Yes!";
    else
        cout<<"No!" ;
    return 0;
}
