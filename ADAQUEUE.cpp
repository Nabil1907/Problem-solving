#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;
    int tc ;
    string order ;
    cin>>tc;

    while(tc)
    {
        cin>>order;
        if(order =="back")
        {
            if(dq.empty())
             cout<<"No job for Ada?"<<endl;
             else
             {   deque < int > :: iterator  pt = dq.begin();
                 cout<<*(pt+dq.size()-1)<<endl;
                 dq.erase(pt);
             }
        }
        else
            if(order=="front")
            {
                if(dq.empty())
             cout<<"No job for Ada?"<<endl;
             else
             {
                 deque < int > :: iterator  pt = dq.begin();
                 cout<<*(pt)<<endl;
                 dq.erase(pt);
             }
            }
        else
             if(order=="reverse")
               reverse(dq.begin(),dq.end());
        else
            if(order=="push_back")
        {
            int N ;
            cin>>N;
            dq.push_back(N);
        }
        else
            if(order=="toFront")
        {
            int N ;
            cin>>N;
            dq.push_front(N);
        }
        tc--;
    }
    return 0;
}
