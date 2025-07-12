#include <iostream>
using namespace std ;
#include<vector>
#include<algorithm>
#include <tuple>
#include <string>
int main()
{
   int n ;
   cin>>n;
   vector<tuple<int ,int  ,char, long long ,string>> tup ;

   while(n--)
   {
       int value , weight ;
       char  type ;
       long long data ;
       string name ;
       cin>>value>> weight >>type>>data>>name ;
       tup.push_back({value, weight, type,data, name});
       //  tup.push_back(make_tuple(value, weight, data, type, name));
   }
   sort(tup.begin() , tup.end(), [](const tuple<int , int ,char,long long, string>&a , const tuple<int ,int  ,char ,long long, string >&b)
                                         {
                                             if(get<0>(a) != get<0>(b))
                                                return get<0>(a) < get<0>(b) ;
                                             if(get<1>(a) != get<1>(b))
                                                return get<1>(a) < get<1>(b) ;
                                             if(get<2>(a) != get<2>(b))
                                                return get<2>(a) < get<2>(b) ;
                                             if(get<3>(a) != get<3>(b))
                                                return get<3>(a) < get<3>(b) ;
                                             return get<4>(a) < get<4>(b) ;
                                         });
   for(int i=0; i<tup.size(); i++)
   {
       auto[value , weight,  type,data, name] =tup[i];
       cout << value << " " << weight << " "  << type<< " "<< data  << " " << name << endl;
   }

    return 0 ;
}

