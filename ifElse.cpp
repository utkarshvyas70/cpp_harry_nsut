#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age";
    cin>>age;

    if(age>100){
        cout<<"\nYou are an immortal"<<endl;
    }
    else if(age>=18){
        cout<<"\n You can vote "<<endl;
    }
    else{
        cout<<"You cannot vote"<<endl;
    }
}