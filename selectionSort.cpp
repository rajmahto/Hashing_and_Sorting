#include<bits/stdc++.h>
using namespace std;
void selectionSort(int a[],int n){
     for(int i=0;i<n-2;i++){
        int mini=i;
        for(int j=i;j<n-1;j++){
            if(a[j]<a[mini]){
                mini=j;
            }
        }
            int temp=a[mini];
            a[mini]=a[i];
            a[i]=temp;
        
     }
}
int main()
{
    cout<<"Enter the size of the array:";
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element:";
        cin>>a[i];
    }
     selectionSort(a,n);

    cout<<"After Selection Sort:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
     return 0;
}