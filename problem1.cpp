#include<iostream>
using namespace std;
int main(){
    int arr[]={1,92,35,55,68};
    int max=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
    return 0;
}
