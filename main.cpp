#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    auto res=unique(s.begin(),s.end());
    string a=string(s.begin(),res);

    int len=a.length();

    if(len%2==0)
        cout<<"Player2"<<endl;
    else
        cout<<"Player1"<<endl;

   }
}

