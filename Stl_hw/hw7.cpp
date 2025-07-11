#include<iostream>
#include<queue> //first in -> first out
#include<stack> //last in -> first out
#include<cassert>
using namespace std ;
int main()
{

    string str ;
    cin>> str;

   stack<int> par ;
   par.push(0);
   for(int i=0; i<(int)str.size(); i++)
    {
        char c = str[i] ;
        if(c == '(')
        {
            par.push(0) ;
        }
        else
        {
            int last = par.top();  //نحتفظ باخر قيمة قبل م تدخل حاجة جديدة
            par.pop();

            if(last == 0)
                last = 1 ;
            else
                last*= 2 ;

            int parent_par = par.top() + last ;
            par.pop();
            par.push(parent_par);
        }
    }

    cout<<par.top() ;
    return 0;

}
