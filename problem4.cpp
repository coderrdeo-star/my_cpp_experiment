#include<iostream>
using namespace std;
int main(){
    int arr[]={45,25,65,66,45};
    int n=size(arr);
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i]*=arr[i+1];
    }
    for(int num:arr){
        cout<<num<<",";
    }
}