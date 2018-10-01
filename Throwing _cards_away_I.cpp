#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n ;

    while(cin>>n&&n!=0)
    {

    deque<int>dq1;
    deque<int>dq2;
    for(int i =1;i<=n;i++)
        dq1.push_back(i); //push all element in deque
    while(dq1.size()!=1&&n!=0)
    {
     deque<int>::iterator pt = dq1.begin();
     dq2.push_back(*pt);
     dq1.pop_front();
     deque<int>::iterator pt2 = dq1.begin();
     dq1.push_back(*pt2);
     dq1.pop_front();
    }
    cout<<"Discarded cards:";
    for(int i =0;i<n-1;i++)
        {cout<<" "<<dq2[i];
        (i==n-2)?cout<<"":cout<<",";
        }
    cout<<endl;
    cout<<"Remaining card: "<<dq1[0]<<endl;

    }

    return 0;
}
