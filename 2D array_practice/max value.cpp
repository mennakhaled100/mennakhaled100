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

     for(int i=0; i<row ; i++)
    {
        for(int j=0; j<cln; j++)
        {
            if(maxi <= arr[i][j])
            {
                maxi=arr[i][j];
                indexi = i, indexj =j ;
                }

        }
    }
    cout<<maxi<<" with index "<<indexi <<" " << indexj;


    return 0 ;
}


