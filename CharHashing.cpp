#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    cout<<"Enter the String:";
    string s;
    cin>>s;
   
   //pre_cal
   int hash[25]={0};
   for(int i=0;i<s.size();i++)
   {
    hash[s[i]-'a']+=1;
   }


    cout<<"Enter the number of queries:";
    int q;
    cin>>q;
    while(q--){
        cout<<"Which Character frequency you want look?";
        char c;
        cin>>c;
        cout<<"frequency->"<<hash[c-'a']<<endl;

    }
     return 0;
}