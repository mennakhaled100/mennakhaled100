#include <iostream>
using namespace std ;
#include<vector>
#include<algorithm>
int main()
{
    int n;
        cin>>n;
    pair<int , int > p ;
    vector<pair<int , int >> vp ;
      while(n--)
    {
        int first , second;
        cin>>p.first >>p.second;
        vp.push_back(p);
    }
    sort(vp.begin()  ,vp.end());
    for(auto p :  vp)
    {
        cout<<p.first <<" " << p.second<<"\n"; ;

    }


    return 0 ;
}
