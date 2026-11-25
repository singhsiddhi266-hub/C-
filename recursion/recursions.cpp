#include <iostream>
using namespace std;
// void p(int a, int b){
//     if(a>b) return;
//     cout<<a<<endl;
//     p(a+1,b);
// }
// int main(){
//     int a, b;             //recursion from a to b;
//     cin>>a>>b;
//     p(a,b);
//     return 0;
// }
// int multiply(int a, int b){
//     if(b==0){
//         return 0;
//     }
//     return a+multiply(a,b-1);        //recursion for a*b
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int ans=multiply(a,b);
//     cout<<ans;
//     return 0;
// }
// int divide(int a, int b) {
//     if (a < b) {
//         return 0;
//     }

//     return 1 + divide(a - b, b);        //recursion of a/b
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int ans=divide(a,b);
//     cout<<ans;
//     return 0;
// }
// int fact(int n){
//     if(n==0) return 1;
//     return n*fact(n-1);
// }                                   //factorial of n
// int main(){
//     int n;
//     cin>>n;
//     int ans=fact(n);
//     cout<<ans;
//     return 0;
// }
// int cdr(int n){
//     if(n==0) return 0;
//     int rd=cdr(n/10);
//     return rd+1;                   //cont no of digits recursively
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans=cdr(n);
//     cout<<ans;
//     return 0;
// }
// int ad(int n){
//     if(n==0) return 0;
//     int rd=ad(n/10);
//     return rd+(n%10);
// }                              //add digits recursively
// int main(){
//     int n;
//     cin>>n;
//     int ans=ad(n);
//     cout<<ans;
//     return 0;
// }
// int rev(int n, int reverse){
//     if(n==0) return reverse;
//     reverse*=10;
//     reverse+=n%10;
//     return rev(n/10,reverse);
// }
// int main(){
//     int n, reverse=0;                   //reverse of a number 
//     cin>>n;
//     int ans=rev(n, reverse);
//     cout<<ans;
//     return 0;
// }
// long long powr(int x, int y){
//     if(y==0) return 1;
//     if(y%2) return powr(x*x,y/2)*x;
//     return powr(x*x, y/2);
// }
// int main(){                         //power of x^y
//     int x,y;
//     cin>>x>>y;
//     powr(x,y);
//     return 0;
// }