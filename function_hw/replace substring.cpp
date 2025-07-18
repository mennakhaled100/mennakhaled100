#include<iostream>
using namespace std ;
void replaceSubstring(string input , string pattern  ,string to)
{
    string result = "" ;
    bool found = true;
     for(int i=0; i<input.size();)
     {
         bool match = true ;
         for(int j=0; j<pattern.size(); j++)
         {
             if(input[i+j] != pattern[j])
             {
                 match = false ;
                 break ;
             }
         }
         if(match)
         {
             i+=pattern.size() ;
              result+= to ;
         }
         else
         {
             result += input[i] ;
             i++;
         }

    }
    cout<<result<<"\n";

}
int main()
{
    string input , pattern , to ;
    cin>>input>> pattern >> to ;
    replaceSubstring(input , pattern , to) ;
    return 0 ;
}
