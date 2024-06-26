#include<bits/stdc++.h>
using namespace std;
void InsertionSort(int a[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j > 0 && a[j-1] > a[j]){
            int temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
            j--;
        }
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
     InsertionSort(a,n);

    cout<<"After Insertion Sort:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
     return 0;
}