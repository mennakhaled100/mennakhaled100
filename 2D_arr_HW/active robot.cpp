#include<iostream>
using namespace std ;
int main()
{

    int row , cln ;
    cin>>row >>cln ;

    int k ; cin>>k ;
    int positioni =0 ;
    int positionj =0 ;
    while(k--)
    {
        int direction , steps ;
        cin>>direction>>steps ;
        //up
        for(int step=0 ; step<steps; step++)
        {
            if(direction == 1)
            {
                if(positioni == 0)
                    positioni = row-1 ;
                else
                    positioni-- ;
            }
            //down
            if(direction == 3)
            {
                if(positioni == row - 1)
                    positioni = 0 ;
                else
                    positioni++ ;
            }
            //right
            if(direction == 2)
            {
                if(positionj == cln - 1)
                    positionj = 0 ;
                else
                    positionj++ ;
            }

        //left
        if(direction == 4)
        {
            if(positionj == 0)
                positionj = cln - 1;
            else
                positionj--;
        }
        }
        cout<<positioni <<" "<<positionj ;
    }

    return 0 ;
}



