
#include<iostream>
using namespace std ;
int main()
{

    string str;
    cin>>str; //"programming"
    string substring ;
    cin>>substring ;  //  gram  index of m is 6
    int counter = 0 ;
    bool found =false ;
    for(int i=0; i<str.size() - substring.size(); i++)  // 11 -4 = 7  يتحقق لحد نفس اندكس ال sub في النص
    {
        ++i; // skip the first char : skip index 0
        for(int j=0 ; j<substring.size(); j++) //
        {

            if(j+counter== i)  // عشان التسلسل
            {
                found = true ;
                counter++ ;
                break ;
            }
        }



    }
    if (found == true )
        cout<< "Yes!";
    else
        cout<<"No!" ;
    return 0;
}
