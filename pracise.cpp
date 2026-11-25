#include<iostream>
using namespace std;
// int main(){
//     int n, count=0;
//     cin>>n;
//     int i=1;
//     while(n>1){
//         if(n%2==0){
//             n=n/2;
//         }
//         else{
//             n=n*3+1;
//         }
//         count++;
//         i++;
//     }
//     cout<<count<<endl;
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int stars=1; stars<=i; stars++){
//             cout<<"*";
//         }
//         for(int spaces=1; spaces<=2*(n-i); spaces++){
//             cout<<" ";
//         }
//         for(int st=1; st<=i; st++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=n-1; i>=1; i--){
//         for(int stars=1; stars<=i; stars++){
//             cout<<"*";
//         }
//         for(int spaces=1; spaces<=2*(n-i); spaces++){
//             cout<<" ";
//         }
//         for(int st=1; st<=i; st++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main(){
//     int n,sum=0,sums=0;
//     cin>>n;
//     int pos=1;
//     while(n>0){
//         int i=n%10;
//         if(pos%2==0){
//             sum+=i;
//         }
//         else{
//             sums+=i;
//         }
//         pos++;
//         n=n/10;
//     }
//     cout<<sum;
//     cout<<sums;
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     int current=n;
//     int steps=0;
//     do{
//         int last_digit=current%10;
//         int first_digit=current/10;
//         int new_digit=(last_digit+first_digit)%10;
//         current=(last_digit)*10+new_digit;
//         steps++;
//     } while(current!=n);
//     cout<<steps;
//     return 0;
// }
int main(){
    int n;
    cin>>n;
    for(int x=2; x<=n; x++){
        int i=2;
        for(; i*i<=n; i++){
            if(x%i==0){
                break;
            }
        }
        if(i*i>x) cout<<x<<" ";
    }
    return 0;
}
// int main(){
//     int n;
//     cin>>n;
//     while(n>0){
//         int t,t2;
//         cin>>t>>t2;
//         int even=0
//         int even2=0
//         int originalt=t;
//         int originalt2=t2;
//         while(t>0){
//             int i=t%10;
//             if(i%2==0){
//                 even++;
//             }
//             t=t/10;
//         }
//         while(t2>0){
//             int j=t2%10;
//             if(j%2==0){
//                 even2++;
//             }
//             t2=t2/10;
//         }
//         n--;
//     }
//     if(even>even2) cout<<originalt;
//     else if(even2>even) cout<<originalt2;
//     else cout<<"equal";
//     return 0;
// }
// int main(){
//     int t; cin>>t;
//     for(int row=1; row<=t; row++){
//         int n; cin>>n;
//         bool rowFlag=true;
//     for(int i=1; i<=2*n; i++){
//         if(i%2) rowFlag=!rowFlag;
//         bool flag = rowFlag ? false: true;
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
//     int num1, num2, num3,last_num1,last_num2,last_num3,key=0, place=1;
//     cin>>num1>>num2>>num3;
//     for(int i=1; i<=4; i++){
//         last_num1=num1%10;
//         last_num2=num2%10;
//         last_num3=num3%10;
//         int smallest=min(last_num1, min(last_num2, last_num3));
//         key=key+smallest*place;
//         num1=num1/10;
//         num2=num2/10;
//         num3=num3/10;
//         place*=10;
//     }
//     cout<<key;
//     return 0;
// }

// int main() {
//     int a, b;
//     cin >> a >> b;

//     while (b != 0) {
//         int rem = a % b;
//         a = b;
//         b = rem;
//     }

//     cout << a;
//     return 0;
// }
    