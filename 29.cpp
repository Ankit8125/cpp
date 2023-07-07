// #include<iostream>
// using namespace std;

// void swap(int *x, int *y){
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }

// int main(){
//     int x = 10;
//     int y = 20;
//     int *p1 = &x;
//     int *p2 = &y;
//     cout<<x<<" "<<y<<endl; 
//     swap(p1, p2);

//     cout<<x<<" "<<y;

//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    //case 1
    // int arr[2]={1,19};
    // int *ptr=&arr[0];
    // cout<<ptr<<" "<<*ptr<<"\n";
    // cout<<*ptr++<<"\n";
    // cout<<arr[0]<<" "<<arr[1]<<"\n";
    // cout<<ptr<<" "<<*ptr;

    //case 2
    // int arr[2]={5,4};
    // int *ptr=&arr[0];
    // cout<<(*ptr)++<<"\n";
    // cout<<arr[0]<<" "<<arr[1];

    //case 3
    // int arr[2]={7,5};
    // int*ptr=&arr[0];
    // cout<<*++ptr<<endl;
    // cout<<arr[0]<<" "<<arr[1]<<endl;

    //case 4
    // int arr[2]={8,2};
    // int *ptr=&arr[0];
    // cout<<++*ptr<<endl;
    // cout<<arr[0]<<" "<<arr[1];
    // int *ptr= NULL;
    // cout<<ptr<<endl;
    // {
    //     int x=10;
    //     ptr=&x;
    // }
    // cout<<ptr;
    float f =11.3;
    int x=10;
    void *ptr=&f;
    ptr=&x;

    int *intPtr = (int *)ptr;
    cout<<*intPtr;

    return 0;
}