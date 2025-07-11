#include<iostream>
using namespace std ;
int main()
{
    int row , cln ;
    cin>>row >>cln ;
    int arr[row][cln];
    int arr1[row * cln] ;
    int k=0;

    for(int i=0; i<row; i++)
    {

        for(int j=0; j<cln; j++)
        {
            cin>>arr[i][j] ;
            arr1[k] = arr[i][j];
            k++ ;
        }
    }

    for(int k=0 ; k<row*cln ; k++)
    {
        cout<<arr1[k]<<" ";
    }
      return 0 ;
}
