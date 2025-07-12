#include <iostream>
using namespace std ;
#include<vector>
#include<algorithm>
int main()
{
    int q ;
    cin>>q ;
    vector<int>v ;
    while(q--)
    {
        int choice ; cin>>choice ;
        if(choice == 0)
        {
            int x ;
            cin>>x ;
            v.push_back(x);
        }
        else if(choice == 2)
        {
            v.pop_back();
        }
        else if(choice == 1)
        {
            int p ;cin>>p ;
            //vector<int> ::iterator it ;
            cout<<v[p]<<"\n";
        }
    }


    return 0 ;
}
