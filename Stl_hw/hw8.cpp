#include<iostream>
#include<queue> //first in -> first out
#include<stack> //last in -> first out
using namespace std ;
int main()
{  // we will add asteroids if not destroy
    int t ;
    cin>>t ;
    stack<int> s ;
    int asteroid ;
    bool destroyed = false ;
    for(int i=0; i<t; i++)
    {
        cin>>asteroid ;
        s.push(asteroid);
        while(!s.empty())
        {
                if(s.top() < -asteroid)
            {
                s.pop();
                destroyed = true ;
                // هنا مفيش بريك عشان هيتقارن مع اخر كويكب بعد الي اتحذف
            }
            else if(s.top() > -asteroid)
            {
                //هنا مفيش بوب عشان يمكن يتقارن مع الكويكب اللي هيدخل جديد
                destroyed = true ;
                break;
            }
            else
            {
                s.pop();
                destroyed = true ;
                break;
            }

            }
            if(!destroyed)
                s.push(asteroid);


        }

    queue<int> q ;
    while(!s.empty())
    {
        q.push(s.top()) ;
        s.pop() ;
    }
    while(!q.empty())
    {
        cout<<q.front()<<" " ;
        q.pop() ;
    }

    return 0;
}
