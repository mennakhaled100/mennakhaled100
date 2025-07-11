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

        int q ; cin>>q ;
        while(q--)
    {
         bool maxi = false;
        int k , n ;
        cin>>k >>n ;

            for(int j=0; j<cln; j++)
                {
                    if(arr[k][j] >= arr[n][j])
                    {
                        maxi= true ;
                        break ;
                    }

                }


      if(!maxi)
        cout<<"Yes";
    else
        cout<<"No";
    }


    return 0 ;
}

