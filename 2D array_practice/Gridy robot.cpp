#include<iostream>
using namespace std ;
int main()
{
    int row , cln ;
    cin>>row >>cln ;
    int arr[row][cln];
    for(int i=0; i<row ; i++)
    {
        for(int j=0; j<cln; j++)
        {
            cin>>arr[i][j];
        }
    }
    int maxi = arr[0][0] ;
    for(int i=0; i<row ; i++)
    {
        for(int j=0; j<cln; j++)
        {
           if(arr[i][j-1] < arr[i][j])
           {
               if(arr[i+1][j] < arr[i][j])
               {
                   if(arr[i +1][j+1] <arr[i][j])
                   {
                       maxi = arr[i][j] ;

                   }

               }
           }
        }
    }
    cout<<maxi ;

    return 0 ;
}




