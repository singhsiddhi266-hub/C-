#include<iostream>
#include <cmath>
using namespace std;
// int sum(int n){
//     int sums=0;
//     for(; n>0; n=n/10){
//         int i=n%10;
//         sums+=i;
//     }
//      return sums;
// }
// int main(){
//     int n; cin>>n;
//     int add= sum(n);
//     cout<<add;
//     return 0;
// }
// bool isPrime(int n){
//     if(n<2) return 0;
//     for(int i=2; i*i<=n; i++){
//         if(n%i==0){
//             return 0;
//         }
//         return 1;
//     }
// }
// int main(){
//     int n; cin>>n;
//     bool Prime = isPrime(n);
//     cout<<Prime;
//     return 0;
// }
// bool isPalindrome(int x) {
//         int original=x;
//         long long reverse=0;
//         for(; x>0; x=x/10){
//             reverse=reverse*10+x%10;
//         }
//         if(reverse==original){
//             return true;
//         }
//         return false;
//     }
// int main(){
//     int x; cin>>x;
//     bool palindrome=isPalindrome(x);
//     cout<<palindrome;
//     return 0;
// }
// int count(int n){
//     int count=0;
//     for(; n>0; n=n/10){
//         int i=n%10;
//         count++;
//     }
//      return count;
// }
// int main(){
//     int n; cin>>n;
//     int add= count(n);
//     cout<<add;
//     return 0;
// }
// void prime(int n){
//     for(int x=2; x<=n; x++){
//         int i=2;
//         for(; i*i<=x; i++){
//             if(x%i==0) break;
//         }
//         if(i*i>x && n%x==0){
//             cout<<x<<" ";
//         }
//     }
// }
// int main(){
//     int n; cin>>n;
//     prime(n);
//     return 0;
// }
// bool isPrime(int n) {
//     if (n<2) {
//         return false;
//     }
//     for (int i=2; i*i<=n; i++) {
//         if (n % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int n;
//     cin>>n;
//     for(int i=2; i<=n; i++) {
//         if (isPrime(i)) {
//             cout<< i << " ";
//         }
//     }
//     return 0;
// }
// int gcd(int a, int b){
//     while(a){
//         int t=a;
//         a=b%a;
//         b=t;
//     }
//     return b;
// }
// int main(){
//     int a, b;
//     cin>>a>>b;
//     int ans=gcd(a,b);
//     cout<<ans;
//     return 0;
// }
// int gcd(int a, int b){
//     while (a != b) {
//         if (a > b)
//             a = a - b;
//         else
//             b = b - a;
//     }
//     return a;
// }
// int main() {
//     int a, b;
//     cin >> a >> b;
//     cout<<"GCD = "<<gcd(a,b);
//     return 0;
// }
// void p1tn(int n){
//     if(n==0) return;
//     p1tn(n-1);
//     cout<<n<<"\n";
// }
// int main(){
//     int n; cin>>n;
//     p1tn(n);
// }
// void p1tn(int n){
//     if(n==0) return;
//     cout<<n<<"\n";
//     p1tn(n-1);
// }
// int main(){
//     int n; cin>>n;
//     p1tn(n);
// }
// int cdr(int n){
//     if (n==0) return 0;                // count no of digits
//     int rd=cdr(n/10);
//     return rd+1;
// }
// int main(){
//     int n; cin>>n;
//     int ans=cdr(n);
//     cout<<ans;
//     return 0;
// }
// int f(int n){
//     if(n==0) return 0;
//     int rds=f(n/10);
//     return rds+n%10;                   //add digits
// }
// int main(){
//     int n; cin>>n;
//     int ans=f(n);
//     cout<<ans;
//     return 0;
// }
int rev(int n, int reverse){
    if(n==0) return reverse;
    reverse*=10;
    reverse+=n%10;
    return rev(n/10, reverse);         //reverse of a number
}
int main(){
    int n, reverse = 0;
    cin >> n;
    int ans = rev(n, reverse);
    cout << ans;
    return 0;
}
// int f(int n, int &pow){
//     if(n<10){
//         pow++; 
//         return n;
//     }
//     int rdr=f(n/10, pow);
//     const int powr=pow++;
//     int temp=1;                     // 2nd method of reversing a number
//     for(int i=0; i<powr; i++){
//         temp*=10;
//     }
//     return (n%10)*temp+rdr;
// }
// int main(){
//     int n; cin>>n;
//     int pow=0;
//     cout<<f(n,pow);
//     return 0;
// }
// long long powr(long long x, long long y){
//     if (y == 0) return 1;
//     if (y % 2) return powr(x * x, y / 2) * x;
//     return powr(x * x, y / 2);                 //power of x^y
// }
// int main(){
//     long long x, y;
//     cin >> x >> y;
//     cout << powr(x, y);
//     return 0;
// }
// int gcd(int a, int b){
//     if(b==0) return a;
//     return gcd(b, a%b);                       //gcd using recursion
// }
// int main(){
//     int a, b;
//     cin>>a>>b;
//     int ans=gcd(a,b);
//     cout<<ans;
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int x=2; x<=n; x++){
//         int i=2;                                //prime factors
//         for(; i*i<=x; i++){
//             if(x%i==0) break;
//         }
//         if(i*i>x and n%x==0){
//             cout<<x<<" ";
//         }
//     }
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int x=2; x<=n; x++){
//         int i=2;                                //prime numbers upto n
//         for(; i*i<=x; i++){
//             if(x%i==0) break;
//         }
//         if(i*i>x){
//             cout<<x<<" ";
//         }
//     }
//     return 0;
// }
// int main(){
//     int n, reverse=0;
//     cin>>n;
//     int temp=n;
//     if(n<0) cout<<"it is not a palindrome.";
//     while(n>0){                                //palindrome checker
//         reverse=(reverse*10)+(n%10);
//         n=n/10;
//     }
//    if(reverse==temp){
//         cout<<"it is a palindrome";
//     }

//     return 0;
// }
// int main(){
//     long long n;
//     long long reverse=0;
//     cin>>n;                                      //reverse a number
//     long long temp=n;
//     while(n!=0){
//         reverse=(reverse*10)+(n%10);
//         n=n/10;
//     }
//     cout<<reverse;
//     return 0;
// }