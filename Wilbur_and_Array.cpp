#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{   int n , arr[200000];
     cin>>n;
     for(int i=0;i<n;i++)
        cin>>arr[i];
     int x = abs(arr[0]);
      for(int i=1;i<n;i++)
           x+=abs(arr[i]-arr[i-1]);
      cout<<x<<endl;

    return 0;
}
