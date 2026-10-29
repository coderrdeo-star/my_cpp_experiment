#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    string grade,performance;
    float m1,m2,m3,m4,m5,total,percentage;
    cout<<"Enter student name:";
    getline(cin,name);
    cout<<"Enter mark in Subject 1:";
    cin>>m1;
    cout<<"Enter mark in Subject 2:";
    cin>>m2;
    cout<<"Enter mark in Subject 3:";
    cin>>m3;
    cout<<"Enter mark in Subject 4:";
    cin>>m4;
    cout<<"Enter mark in Subject 5:";
    cin>>m5;
    total=m1+m2+m3+m4+m5;
    percentage=total/5;
    if(percentage>=90){
        grade="A+";
        performance="Excellent";
    }   
    else if(percentage>=80){
        grade="A";
        performance="Very Good";
    }   
    else if(percentage>=70){
        grade="B";
        performance="Good";
    }   
    else if(percentage>=60){
        grade="C";
        performance="Average";
    }   
    else if(percentage>=50){
        grade="D";
        performance="Pass";
    }   
    else{
        grade="F";
        performance="Fail";
    }
    cout<<"--STUDENT RESULT---- "<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Total Marks:"<<total<<endl;
    cout<<"Percentage:"<<percentage<<endl;
    cout<<"Grade:"<<grade<<endl;
    cout<<"Performance:"<<performance<<endl;
    return 0;
    
}