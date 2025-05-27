#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n){//function for insertion sort
    for(int i=0;i<=n-1;i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;

            j--;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];//Initialization of an array 
    for(int i=0;i<n;i++){
        cin>>arr[i];// Adding values in array 
    }
    insertion_sort(arr,n);//function calling
    for(int i=0;i<n;i++)cout<<arr[i]<<endl;//printing the sorted array
    return 0;
}