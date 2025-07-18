#include<iostream>
#include<cmath>
using namespace std ;
/*void setPower(int arr[] , int len = 5, int m = 2)
{

    for(int i=0; i<len; i++ )
    {
        cout<<pow(m , arr[i] )<<" ";
    }
}
int main()
{
    int m; cin>>m ;
    int len ; cin>>len ;
    int arr[len] = {0,1,2,3,4} ;
    setPower (arr, len ,m);*/

void setPower(int arr[] , int len = 5, int m = 2)
{

    for(int i=0; i<len; i++ )
    {
        arr[i] = pow(m , i) ;
    }

     for(int i=0; i<len; i++ )
    {
        cout<<arr[i] <<" " ;
    }
}
int main()
{
    cout<<"Enter base\n" ;
    int m; cin>>m ;
    cout<<"Enter length\n" ;
    int len ; cin>>len ;
    int arr[50];
    setPower (arr, len ,m);

    return 0 ;
}




