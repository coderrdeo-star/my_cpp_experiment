#include<iostream>
using namespace std;
int main(){
    int arr[]={1,92,35,55,68,68};
    int max1=0;
    int max2=0;
    int max3=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max3=max2;
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2){
            max3=max2;
            max2=arr[i];
        }
        else if(arr[i]>max3){
            max3=arr[i];
        }
    }
    cout<<max3;
    return 0;
}
