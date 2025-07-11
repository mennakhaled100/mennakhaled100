#include<iostream>
using namespace std ;
int main()
{
    char str[50] ;
    cin.getline(str , 50);

    for( int i=0; str[i] != '\0' ; )
    {
        char currentchar=str[i];
        cout<<currentchar;
        int counter =1 ;
        for(int j=i+1 ; str[i+counter]!= '\0' && str[i+counter] == currentchar; j++)
        {
            cout<<currentchar;
            counter++;
        }
        cout<<" ";
        i+=counter ;

    }
    return 0 ;
}

