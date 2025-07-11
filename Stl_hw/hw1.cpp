#include<iostream>
#include<queue> //first in -> first out
#include<stack> //last in -> first out
using namespace std ;
void print(queue<int> &q)
{
    int t ; cin>> t;
    while(t--)
    {
        int n ; cin>> n;
        q.push(n);
    }

}
int main()
{
    queue<int> q;
    print(q);
    stack<int> s ;
    while(!q.empty())
    {

        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
