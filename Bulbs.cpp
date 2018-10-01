#include <iostream>

using namespace std;

int main()
{
    int n , m , arr[101] ,sum=0;
    cin>>n>>m;
    for(int i =0;i<n;i++)
    {
        int z ;
        cin>>z;
        for(int i =0 ; i<z ; i++)
        {
            int x ;
            cin>>x;
            arr[x-1]=1;
        }
    }
    for(int i =0;i<m ; i++)
    {
        if(arr[i]==0)
            sum++;

    }
    (sum==0)? cout<<"YES" : cout<<"NO";

    return 0;
}
