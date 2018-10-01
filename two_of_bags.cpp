#include <iostream>

using namespace std;

int main()
{
    int y , x, k ,n ;
    cin>>y>>k>>n;
    x=k-y%k;
    int top = n - y;
    if(x<=top)
    {
        cout<<x<<" ";
        x=k+x;
        while(x<=top)
        {
            cout<<x<<" ";
            x=x+k;
        }
        cout<<""<<endl;
    }
    else
        cout<<"-1"<<endl;

    return 0;
}