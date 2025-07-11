#include<iostream>
using namespace std ;
int main()
{
    int row , cln ;
    cin>>row >>cln ;
    int arr[row][cln];
    int maxi = arr[0][0];
    int indexi = 0;
    int indexj=0 ;
    for(int i=0; i<row ; i++)
    {
        for(int j=0; j<cln; j++)
        {
            cin>>arr[i][j];
        }
    }
    int liftd=0;
     for(int i=0; i<row ; i++)
    {
        for(int j=0; j<cln; j++)
        {
            if( i == j )
            {
                liftd+=arr[i][j] ; // sum [o][0] + [1][1] + ....
            }
        }
    }
    cout<<liftd;

    int rightd = 0;
    for(int i=row-1; i>=0 ; i--)
    {
        for(int j=cln-1; j>=0; j--)
        {
            //if( row -1 == cln -1)// just in sqaure array : row= cln
            if(row-1-i == j)
            {
                rightd+=arr[i][j] ;
            }
        }
    }
    cout<<"\n"<<rightd ;

    int last_row = 0;
      for(int i=0; i<row ; i++)
    {
        for(int j=0; j<cln; j++)
        {
            if( i == row - 1)
                last_row+=arr[i][j] ;
        }
    }
    cout<<"\n"<<last_row ;

    int last_cln = 0;
     for(int i=0; i<row ; i++)
    {
        for(int j=0; j<cln; j++)
        {
            if( j == cln - 1 )
            {
                last_cln+=arr[i][j];
            }
        }
    }
    cout<<"\n"<<last_cln ;
    return 0 ;
}



