#include<iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int main(){
    // int r,c;
    // for(int r=1;r<4;r++){ 
    //     for(int c=1;c<7;c++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int m=5;m>1;m--){
    //     for(int n=1;n<m;n++){
    //         cout<<"*";
    //     }
    //     cout<<endl;        
    // }
    // int n;
    // cin>>n;
    // for(int i =1;i<=(n-2);i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    // int rows,columns;
    // cin>>rows>>columns;
    // for(int i=1; i <= rows; i++){
    //     for(int j=1; j <= columns; j++){
    //         if(i==1 || j==1 || i==rows || j==columns){
    //             cout<<j;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    // int n;
    // cin>>n;
    // int dig=0;
    // while(n>0){
    //     dig=n%10;
    //     cout<<dig<<"";
    //     dig=0;
    //     n=n/10;
    // }
    // int a,b;
    // cin>>a>>b;               
    // cout<<pow(a,b);
    // return 0;
    //        int a,b,res=1;
    //    cout<<"Insert the base:";
    //    cin>>a;
    //    cout<<"Insert the power:";
    //    cin>>b;
    //    for(int i=0;i<b;i++){
    //        res=res*a;
    //    }
    //     cout<<"The result is :"<<res;
    // int n,prod=1;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     prod=prod*i;
    // }
    // cout<<"Factorial of "<<n<< " is "<<prod;
    // int n,temp,sum=0,r;
    // for(int i ; 100<i<500 ;i++){
    //     temp = i;
    //     n=i%10;
    //     sum=sum+(n*n*n);
    //     i=i/10;
    //     if(temp==sum){
    //         cout<<sum;
    //     }
    // }
    // if(temp==sum){
    //     cout<<"Armstrong";
    // }
    // else{
    //     cout<<"None";
    // }
    // int n, m ;
    // for(int n=0;n<5;n++){
    //     for(int m=0;m<5;m++){
    //         if (m==n){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
//    int low, high, i, flag;
//    cout<<"Enter two numbers(intervals): ";
//    cin>>low>>high;
//    cout<<"Prime numbers between "<<low<<" and "<<high<<" are: ";

//    // iteration until low is not equal to high
//    while (low < high) {
//       flag = 0;

//       // ignore numbers less than 2
//       if (low <= 1) {
//          ++low;
//          continue;
//       }

//       // if low is a non-prime number, flag will be 1
//       for (i = 2; i <= low / 2; ++i) {
//          if (low % i == 0) {
//             flag = 1;
//             break;
//          }
//       }

//       if (flag == 0)
//         cout<<low<<" ";

//       // to check prime for the next number
//       // increase low by 1
//       ++low;
//   }
    // int n,r,bin=0;
    // cin>>n;
    // for(int i =0;i<=n;i++){
    //     r=n%10;
    //     bin=bin+r*(pow(2,i));
    //     n=n/10;
    // }
    // cout<<bin;

    return 0;
}