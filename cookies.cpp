#include <iostream>

using namespace std;

int main()
{
    int n ,arr[109] , odd =0 , even = 0;
    cin>>n ;
    for(int i=0;i<n;i++ )
    {
        cin>>arr[i];
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    if(odd%2==1)
       cout<<odd<<endl;
    else
       cout<<even<<endl;
    return 0;
}
