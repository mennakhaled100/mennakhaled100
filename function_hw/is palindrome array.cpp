#include<iostream>
using namespace std ;
void palindrome( )
{
    int n ;
    cin>>n ;
    int arr[n];

    for(int i=0; i< n; i++)
    {
        cin>>arr[i] ;
    }
    bool pal = true ;
     for(int i=0; i< n / 2; i++)
    {
        if(arr[i] != arr[n-1 -i])
        {
             pal =false ;
            break ;
        }

    }
    if(pal)
        cout<<"palindrome!" ;
    else
        cout<<"not palindrome!" ;
}


int main()
{
    palindrome() ;
    return 0 ;
}


