#include <iostream>
using namespace std;
// int fmx(int arr[], int n){
//     int mx=arr[0];
//     for(int i=1; i<n; i++){
//         if(arr[i]>mx)
//         mx=arr[i];
//     }
//     return mx;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     cout<<fmx(arr,n);
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[int(le5)]={};
//     for(int i=0; i<n; i++) cin>>arr[i];
//     long long sum=0;
//     for(int i=0; i<n; i++) sum+=arr[i];
//     double avg=

// }
// int main(){
//     int n; cin>>n;
//     long long sum=0;
//     for(int i=0; i<n; i++){
//         int t; cin>>t;
//         sum+=t;
//     }
//     long long exsum=1ll * n *(n+1/2);
//     cout<<exsum-sum<<endl;
//     return 0;
// }
// int main(){
//     int n; cin>>n;
//     int count=0;
//     int arr[int(2*1e5)]={};
//     for(int i=0; i<n; i++){
//        cin>>arr[i];
//        long long mv=0;
//        for(int i=1; i<n; i++){
//         if(arr[i]<arr[i-1]){
//             arr[i]==arr[i-1];
//             mv+=abs(arr[i] - arr[i-1]);
//             arr[i]=arr[i-1];                       //increasing array
//         }
//        } 
//         cout<<mv;
//         return 0;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int mxe=arr[0];
//     for(int i=1; i<n; i++){
//         mx=max(mxe, arr[i]);
//         for(int row=1; row<=mxe; row++){
//             int ht=mxe-row+1;
//             for(int col=1; col<=n; col++){
//                 if(arr[col-1]>=ht) cout<<"*";
//                 else cout<<" ";
//                 cout<<"/t";
//             }
//             cout<<"/n";
//         }
//         return 0;
//     }
// int fmx(int arr[], int n){
//     int mx=arr[0];
//     for(int i=1; i<n; i++){
//         if(arr[i]>mx){
//             mx=arr[i];                //finding maximum element in an array
//         }
//     }
//     return mx;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];                    
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     cout<<fmx(arr,n);
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     long long expectedSum= 1LL * n*(n+1)/2;
//     long long givenSum=0;
//     for(int i=0; i<n-1; i++){               //missing number
//         int number;
//         cin>>number;
//         givenSum+=number;
//     }
//     cout<<expectedSum-givenSum;
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     long long arr[200000];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     long long moves=0;
//     for(int i=1; i<n; i++){
//         if(arr[i]<arr[i-1]){                //increasing array
//             moves+=arr[i-1]-arr[i];
//             arr[i]=arr[i-1];
//         }
//     }
//     cout<<moves;
//     return 0;
// }
// int main(){
//     int arr[]={2,1,5,7,3,9,6};
//     int n=sizeof(arr)/sizeof(int);
//     int mxe=arr[0];
//     for(int i=1; i<n; i++) mxe=max(mxe, arr[i]);
//     for(int row=1; row<=mxe; row++){
//         int ht=mxe-row+1;
//         for(int col=1; col<=n; col++){
//             if(arr[col-1]>=ht){
//                 cout<<"*";
//             }
//             else{                              //ladder probelm 
//                 cout<<" ";
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main(){
//     int arr[]={2,1,5,7,3,9,6};
//     int n=sizeof(arr)/sizeof(int);
//     int mxe=arr[0];
//     for(int i=1; i<n; i++){
//         mxe=max(mxe,arr[i]);
//     }
//     for(int row=mxe; row>=1; row--){              //ladder problem reversed
//         int ht=mxe-row+1;
//         for(int col=1; col<=n; col++){
//             if(arr[col]>=ht){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//INSERTION SORT
// void InsertionSort(int arr[], int n){
//     for(int i=1; i<n; i++){
//         for(int j=i; j>0; j--){
//             if(arr[j]<arr[j-1]) swap(arr[j], arr[j-1]);
//             else break;
//         }
//     }                      
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     InsertionSort(arr, n);
//     return 0;
// }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=1; i<n; i++){
        for(int j=i; j>0; j--){
            if(abs(arr[j]<abs(arr[j-1]))) swap(arr[j], arr[j-1]);
            else break;
        }
    }
}