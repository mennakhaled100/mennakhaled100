#include<iostream>
#include<cmath>
using namespace std ;

void read(int &x , int &y)
{
    while(true)
    {
        cout << "Enter two numbers from 1 -> 5: \n" ;
        cin >> x >> y ;
        if(x > 5 || y > 5)
        {
            cout << "Invalid numbers! Try again\n";
            continue ;
        }
        else
            break ;
    }
}

int add(int a , int b)
{
    return a + b ;
}
int subtract(int a , int b)
{
    return a - b ;
}
int multiply(int a , int b)
{
    return a * b ;
}
int divide(int a , int b)
{
    if(b == 0)
    {
        cout << "can't divide by zero!\n";
        return 0 ;
    }
    return a / b ;
}

void menu()
{
    int op = 0 ;
    while(true)
    {
        int choice;
        cout << "Enter the operation: \n";
        cout << "1)Add\n2)Subtract\n3)Multiply\n4)Divide\n5)End the program\n" ;
        cin >> choice ;

        if(choice > 5 || choice == 0)
        {
            cout << "Invalid choice! Try again\n";
            continue ;
        }

        if(choice == 5)
        {
            cout <<"number of operations : "<< op << "\nDone!\n" ;
            break ;
        }

        int x , y ;
        read(x , y);

        if (choice == 1)
        {
            cout << "Result: " << add(x , y) << endl;
            op++ ;
        }
        else if(choice == 2)
        {
            cout << "Result: " << subtract(x , y) << endl;
            op++;
        }
        else if(choice == 3)
        {
            cout << "Result: " << multiply(x , y) << endl;
            op++;
        }
        else if(choice == 4)
        {
            cout << "Result: " << divide(x , y) << endl;
            op++;
        }
    }
}

int main()
{
    menu() ;
    return 0 ;
}
