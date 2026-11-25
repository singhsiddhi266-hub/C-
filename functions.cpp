#include <iostream>
using namespace std;
// some input, no output
// void phw(int n){
//     for(int i=1; i<=n; i++)
//     cout<<"hello world\n";
// }
// int main(){
//     int n; cin>>n;
//     phw(n);
//     return 0;
// }
// no input, some output, rd() function is the example
// some input. some output
// int phw(int n){
//     for(int i=1; i<=n; i++)
//         cout<<"hello world\n";
//         return n;
// }
// int main(){
//     int n; cin>>n;
//     int rv=phw(n);
//     cout<<rv<<"\n";
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
// bool isPalindrome(int x) {
//         int original=x;
//         long long reverse=0;
//         for(; x>0; x=x/10){
//             reverse=reverse*10+x%10;
//         }
//         if(reverse==x){
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
// void analyzeCollatz(int n){
//     if(n<=0) cout<<"Error: Try sending a valid input";
//     int steps=0;
//     int peak=1;
//     cout<<"Sequence: ";
//     while(n>1){
//         if(n%2){
//             n=3*n+1;
//             cout<<n<<" -> ";
//         }
//         else{
//             n=n/2;
//             cout<<n<<" -> ";
//         }
//         steps++;
//         if(n>peak){
//             peak=n;
//         }
//     }
//     cout<<endl;
//     cout<<"Total Steps: "<<steps<<endl;
//     cout<<"Peak Value: "<<peak;
// }
// int main(){
//     int n; cin>>n;
//     analyzeCollatz(n);
//     return 0;
// // }
// int main(){
//     int n,count=1;
//     cin>>n;
//     for(int i=n; i>0; i=i/10){
//         int rem=i%10;
//         for(int j=i/10; j>0; j=j/10){
//             int Rem=j%10;
//             if(rem==Rem){
//                 count++;                        //frequency of each digit
//             }
//         }
//         cout<<rem<<":"<<" "<<count<<endl;
//     }
//     return 0;
// }
// void swap(int &x, int &y){
//     x= x+y - (y=x);
// }
// int main(){
//     int a=10, b=20;
//     swap(a,b);
//     cout<<a<<" "<<b;
//     return 0;
// }
// long long fact(int n){
//     long long ans=1;
//     for(int i=1; i<=n; i++){
//         ans*=i;
//         return ans;
//     }
// }
// long long combination(int n, int r){
//     long long nfact=fact(n);
//     long long rfact=fact(r);
//     long long nrfact=fact(n-r);
//     return nfact/(nrfact*rfact);
// }
// int main(){
//     int n,r;
//     cin>>n>>r;
//     cout<<combination(n,r);
//     return 0;
// }

