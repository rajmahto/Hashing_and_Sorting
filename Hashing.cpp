#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter size of array:";
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element:";
        cin>>a[i];
    }

    //precalculation
    int hashh[13]={0};
    for(int i=0;i<n;i++){
        hashh[a[i]]+=1;
    }
    cout<<"how many elements you want look?";
    int q;
    cin>>q;
    while(q--){
        cout<<"Which element?";
        int num;
        cin>>num;
        //fetch
        cout<<"frequency->"<<hashh[num]<<endl;

    }
     return 0;
}