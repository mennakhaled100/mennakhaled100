#include<iostream>
using namespace std ;
int main()
{

    int row , cln ;
    cin>>row >>cln ;
    int arr[row][cln];


    for(int i=0; i<row; i++)
    {
        for(int j=0; j<cln; j++)
        {
            cin>>arr[i][j] ;     
        }
    }
    int sum1 =0 ;
    for(int i=0; i<row ; i++)
    {
        for(int j=i; j<cln; j++)   
        {
            sum1+=arr[i][j] ;

        }
                               // 1 2 3
                                //4 5 6     
                                //7 8 9
    }
    cout<<sum1<<"\n";

    int sum2 =0 ;
    for(int i=0; i<row ; i++)
    {
        for(int j=0; j<=i; j++)
        {
            sum2+=arr[i][j] ;

        }
    }
    cout<<sum2;
    return 0 ;
}
