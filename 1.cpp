#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/* Lecture  1 */
// int main(){
//     cout<<"Hi";
//     return 0;
// }

int main(){
    // int c=6;
    // cout<<c++<<endl;
    // int b=c+5;
    // cout<<b<<endl; 
    // string pqrstuvwx;
    // cout<<(4+2+"pqrstuvwx");
    // return 0;
    // int marks ;
    // cin>> marks;
    // marks >33 ? cout<<"Pass" : cout<<"Fail";
    // int m;
    // cin>>m;
    // char character ;
    // cin >> character ; 
    // switch (m)
    // {
    // case 6 : 
    // cout << "Hi";
    //     break;
    
    // default:
    //     break;
    // }
    // float a =13;
    // cout<<(a=a+5)<<endl;
    // for(int i=1;i<6;i++){
    //     if(i==3){
    //         continue;
    //     }
    //     cout<<i<<endl;
    // }
    int i=1;
    while(i<6){
        if(i==3){
            i++;
            continue;
        }
        else if(i!=3){
            cout<<i<<endl;
        }
        i++;
    }

    return 0;    
}