#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
const int N =109;
typedef pair<pair<string,int> ,pair<int,int> > pr;
pr arr[N];
using namespace std;
bool my_func(pr i , pr j )
{  if(i.second.second!=j.second.second)
      return(i.second.second<j.second.second);
    else
    {
        if(i.second.first!=j.second.first)
        return(i.second.first<j.second.first);
        else
        return(i.first.second<j.first.second);

    }

}
int main()
{
    int n ;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string str ;
        int d ,m, y;
        cin>>str>>d>>m>>y;
        arr[i].first.first = str;
        arr[i].first.second = d;
        arr[i].second.first = m;
        arr[i].second.second = y;
    }
    sort(arr,arr+n,my_func);
     cout<<arr[n-1].first.first<<endl;
     cout<<arr[0].first.first<<endl;
   /* for(int i=0;i<n;i++)
    {
        cout<<arr[n].first.first<<endl;
        cout<<arr[0].first.first<<endl;
        //cout<<arr[i].first.first<<" "<<arr[i].first.second<<" "<<arr[i].second.first<<" "<<arr[i].second.second<<endl;

    }*/
    return 0;
}
