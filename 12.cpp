#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// int Prime(int n){
//     int n;
//     bool flag=1;
//     for(int i=2;i<=n;i++){
//         if(n%i==0){
//             flag=0;
//             break;
//         }
//     }
//     return Prime;
// }

// int main(){
//     bool flag=1;
//     for(int i=2;i<=int n;i++){
//         if(Prime(i)==1){
//             if(Prime(n-i)==1){
//                 cout<<"Therefore "<<n<<i<<n-i;
//                 flag=0;
//             }
//         }
//     }
//     if(flag==1){
//         cout<<"Cannot be";
//     }
//     return 0;
// }
// bool isPrime(int number) {
//     if (number <= 1)
//         return false;
//     int sqrtNum = sqrt(number);
//     for (int i = 2; i <= sqrtNum; i ++) {
//         if (number % i == 0)
//             return false;
//     }
//     return true;
// } 

// void printPrimeTriangle(int lines) {
//     int currentNumber = 2;
//     for (int i = 1; i <= lines; i++) {
//         for (int j = 1; j <= lines - i; j++)
//             cout << "I";
//         for (int j = 1; j <= i; j++) {
//             while (!isPrime(currentNumber)){
//                 ++currentNumber;
//             }
//             cout << currentNumber << " ";
//             ++currentNumber;
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int lines;
//     cout << "Enter the number of lines for the prime triangle: ";
//     cin >> lines;

//     cout << "Prime triangle:" <<endl;
//     printPrimeTriangle(lines);

//     return 0;
// }
// bool isPrime(int number) {
//     if (number <= 1){
//         return false;
//     }
//     int sqrtNum = sqrt(number);
//     for (int i = 2; i <= sqrtNum; i++) {
//         if (number % i == 0){
//             return false;
//         }
//     }
//     return true;
// }

// void findPrimeSum(int number) {
//     for (int i = 2; i <= number / 2; i++) {
//         if (isPrime(i) && isPrime(number - i)) {
//             cout << number << " = " << i << " + " << number - i << endl;
//             return;
//         }
//     }
//     cout << number << " cannot be expressed as the sum of two prime numbers." <<endl;
// }

// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;

//     findPrimeSum(number);

//     return 0;
// }
// bool isPrime(int number) {
//     if (number <= 1)
//         return false;
//     int sqrtNum = sqrt(number);
//     for (int i = 2; i <= sqrtNum; i++) {
//         if (number % i == 0)
//             return false;
//     }
//     return true;
// }

// void findPrimeSum(int number) {
//     bool found = false;
//     for (int i = 2; i <= number / 2; i++) {
//         if (isPrime(i) && isPrime(number - i)) {
//             cout << number << " = " ;
//             cout << i << " + " << number - i <<endl;
//             found = true;
//         }
//     }
//     if (!found)
//         cout << "No pairs of prime numbers sum up to " << number <<endl;
// }

// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
//     findPrimeSum(number);
//     return 0;
// }

// void fun(int* x){
//     int y;
//     cout<<x<<endl;
//     cout<<*x<<endl;
//     *x = 29;
//     cout<<*x<<endl; 
// }
// int main(){
//     int x=9;
//     fun(&x);
//     cout<<x;
//     return 0;
// }
// long factorial (long p){
//     if(p>1){
//         return(p*factorial(p+1));
//     }
//     else{
//         return 1;
//     }
// }
// int main(){
//     long q=3; 
//     cout<<q<<"! = "<<factorial(q);
//     return 0;
// }
//int main(){
    // vector<int> v(8);
    // for(int i=0;i<8;i++){
    //     cin>>v[i];
    // }
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl<<"Enter x: "; 
    // int x;
    // cin>>x;
    // int occurence =0;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]> x){
    //         occurence++;
    //     }
    // }
    // cout<<"Total number of elements greater than "<<x<<" are "<<occurence;

//    QUESTION 1 

    // int n;
    // cout<<"Enter size of array:";
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // cout<<"Array : ";
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // } 
    // int even=0,odd=0 ;
    // for(int i=0;i<n;i++){
    //     if(arr[i]%2==0){
    //         even++;
    //     }
    //     else{
    //         odd++;
    //     }
    // }
    // cout<<endl<<"Odd Numbers = "<<odd;
    // cout<<endl<<"Even Numbers = "<<even;

//    QUESTION 2 

    // int n;
    // cout<<"Enter size of array: ";
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // cout<<"Array : ";
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // int high=arr[0];
    // int low=arr[n];
    // for(int i=0;i<n;i++){
    //     if(arr[i]>high){
    //         high=arr[i];
    //     }
    //     else if(low>arr[i]){
    //         low=arr[i];
    //     }
    // }
    // cout<<endl<<high<<endl;
    // cout<<low<<endl;
    // cout<<"Sum of the greatest and the smallest integer present in the array is "<< high+low ;

