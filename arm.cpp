#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no:";
    cin>>n;
    int out=n;
    int ans=0;
    while(n>0){
        ans+=(n%10) *(n%10) *(n%10);
        n/=10;
        }
    if(out==ans){
        cout<<"armstrong";
    }
    else{
        cout<<"not armstrong";
    }
}