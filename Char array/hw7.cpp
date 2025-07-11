#include<iostream>
using namespace std ;
int main()
{
   /* string str ;
    cin>>str ;
    int frequency[200] = {0};
    for(int i=0; i<str.size(); ++i)
    {
        frequency[str[i]]++;
    }
    for(int i='a' ; i <= 'z' ; i++)
        {
            if(frequency[i]) //عشان ميطبعش كل الحروف
            {
                cout<<(char) i <<" " << frequency[i]<<"\n" ;
        }
        }
        for(int i='A'  ; i <= 'Z' ; i++)
        {
            if(frequency[i]) //عشان ميطبعش كل الحروف
            {
                cout<<(char) i <<" " << frequency[i]<<"\n" ;
        }
        }

        */
        string str;
        cin>>str;
        for(int i=0; i<str.size();)
        {
            char currentchar = str[i];
            int counter=1;
            for(int j=i+1; j<str.size() && str[j]==currentchar ;j++)
            {
                counter++;

            }
            cout<<currentchar<<"_"<<counter<<"\n";
            i += counter ; //بينط ع الحرف الجديد
        }


    return 0 ;
}

