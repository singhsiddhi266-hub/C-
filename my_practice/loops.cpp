 #include <iostream>
using namespace std;


// #include <iostream>
// using namespace std;

void triangle(int n){
    int num=2;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i;){
          bool prime=1;
          for(int k=2; k<num; k++){
            if(num%k==0){
                prime=0;
                break;
            }
          }
          if(prime==1){
                cout<<num;                     //triangle with prime numbers
                j++;
            }
          num++;
    }
    cout<<endl;
}
}
int main(){
    int n; cin>>n;
    triangle(n);
    return 0;
}
// void triangle(int n){
//     int num=1;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i;j++){
//             cout<<num;
//             num+=2;                        //consecutive odd numbers
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n; cin>>n;
//     triangle(n);
//     return 0;
// }
// void triangle(int n){
//     for(int i=1; i<=n; i++){
//         for(int j=n; j>=i; j--){
//             cout<<"* ";                          inverse of a triangle
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n; cin>>n;
//     triangle(n);
//     return 0;
// }
// int main(){
//     int n,prev=0, next=1, result; cin>>n;
//     cout<<prev<<" "<<next<<" ";
//     for(int i=3; i<=n; i++){
//         result=prev+next;
//         prev=next;
//         next=result;
//         cout<<next<<" ";
//     }
//     return 0;
// }
// int main(){
//     int n,prev=0,next=1,result;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<prev<<" ";
//             result=prev+next;
//             prev=next;
//             next=result;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int reverse(signed x) {
//         int rev=0;
//         for(; x>0; x=x/10){
//             rev=rev*10+x%10;
//         }
//         return rev;
//  }
//  int main(){
//     signed x; cin>>x;
//     int ans=reverse(x);
//     cout<<ans;
//     return 0;
//  }

