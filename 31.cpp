#include<iostream>
using namespace std;

// int f(int n){
//     if(n==1 or n==0){
//         return 1;
//     }
//     int ans = n*f(n-1);
//     return ans;
// }

// int main(){
//     cout<<"Enter number ";
//     int n;
//     cin>>n;
//     int result = f(n); 
//     cout<<result;
//     return 0;
// }

// int fib(int n ){
//     if(n==0 or n==1){
//         return n;
//     }
//     return fib(n-1)+fib(n-2);
// }

// int main(){
//     cout<<fib(7);
//     return 0;
// }

// int sum(int n){
//     int val=0;
//     while(n>0){
//         val++;
//         n=n/10;
//     }
// }

// int main(){
//     cout<<"Enter number ";
//     int n;
//     cin>>n;
//     int result = sum(n);
//     cout<<result;
//     return 0;
// }

// int power(int m, int n){
//     if(n==0){
//         return 1;
//     }
//     return ((power(m,n-1))*m);
// }

int main(){
    int a, b, c;
    cout << "Enter the three numbers a, b & c" << endl;
    cin >> a >> b >> c;
    if (a >= b) {
        if (a >= c) {
            cout << "The Largest Among Three Numbers is : "
                 << a << endl;
        }
        else {
            cout << "The Largest Among Three Numbers is : "
                 << c << endl;
        }
    }
    else {
        if (b >= c) {
            cout << "The Largest Among Three Numbers is : "
                 << b << endl;
        }
        else {
            cout << "The Largest Among Three Numbers is : "
                 << c << endl;
        }
    }
    return 0;
}