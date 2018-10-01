#include <iostream>

using namespace std;

int main()
{
    int n,d,sum=0,joker;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum +=arr[i];
        }
    int z =((n-1)*10)+sum;
    if(z>d)
        cout<<"-1"<<endl;
    else
    {joker = (z-sum)/5;
    for(int i=z;z<=d-5;i+=5)
    {
        joker++;
        z +=5;
    }
    cout<<joker<<endl;
    }

    return 0;
}
