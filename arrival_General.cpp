#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>>n;
    int arr[100] , maxa=0, mina=100, maxi =0 , mini=0 ;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>maxa)
        {
            maxa=arr[i];
            maxi=i;
        }
     if(arr[i]<=mina)
        {
            mina=arr[i];
            mini=i;
        }
     }
     cout<<maxa<<maxi<<mina<<mini<<endl;
     cout << maxi + (n - 1 - mini) - (mini < maxi ? 1 : 0) << endl;
    return 0;
}
