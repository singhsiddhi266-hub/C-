#include <iostream>
using namespace std;

// void count_even_odd(int n){
//     int even_count=0, odd_count=0;
//     for(; n>0; n=n/10){
//         if((n%10%2)==0){
//             even_count++;
//         }
//         else{
//             odd_count++;
//         }
//     }
//     cout<<even_count<<endl;
//     cout<<odd_count;
// }
// int main(){
//     int n; cin>>n;
//     count_even_odd(n);
//     return 0;
// }
// void count(int arr[], int size){
//     int even_count=0;
//     int odd_count=0;
//     for(int i=0; i<size; i++){
//         if(arr[i]%2==0){
//             even_count++;
//         }
//         else{
//             odd_count++;
//         }
//     }
//     cout<<even_count<<endl;
//     cout<<odd_count;

// }
// int main(){
//     int size;
//     cin>>size;
//     int arr[size];
//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }
//     count(arr, size);
//     return 0;
// }
// int sum(int arr[], int n){
//     int posSum=0;
//     for(int i=0; i<n; i++){
//         if(arr[i]>0){
//             posSum=posSum+arr[i];
//         }
//     }
//     return posSum;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int ans=sum(arr, n);
//     cout<<ans;
//     return 0;
// }
// void gradeClassifier(int arr[], int size){
//     char grade[size];
//     for(int i=0; i<size; i++){
//         if(arr[i]>=90){
//             grade[i]='A';
//         }
//         else if(arr[i]>=80){
//             grade[i]='B';
//         }
//         else if(arr[i]>=70){
//             grade[i]='C';
//         }
//         else{
//             grade[i]='D';
//         }
//     }
//     cout<<"Grades: ";
//     for(int i=0; i<size; i++){
//         cout<<grade[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int size;
//     cin>>size;
//     int arr[size];
//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }
//     gradeClassifier(arr, size);
//     return 0;
// }
int main(){
    int a,n, max=INT_MIN, second_max=0;
    cin>>a;
    for(int i=1; i<=a; i++){
        cin>>n;
        if(n>max){
            second_max=max;
            max=n;                               //second largest element
        }
        else if(n>second_max && n<max){
            second_max=n;
        }
    }
    cout<<second_max;
    return 0;
}
// int main(){
//     int n, max=INT_MIN, second_max=0;
//     cin>>n;
//     int arr[n];
//     for(int i=1; i<=n; i++){
//         cin>>arr[i];
//         if(arr[i]>max){
//             second_max=max;
//             max=arr[i];
//         }
//     }
//     cout<<second_max;
//     return 0;
// }