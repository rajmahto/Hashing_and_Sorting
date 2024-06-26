#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int a[],int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
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
     BubbleSort(a,n);

    cout<<"After Bubble Sort:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
     return 0;
}