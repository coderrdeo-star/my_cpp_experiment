#include<iostream>
#include<string>
using namespace std;
class phone{
private:
    string model;
public:
    phone(string model){
        this->model=model;
    }
    void Print(){
        cout<<model<<endl;
    }
};
int main(){
    phone ph("iphone");
    ph.Print();
    return 0;
}