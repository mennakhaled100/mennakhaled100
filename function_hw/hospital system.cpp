#include<iostream>
#include<deque>
#include<vector>
using namespace std ;

vector<deque<string>> hospital(20) ;

void addPatientData()
{
    cin.ignore() ;
    cout<<"Enter name, status(0 for regular & 1 for urgent): \n";
       string patient;
       getline(cin , patient) ;

       cout<<"Enter specNumber(1 -> 20): \n";
      int sp ; cin>>sp ;
      int index = sp - 1 ;
      int len = patient.length() -1 ;

     if(hospital[index].size() >= 5 )
    {
        cout<<"Sorry we can't add more patients for this specialization" ;
    }

     else
        {
            char state = patient[len];  //اخر حرف
            if(state == '1')
                hospital[index].push_front(patient);
            else
                hospital[index].push_back(patient);
        }
}
void pickUp()
{
    cout<<"What is your specialize , doctor:\n " ;
    int sp; cin>>sp ;
    int index =sp-1;

    if(hospital[index].size() == 0)
        cout<<"No patients at the moment. Have rest, Dr\n";
    else
    {
        string patient = hospital[index].front();
        string name = "" ;
        int i=0;
        while(patient[i] !='\0' && patient[i] != '1' && patient[i] != '0' )
        {
            name += patient[i] ;
            i++;
        }
        cout<<"please " << name <<"go with doctor\n";
        hospital[index].pop_front() ;
    }
}
void print()
{
    cout<<"Enter number of specialization\n" ;
    int sp ; cin>>sp ;
    int index = sp -1 ;

    if (hospital[index].empty())
        cout << "No patients in specialization " << sp << "!\n";
    else
    {
         cout<<"Patients in the spec " <<sp <<":\n" ;
         for(int i=0; i<hospital[index].size(); i++)
            {
                cout<<i +1 <<")" << hospital[index][i]<<"\n" ;
         }

    }


}
int menu()
{
    int choice;
    cout<<"Enter your choice: \n" ;
    cout<<"1) Add new patient.\n2) Print all patient.\n3)Get next patient.\n4) Exit.\n" ;
    cin>>choice ;

    if(choice == 1)
        addPatientData();

    else if(choice == 2)
        print();
    else if(choice == 3)
        pickUp();
    else
    {
         cout<<"Exit\n";
        return false ;
    }
}
void system()
{
    while(true)
    {
        menu() ;
    }
}
int main()
{
    system();
    return 0 ;
}


