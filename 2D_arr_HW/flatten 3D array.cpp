#include<iostream>
using namespace std ;
int main()
{
    int row , cln , dep;
    cin>>row >>cln >>dep ;
    int arr[row][cln][dep];
    int arr1[row * cln * dep] ;
    int k=0;

    //1D -> 3D
    for(int z=0; z<dep; z++)
    {
        for(int i=0; i<row; i++)
    {

        for(int j=0; j<cln; j++)
        {
            cin>>arr[i][j][z];
            arr1[k] = arr[i][j][z] ;
            k++ ;
            }
        }
    }


    //3D -> 1D
    cout<<"1(convert 3D to 1D) or 2(convert 1D to 3D)\n";
    int choice ; cin>>choice ;
    if(choice == 1)
    {
        int x , y. z ;
        cin>>x >>y >>z ;
        cout<<(x * row * cln) + (y * cln) + z
    }
    else if(choice == 2)
    {
        int c ;
        cin>>c ;
        //cout<< () + () +
    }
      return 0 ;
}