//    QUESTION 3

    // int n;
    // cout<<"Enter size of array: ";
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // cout<<"Array : ";
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl<<"Reversed Array is: ";
    // for(int i= n-1;i>=0; i--){
    //     cout<<arr[i]<<" "; 
    // }

//    QUESTION 4

    // int n;
    // cout<<"Enter size of array: ";
    // cin>>n;
    // int ar1[n],ar2[n];
    // cout<<"Enter elements of Array 1: ";
    // for(int i=0;i<n;i++){
    //     cin>>ar1[i];
    // }
    // cout<<"Enter elements of Array 2: ";
    // for(int i=0;i<n;i++){
    //     cin>>ar2[i];
    // }
    // int m=ar1[0];
    // int k=ar2[0];
    // for(int i=0;i<n;i++){
    //     if(m>ar1[i]){
    //         m=ar1[i];
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     if(k>ar2[i]){
    //         k=ar2[i];
    //     }
    // }
    // cout<<endl<<"Min value possible is "<<m<<" + "<<k<<" = "<<m+k;

// int main(){
//     int arr[6]={3,1,2,4,0,6};
//     int x;
//     cout<<"Enter x: ";
//     cin>>x;
//     int count=0;
//     for(int i=0;i<6;i++){
//         for(int j=i+1;j<6;j++){
//             for(int k=j+1;k<6;k++){
//                 if(arr[i]+arr[j]+arr[k]==x){
//                 count++;
//                 cout<<arr[i]<<"+"<<arr[j]<<"+"<<arr[k]<<"="<<x<<endl;
//                 }
//             }
//         }
//     }
//     cout<<"Total pairs in array that sum upto "<<x<<" is "<<count;
// }

// int main(){
//     int arr[7]={1,4,2,3,2,1,4};
//     for(int i=0;i<7;i++){
//         for(int j=i+1;j<7;j++){
//             if(arr[i]==arr[j]){
//                 arr[i]=arr[j]=-1;
//             }
//         }
//     }
//     for(int i=0;i<7;i++){
//         if(arr[i]>0){
//             cout<<arr[i];
//         }
//     }
//     return 0;
// }
// int main(){
//     int arr[7]={1,4,2,5,3,9,6};
//     int size=7;
//     int max=arr[0];
//     for(int i=1;i<7;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<max;
//     int m;
//     for(int i=1;i<7;i++){
//         if(arr[i]>m){
//             m=arr[i];
//         }
//     }
//     cout<<m;
//     return 0;
// }
// int secondLargeEle(int array[], int size){
//     int max= INT16_MIN;
//     int second_max= INT16_MIN;
//     for(int i=0;i<size;i++){
//         if(array[i]>max){
//             max=array[i];
//         }
//     }
//     for(int i=0;i<size;i++){
//         if(array[i]>second_max && array[i]!=max){
//             second_max=array[i];
//         }
//     }
//     return second_max;
// }

// int main(){
//     int array[]={2,3,5,7,6,1,7};
//     int n=7;
//     cout<< secondLargeEle(array,n);
// }
// int main(){
//     vector<int> v={1,2,3,4,5};
//     int k=2;
//     k=k%v.size();
    
//     reverse(v.begin(), v.end());
//     reverse(v.begin(), v.begin()+k);
//     reverse(v.begin(), v.end());

//     for(int a:v){
//         cout<<a<<" ";
//     }cout<<endl;
//     return 0;
// }
// void sort(vector<int> &v){
//     int count =0;
//     for(int ele: v){
//         if(ele==0){
//             count++;
//         }
//     }
//     for(int i=0;i<v.size();i++){
//         if(i<count){
//             v[i]=0;
//         }
//         else{
//             v[i]=1;
//         }
//     }
// }
// void sort(vector<int> &v){
//     for(int i=0;i<v.size();i++){
//         int m =v[i]*v[i];
//         v[i]=m;
//     }
//     for(int i=0;i<v.size();i++){
//         if(v[i]>v[i+1]){
//             v[i]=v[i+1];
//         }
//     }
    
//     return;
// }

// bool checkPreSufSum(vector<int> v){
//     int total =0;
//     for(int i=0;i<v.size();i++){
//         total+=v[i];
//     }
//     int pre_sum=0;
//     for(int i=0;i<v.size();i++){
//         pre_sum+=v[i];
//         int suf_sum = total - pre_sum;

//         if(suf_sum==pre_sum){
//             return true;
//         }
//     }

//     return false;
// }

// int main(){
//     int n;
//     cin>>n;

//     vector<int> v(n);

//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     cout<<checkPreSufSum(v)<<endl;
//     return 0;
// }