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

    int transArr[cln][row];

      for(int i=0; i<row; i++)
    {
        for(int j=0; j<cln; j++)
        {
            transArr[j][i]=arr[i][j] ;
        }
    }


    for(int i=0; i<cln; i++)
    {
        for(int j=0; j<row; j++)
        {
            cout<<transArr[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0 ;
}


