#include <iostream>

using namespace std;

int main()
{
    int n , k , num_avil=0 ;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int num ;
        cin>>num;
        if((num+k)<=5)
            num_avil++;
    }
    int ans = num_avil/3;
        cout<<ans;
    return 0;
}
