#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef vector<string> v ;
/*
    string str{"the quick brown fox jumps over the lazy dog"};
	vector<string> v{explode(str, ' ')};
	for(auto n:v) cout << n << endl;
*/
const vector<string> explode(const string& s, const char& c)
{
	string buff{""};
	vector<string> v;

	for(auto n:s)
	{
		if(n != c) buff+=n; else
		if(n == c && buff != "") { v.push_back(buff); buff = ""; }
	}
	if(buff != "") v.push_back(buff);

	return v;
}
int main()
{
   int tc , c = 1 ;
   cin>>tc;
   string msg;
   while(tc--)
   {

   cout<<"Case #"<<c<<":"<<endl;
   while(getline(std::cin,msg))
   {
       if(msg.length()!=0)
        break;
      v arr= {explode(msg,' ')};
      int i = 0 ;

    for(auto x = arr.begin() ; x!=arr.end() ; ++x)
       {
           string str = *x ;
         if(str.length()>i)
           cout<<str[i++];
       }

       cout<<endl;
   }
   c++;
   cout<<endl<<endl;

   }
    return 0;
}
