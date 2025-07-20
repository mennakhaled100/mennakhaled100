#include<iostream>
using namespace std ;
bool isPrime( int num )
{
        for(int j=2 ; j<= num / 2; j++)
        {
            if(num % j == 0)
            {
                return false ;
            }
    }
    return true ;

}
int nth_prime(int n )
{

    int counter = 0 ;
    int current = 2 ;
    while(true)   //counter
    {
        if(isPrime(current))
        {
            counter ++ ;
            if(counter == n)
            {
                return current ;
                break ;
            }
        }
        current ++ ;
    }

}

int main()
{
    int num ;
    cin>> num ;
    cout<<isPrime(num) <<"\n";
    int n ; cin>>n ;
    cout<<nth_prime(n) ;
    return 0 ;
}



