#include<iostream>
using namespace std;

int main(){
    int x =10;
    float y = 8.2;

    int *ptr=&x;
    cout<<"Address stored inside ptr: "<<ptr<<endl;
    cout<<"Value present at the address stored in ptr: "<<*ptr<<endl;
    
    float *ptrf=&y;
    cout<<"Address stored inside ptr: "<<ptrf<<endl;
    cout<<"Value present at the address stored in ptr: "<<*ptrf<<endl;

    x=23;

    cout<<"New updated value of x: "<<x<<endl;
    cout<<"ptr still pointing to same memory which has 23 instead of 10 = "<<*ptr<<endl;

    *ptr=50;
    cout<<"New value of x "<<x<<endl;
    cout<<"New value pointed by ptr "<<*ptr<<endl;

    int valueAtX = *ptr;
    cout<<valueAtX<<endl;
    return 0;
}