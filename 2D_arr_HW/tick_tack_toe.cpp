#include<iostream>
using namespace std ;

int main()
{
    int n ; cin>>n ;

    char current_player = 'x' ;
    char game[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            game[i][j] = '-';
        }
    }


            int positions= 0 ;
            while(positions < n*n)
            {
                cout<<"player "<<current_player<<" turn \n" ;
                int row, cln ;
                cin>>row >>cln ;
                if(game[row][cln] != '-')
                    {
                        cout<<"Cell already taken! Try again \n";
                        continue ;
                    }

            game[row][cln] = current_player ;
            positions++;
        for(int x=0; x<n; x++)
        {
            for(int y=0; y<n; y++)
            {
                cout<<game[x][y]<<" ";
            }

        cout<<"\n";
        }
        //check rows
        for(int i=0; i<n; i++)
        {
            bool row = true ;
            for(int j=0; j<n; j++)
            {
                if(game[i][j] != current_player)
                {
                    row= false ;
                    break ;
                }

            }
            if(row)
            {
                 cout<<"player "<< current_player <<" wins!\n";
                 return 0 ;
            }

        }
        //check cln
        for(int i=0; i<n; i++)
        {
            bool cln = true ;
            for(int j=0; j<n; j++)
            {
                if(game[j][i] != current_player)
                {
                     cln= false ;
                    break;
                }

            }
            if(cln)
            {
                cout<<"player "<< current_player <<" wins!\n";
                return 0 ;
            }

        }
        //check diagonl
        bool diagonal = true;
        for(int i = 0; i < n; i++)
        {
            if(game[i][i] != current_player)
            {
                diagonal = false;
               break;
            }
        }
            if(diagonal)
            {
                cout<<"player "<< current_player <<" wins!\n";
                return 0 ;
            }


        //check antidiagonal
        bool antid = true;
       for(int i = 0; i < n; i++)
       {
           if(game[i][n - 1 - i] != current_player)
            {
                antid= false;
                break;
            }
       }
            if(antid)
            {
                 cout<<"player "<< current_player <<" wins!\n";
                 return 0 ;
            }



        current_player = (current_player == 'x')?  'o' : 'x' ;

            }

      return 0 ;
}

