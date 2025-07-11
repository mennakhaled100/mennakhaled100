#include<iostream>
#include<vector>
#include<tuple>
using namespace std ;
vector<tuple<string , int , int ,string>> employee ;
int nofemployees = 0;

void add()
{
    string name , gender ;
    int age , salary ;
    cout<<"Enter employee name: \n";
    cin>>name ;
    cout<<"Enter employee age: \n";
    cin>>age;
    cout<<"Enter employee salary: \n";
    cin>>salary;
    cout<<"Enter employee gender: \n";
    cin>>gender ;

    employee.push_back({name ,age ,salary ,gender});
    nofemployees++;
    cout<<"done\n";
}
void print()
{
    if(employee.empty())
        cout<<"No employees in the system\n";
    cout<<"Eployees in factory: \n";
    for(auto &emp : employee)
    {
        cout<<get<0>(emp) <<" "<<get<1>(emp) <<" "<<get<2>(emp) <<" "<<get<3>(emp) <<"\n" ;
    }
}
void dlt()
{
    int startage , endage ;
    cout<<"Enter ages for deleting: \n";
    cin>>startage >>endage ;
    int deleted = 0 ;
    for(auto it=employee.begin(); it!=employee.end();)
    {
        int age = get<1>(*it);
        if(age >= startage && age <= endage)
        {
            cout<<"Deleted employee: "<<get<0>(*it) ;
            it=employee.erase(it);//بنجدد الاتيريتور
            //employee.erase(it);
            nofemployees-- ;
            deleted++;

        }
        else
            it++; //يدخل ع الي بعده
    }

    if(deleted==0)
        cout<<"No employees found in age range "<<startage<<" to "<<endage <<"\n" ;
    else
        cout<<"deleted: "<<deleted<<" employees\n";

}
void update()
{
    string name;
    int salary;
    cout<<"Enter name and salary: \n";
    cin>>name >>salary;
    for(auto &emp : employee)
    {
        if(name == get<0>(emp))
        {
            get<3>(emp) = salary ;
            cout<<"Done!\n";
        }
    }
}
int choices( )
{
    int choice;
    cout<<"Enter the choice: \n";
    cout<<"1.Add new employees\n2.print all employees\n3.Delete by age\n4.Update Salary by name\n" ;
    cin>>choice ;
     if(choice == 1)
        add();
    else if(choice == 2)
        print();
    else if(choice == 3)
        dlt();
    else if(choice == 4)
        update();
    else
    {
        cout<<"Exit\n";
        return false ; // عشان اوقف اللوب
    }

}
void factory()
{
    while(true)
    {
        choices();
    }
}
int main()
{
    factory();
    return 0 ;
}
