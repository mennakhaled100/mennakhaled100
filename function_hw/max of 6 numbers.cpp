#include<iostream>
using namespace std ;
int max1(int a , int b , int c)
{
    int m =max(a ,b);
    if(m == a)
        m=max(a ,c);
    else
        m=max(b ,c) ;
    return m ;
}
int max2(int a , int b , int c, int d)
{
    return max(max1(a,b,c) , d) ;
}
int max3(int a , int b , int c, int d, int e)
{
    return max(max2(a,b,c ,d) ,e) ;
}
int main()
{
    int a , b , c , d ,e ;
    cin>>a >> b >> c >> d >>e;
    cout<<max3(a ,b,c,d ,e) ;
    return 0 ;
}

