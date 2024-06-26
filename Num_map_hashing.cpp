#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the size of array:";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element:";
        cin>>arr[i];
    }
    //pre-compute
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    cout<<"Number of queries:";
    int q;
    cin>>q;
    while(q--){
        cout<<"Which Number?"<<endl;
        int num;
        cin>>num;
         //fetch
        cout<<"frequency->"<<mpp[num]<<endl;
    }
     return 0;
}