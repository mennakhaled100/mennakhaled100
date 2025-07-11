#include<iostream>
using namespace std ;
int main()
{
   int row , cln ;
    cin>>row >>cln ;
    int arr[row][cln];
    int indexi = 0;
    int indexj=0 ;

    for(int i=0; i<row ; i++)
    {
        for(int j=0; j<cln; j++)
        {
            cin>>arr[i][j];
        }
    }

 //نعمل حلقة داخلية على الجيران في الاتجاهات -1, 0, 1

 bool isMountain = true;
 for(int i=0; i<row ; i++)
    {
        for(int j=0; j<cln; j++)
        {
            for(int dx=-1 ; dx<=1 ; dx++)
    {
        for(int dy=-1; dy<=1 ; dy++)
        {
            if(dx==0 && dy==0)
                continue;  //اسكيب عشان ده  نفس العنصر اللي بنشوف حيرانه

           int neibouri = dx + i ;
           int neibourj =  dy + j ;

           if(i>=0 && i<row && j>=0 && i<cln)
           {
               if(arr[i][j] <= arr[neibouri][neibourj])
               {
                   isMountain = false ;
                   break;

               }
           }
        }
        if(!isMountain)

            break;


    }
     if (isMountain)
            cout << i << " " << j << endl;

        }
    }

     if(isMountain)
        cout<<indexi <<" "<<indexj;
    return 0 ;
}


