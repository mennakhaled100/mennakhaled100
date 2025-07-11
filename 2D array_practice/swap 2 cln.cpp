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

    int cln1 , cln2 ;
    cin>>cln1 >> cln2 ;
     for(int i=0; i<row ; i++)
    {
            int temp=arr[i][cln1];
            arr[i][cln1] = arr[i][cln2];
            arr[i][cln2] =temp;
    }


     for(int i=0; i<row ; i++)
    {
        for(int j=0; j<cln; j++)
        {
            cout<<arr[i][j]<<" " ;
        }
        cout<<"\n";
    }


    return 0 ;
}



