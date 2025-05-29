#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){//writing the function
    for(int i=0;i<=n-2;i++){
        int mini = i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini])mini = j;
        }
        int temp = arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];//array initialization 
    for(int i=0;i<n;i++){
        cin>>arr[i];//adding up of elements 
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++)cout<<arr[i]<<endl;//printing sorted array 
    return 0;
}