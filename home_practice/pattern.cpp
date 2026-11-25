#include <iostream>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<j;
//         }
//         for(int spaces=1; spaces<=2*(n-i)-1; spaces++){
//             cout<<" ";
//         }
//         for(int j=i; j>=1; j--){
//             if(j==n && i==n){
//                 continue;
//             }
//             cout<<j;
//         }
//         cout<<endl;
//     }
//      for(int i=n-1; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             cout<<j;
//         }
//         for(int spaces=1; spaces<=2*(n-i)-1; spaces++){
//             cout<<" ";
//         }
//         for(int j=i; j>=1; j--){
//             if(j==n && i==n){
//                 continue;
//             }
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int spaces=1; spaces<=2*(n-i); spaces++){
//             cout<<" ";
//         }
//         for(int stars=1; stars<=i; stars++){
//             cout<<stars;
//         }
//         for(int space=1; space<=2*i-3; space++){
//             cout<<" ";
//         }
//         if(i>1)for(int star=i; star>=1; star--){
//             cout<<star;
//         }
//         cout<<endl;
//     }
//     for(int i=n-1; i>=1; i--){
//         for(int spaces=1; spaces<=2*(n-i); spaces++){
//             cout<<" ";
//         }
//         for(int stars=1; stars<=i; stars++){
//             cout<<stars;
//         }
//         for(int space=1; space<=2*i-3; space++){
//             cout<<" ";
//         }
//         if(i>1)for(int star=i; star>=1; star--){
//             cout<<star;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main(){
//     int t,n;
//     cin>>t;
//     for(int i=1; i<=t; i++){
//         cin>>n;
//         bool rowflag=true;
//         for(int i=1; i<=2*n; i++){
//             if(i%2) rowflag=!rowflag;
//             bool flag=rowflag? false:true;
//         for(int j=1; j<=2*n; j++){
//             if(j%2) flag=!flag;
//             if(!flag) cout<<"#";
//             else cout<<".";
//         }
//         cout<<endl;
//     }
// }
// return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int space=1; space<=n-i; space++){
//             cout<<" ";
//         }
//         for(int st=i; st>=1; st--){
//             cout<<st;
//         }
//         for(int st=2; st<=i; st++){
//             cout<<st;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main(){
//     int t,n;
//     cin>>t;
//     for(int i=1; i<=t; i++){
//         cin>>n;
//         bool rowflag=true;
//         for(int i=1; i<=2*n; i++){
//             if(i%2) rowflag=!rowflag;
//             bool flag= rowflag ? false:true;
//             for(int j=1; j<=2*n; j++){
//                 if(j%2) flag=!flag;
//                 if(!flag) cout<<"#";
//                 else cout<<".";
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }