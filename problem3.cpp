#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={54,56,64,12,55};
    int n=size(arr);
    sort(arr,arr+n);
    cout<<arr[0];

}