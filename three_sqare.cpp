    #include <iostream>
    #include <bits/stdc++.h>
    using namespace std;

    using namespace std;

struct square {
    int sq;
    int a;
    int b;
} s [50000];

bool isPerfectSquare (int p)
{
    int sqr = sqrt (p);

    if ( sqr * sqr == p ) return true;
    return false;
}

int main ()
{
    int testCase;
    scanf ("%d", &testCase);

    int len_s = 0;

    for ( int i = 0; i < 225; i++ ) {
        for ( int j = i; j < 225; j++ ) {
            s [len_s].sq = i * i + j * j;
            s [len_s].a = i;
            s [len_s].b = j;
            len_s++;
        }
    }

    while ( testCase-- ) {
        int k;
        scanf ("%d", &k);

        //printf ("%d\n", len_s);

        bool printed = false;

        for ( int i = 0; i < len_s; i++ ) {
            if ( isPerfectSquare (k - s [i].sq) ) {
                int output [3];
                output [0] = s [i].a;
                output [1] = s [i].b;
                output [2] = (int) sqrt (k - s [i].sq);
                sort (output, output + 3);
                printf ("%d %d %d\n", output [0], output [1], output [2]);
                printed = true;
                break;
            }
        }

        if ( !printed ) printf ("-1\n");

    }

    return 0;
}

    /*int main()
    {   int n = 50000 ;
        pair <int ,pair<int,int>> ans[n];
        int sq =  sqrt(n);
       for(int i =0 ; i< n ;i++)
            ans[i].first = -1 ;
       for(int i  = 0 ; i <= sq ; i++)
       {
           for(int j  = 0 ; j <= sq ; j++)
       {
           for(int k  = 0 ; k <= sq ; k++)
       {

            if(i*i+j*j+k*k>n) break;
           if(ans[i*i+j*j+k*k].first==-1)
           ans[i*i+j*j+k*k] = {i,{j,k}};


       }
       }
       }
        int t ;
        cin>>t;
        while(t--)
        {
            int N;
            cin>>N;
            if(ans[N].first==-1)
                cout<<-1<<endl;
            else
            cout<<ans[N].first<<" "<<ans[N].second.first<<" "<<ans[N].second.second<<endl;
        }
        return 0;
    }
*/
