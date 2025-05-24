#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        for(int j =0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){//base condition
                int temp = arr[j+1];//swaping of elements if base condition
                // gets satisfied
                arr[j+1]=arr[j];
                arr[j]= temp;
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Start Entering the values:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    cout<<"Elements after sorting"<<endl;
    for(int i=0;i<n;i++)cout<<arr[i]<<endl;
    return 0;
}