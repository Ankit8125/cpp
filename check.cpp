#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

// int binarySearch(int arr[], int size, int key){
//     int start=0;
//     int end = size - 1;
//     int mid=(start+end)/2;
//     while(start<=end){
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(key>arr[mid]){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=(start + end)/2;
//     }
// }

// int main(){ 
//     int even[6]={2,4,6,8,12,18};
//     int evenIndex= binarySearch(even,6,6);
//     cout<<"Index of 6 is "<<evenIndex;
//     return 0;
// } 

// int main(){
//     int arr[]={-2,-1,0,3,6,8,11,12};
//     int x=10,n=8,i=0,j=n-1,answer=0;
//     while(i<j){
//         if(arr[i]+arr[j]==x){
//             cout<<"Sum is "<<arr[i]<<" and "<<arr[j]<<endl;
//             answer+=1;
//             i++;
//             j--;
//         }
//         else if(arr[i] + arr[j] <x){
//             i++;
//         }
//         else{
//             j--;
//         }
//     }
//     cout<<answer;
//     return 0;
// }

// int main(){
//     int m=3,n=3;
//     int arr[m][n]={{1,2,3},{4,5,6},{7,8,9}};
//     int tran[n][m];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             tran[j][i]=arr[i][j];
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<tran[i][j];
//         }cout<<endl;
//     }
//     return 0;
//     for(int i=0;i<m;i++){
        
//     }
// }

// int main(){
//     int m=3,n=3;
//     int arr[m][n]={{4,2,3},{1,5,1},{5,0,7}};
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i][j]==0){
//                 for(int k=0;k<m;k++){
//                     arr[k][j]=0;
//                 }
//                 for(int k=0;k<n;k++){
//                     arr[i][k]=0;
//                 }
//             break;
//             }
//         }break;
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }    
//     return 0;
// }



// long int fact(int x){
//     int factorial =1;
//     for(int i=2;i<=x;i++){
//         factorial=factorial*i;
//     }
//     return factorial;
// }

// int main(){
//     int n;
//     cout<<"Enter number: "<<endl;
//     cin>>n;
//     cout<<"Pascal Triangle is: "<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
//         }cout<<endl;
//     }
//     return 0; 
// }
int maxOnesRow(vector<vector<int> >&V){
    int maxOnes= INT16_MIN;
    int maxOnesRow=-1;
    int colums=V[0].size();
    for(int i=0;i<V.size();i++){
        for(int j=0;j<V[i].size();j++){
            if(V[i][j]==1){
                int numberOfOnes=  colums-j;
                if(numberOfOnes > maxOnes){
                    maxOnes=numberOfOnes;
                    maxOnesRow=i;
                }
                break;
            }
        }
    }
    return maxOnesRow;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int> >vec(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    int res= maxOnesRow(vec);
    cout<<"Row is "<<res<<endl;
    return 0;
}