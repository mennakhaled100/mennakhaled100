#include<iostream>
using namespace std ;
void reverseString(const string &str)
{
    for(int i=str.size()-1; i>=0; i--)
    {
        cout<<str[i] ;
    }
}
int main()
{
    string str ; cin>>str ;
    reverseString(str) ;
    return 0 ;
}



