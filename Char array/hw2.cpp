#include<iostream>
using namespace std ;
int main()
    {
    string str;
    cin>>str;
    string suffix ;
    cin>>suffix ;
    bool issuffix = true;

    for(int i= suffix.size()-1; i>=0 ; i--)
    {
        int strsize=str.size() - suffix.size()  ;
        if(suffix[i] != str[strsize + i])
        {
            issuffix =false;
            break;
        }
    }
    if (issuffix == true )
        cout<< "Yes!";
    else
        cout<<"No!" ;
    return 0;
}


