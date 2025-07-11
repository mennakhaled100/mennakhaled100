#include<iostream>
#include<queue> //first in -> first out
#include<stack> //last in -> first out
using namespace std ;
void print(stack<int> &s)
{
    int t ; cin>> t;
    while(t--)
    {
        int n ; cin>> n;
        s.push(n);
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

}
int main()
{
    stack<int> s;
    print(s);

    return 0;
}
