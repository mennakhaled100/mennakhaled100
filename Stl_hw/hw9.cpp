#include<iostream>
#include<queue> //first in -> first out
#include<stack> //last in -> first out
#include<map>
#include<set>
using namespace std ;

int main()
{
    int t ; cin>>t  ;
    vector<int> v(t) ;
    queue<int> q ;
    for(int i=0; i<t; i++)
    {
        cin>>v[i];
    }


    for(int i=0; i<t; i++)
    {
        bool found_greater =false ;
        for(int j=i+1; j<t; j++)
        {
            if(v[j] > v[i])
            {
                v[i] = v[j];
                found_greater = true ;
                break ; //بريك عشان ميقارنش نفس الرقم تاني
            }
        }
        if(!found_greater)
        {
            v[i] = -1;
        }
    }
    for(int i=0; i<t; i++)
    {
        q.push(v[i]);
    }
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}
