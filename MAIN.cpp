#include <iostream>
#include <climits>
using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     char a='A';
//     for(int i=1; i<=n; i++){
//         for(int space=1; space<=n-i; space++){
//             cout<<" ";
//         }
//         for(int number=1; number<=i; number++){
//             cout<<a;
//         }
//         a++;
//         cout<<endl;
//    }
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=n; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             cout<<"*";
//         }
//         for(int space=2*n-2*i; space>=1; space--){
//             cout<<" ";
//         }
//         for(int st=1; st<=i; st++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<"*";
//         }
//         for(int space=2*n-2*i; space>=1; space--){
//             cout<<" ";
//         }
//         for(int st=1; st<=i; st++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// }
// int main() {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         int num = 1;

//         for (int j = 0; j <= i; j++) {
//             cout << num << " ";                                pascal's triangle
//             num = num * (i - j) / (j + 1);
//         }

//         cout << endl;
//     }

//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             if(i==j || i==n || j==1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int space=1; space<=i-1; space++){
//             cout<<" ";
//         }
//         for(int j=1; j<=2*(n-i)+1; j++){
//             if(i==1 || j==2*(n-i)+1 || j==1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     for(int i=n-1; i>=1; i--){
//         for(int space=1; space<=i-1; space++){
//             cout<<" ";
//         }
//         for(int j=1; j<=2*(n-i)+1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
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
//         int ntbp=i;
//         if(i==n) ntbp--;
//         for(int st=ntbp; st>=1; st--){
//             cout<<st;
//         }
//         cout<<endl;
//     }
//     for(int i=n-1; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             cout<<j;
//         }
//         for(int spaces=1; spaces<=2*(n-i)-1; spaces++){
//             cout<<" ";
//         }
//         for(int st=i; st>=1; st--){
//             cout<<st;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     for (int i=1; i<=n; i++){
//         for(int spaces=1; spaces<=2*(n-i); spaces++){
//             cout<<" ";
//         }
//         for(int j=1; j<=i; j++){
//             cout<<j;
//         }
//         for(int space=1; space<=2*i-3; space++){
//             cout<<" ";
//         }
//         if(i>1)for(int k=i; k>=1; k--){
//             cout<<k;
//         }
//         cout<<endl;
//     }
//     for (int i=n-1; i>=1; i--){
//         for(int spaces=1; spaces<=2*(n-i); spaces++){
//             cout<<" ";
//         }
//         for(int j=1; j<=i; j++){
//             cout<<j;
//         }
//         for(int space=1; space<=2*i-3; space++){
//             cout<<" ";
//         }
//         if(i>1)for(int k=i; k>=1; k--){
//             cout<<k;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int row=1; row<=n; row++){
//         for(int j=1; j<=n; j++){
//             if(row==(n+1)/2 || j==(n+1)/2 || j==1 && row<=n/2 || row==1 && j>n/2 || j==n && row>n/2 || row==n && j<=n/2){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//     }
//     cout<<endl;
// }
// return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int space=1; space<=i-1; space++){
//             cout<<" ";
//         }
//         for(int st=1; st<=2*(n-i)+1; st++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=n-1; i>=1; i--){
//         for(int space=1; space<=i-1; space++){
//             cout<<" ";
//         }
//         for(int st=2*(n-i)+1; st>=1; st--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int x,y;
//     cin>>x>>y;
//     if(x==0 && y==0){
//         cout<<"Origin";
//     }
//     else if(x==0 && y>0 || x==0 && y<0){
//         cout<<"Y axis";
//     }
//     else if(y==0 && x>0 || y==0 && x<0){
//         cout<<"X axis";
//     }
//     else{
//         if(x>0 && y>0){
//             cout<<"Q1";
//         }
//         else if(x<0 && y>0){
//             cout<<"Q2";
//         }
//         else if(x<0 && y<0){
//             cout<<"Q3";
//         }
//         else if(x>0 && y<0){
//             cout<<"Q4";
//         }
//     }
//     return 0;
// }
// s
//     if(old_max==INT_MIN){
//         cout<<"-1";
//     }
//     else cout<<old_max;
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int spaces=1; spaces<=n-i; spaces++){
//             cout<<" ";
//         }
//         for(int st=1; st<=2*i-1; st++){
//             if(st==1 || st==2*i-1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     for(int i=n-1; i>=1; i--){
//         for(int spaces=1; spaces<=n-i; spaces++){
//             cout<<" ";
//         }
//         for(int st=1; st<=2*i-1; st++){
//             if(st==1 || st==2*i-1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n, sum=0;
//     cin>>n;
//     while(n>9){
//         int sum=0;
//         while(n>0){
//             sum+=n%10;
//             n=n/10;
//         }
//         n=sum;
//     }
//     cout<<n;
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;

//     int current = N;
//     int steps = 0;

//     // Run this loop at least once
//     do {
//         // 1. Get the left digit and right digit
//         int left = current / 10;
//         int right = current % 10;

//         // 2. Add them up and take the last digit
//         int new_digit = (left + right) % 10;

//         // 3. Combine old right digit + new digit
//         current = (right * 10) + new_digit;

//         // Count this step
//         steps++;

//     } while (current != N); // Stop when we get back to original N

//     cout << steps;

//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         int value=1;
//         for(int space=1; space<=n-i; space++){
//             cout<<" ";
//         }
//         for(int st=1; st<=i; st++){
//             cout<<value<<" ";
//             value=value*(i-st)/st;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main() {
//     int t;
//     cin >> t;

//     while(t > 0) {

//         int a, b;
//         cin >> a >> b;

//         int originalA = a;
//         int originalB = b;

//         int countA = 0;
//         int countB = 0;
//         while(a > 0) {

//             int digit = a % 10;

//             if(digit % 2 == 0) {
//                 countA++;
//             }

//             a = a / 10;
//         }
//         while(b > 0) {

//             int digit = b % 10;

//             if(digit % 2 == 0) {
//                 countB++;
//             }

//             b = b / 10;
//         }

//         if(countA > countB) {
//             cout << originalA << endl;
//         }
//         else if(countB > countA) {
//             cout << originalB << endl;
//         }
//         else {
//             cout << "Equal" << endl;
//         }

//         t--;   
//     }
//     return 0;
// }
// 

// void generatePattern(int rows, char mode) {
//     // Validate input first
//     if (rows <= 0 || (mode != 'F' && mode != 'P' && mode != 'R')) {
//         cout << "invalid input" << endl;
//         return;
//     }

//     if (mode == 'F') {
//         int num = 1;
//         for (int i = 1; i <= rows; i++) {
//             for (int j = 1; j <= i; j++) {
//                 cout << num << " "; // Added space
//                 num++;
//             }
//             cout << endl;
//         }
//     } 
//     else if (mode == 'P') {
//         // Alternating 1 and 0 pattern
//         for (int i = 1; i <= rows; i++) {
//             int val = (i % 2 == 1) ? 1 : 0; // Starts with 1 on odd rows, 0 on even rows
//             for (int j = 1; j <= i; j++) {
//                 cout << val << " ";
//                 val = 1 - val; // Toggle between 1 and 0
//             }
//             cout << endl;
//         }
//     } 
//     else if (mode == 'R') {
//         // Centered Reverse Pyramid: counts down from i to 1
//         for (int i = rows; i >= 1; i--) {
//             // Print leading spaces for alignment
//             for (int spaces = 1; spaces <= rows - i; spaces++) {
//                 cout << " ";
//             }
//             // Count down from i to 1
//             for (int num = i; num >= 1; num--) {
//                 cout << num << " ";
//             }
//             cout << endl;
//         }
//     }
// }

// int main() {
//     char mode;
//     int rows;
    
//     if (cin >> rows >> mode) {
//         generatePattern(rows, mode);
//     }
//     return 0;
// }
// void generatePattern(int rows, char mode){
//     if (rows <= 0 || (mode != 'F' && mode != 'P' && mode != 'R')) {
//         cout << "invalid input" << endl;
//         return;
//     }
//     if(mode=='F'){
//         int num=1;
//         for(int i=1; i<=rows; i++){
//             for(int j=1; j<=i; j++){
//                 cout<<num;
//                 num++;
//             }
//             cout<<endl;
//         }
//     }
//     else if(mode=='P'){
//         for(int i=1; i<=rows; i++){
//             int num=1;
//             for(int j=1; j<=rows-i; j++){
//                 cout<<" ";                       //pascal's pyramid
//             }
//             for(int st=1; st<=i; st++){
//                 cout<<num<<" ";
//                 num=num*(i-st)/st;
//             }
//             cout<<endl;
//         }
//     }
//     else if(mode=='R'){
//         for(int i=1; i<=rows; i++){
//             for(int spaces=1; spaces<=i-1; spaces++){
//                 cout<<" ";
//             }
//             for(int st=1; st<=2*(rows-i)+1; st++){
//                 cout<<st;
//             }
//             cout<<endl;
//         }
//     }
    
// }
// int main(){
//     char mode;
//     int rows;
//     cin>>rows;
//     cin>>mode;
//     generatePattern(rows, mode);
//     return 0;
// }
// BOOLEAN TRIANGLE
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         int val=(i%2)? 1:0;
//         for(int j=1; j<=i; j++){
//             cout<<val<<" ";    
//             val=1-val;
//         } 
//         cout<<endl;
//     }
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     int steps=0;
//     int original=n;
//     while(true){
//         int right_digit=original/10;
//         int left_digit=original%10;
//         int new_digit=(right_digit+left_digit)%10;
//         original=(right_digit*10)+new_digit;                  //digit sum cycle 
//         steps++;
//         if(original==n){
//             break;
//         }
//     }
//     cout<<steps;
//     return 0;
// }
// int main(){
//     int n,max=INT_MIN, old_max;
//     cin>>n;
//     int t;
//     while(n>0){
//         cin>>t;
//         if(t>max){
//             old_max=max;
//             max=t;
//         }
//         else if(t>old_max && t<max){
//             old_max=t;                       // second largest number
//         }
//         n--;
//     }
//     cout<<old_max;
//     return 0;
// }
// int main(){
//     int n,t;
//     cin>>n;
//     while(n>0){
//         cin>>t;
//         int pos=1;
//         int even_pos_sum=0, odd_pos_sum=0;
//         while(t>0){
//             int i=t%10;
//             if(pos%2){
//                 odd_pos_sum+=i;
//             }
//             else{                                  //sum of digits at even position and odd position
//                 even_pos_sum+=i;
//             }
//             pos++;
//             t=t/10;
//         }
//         cout<<odd_pos_sum<<endl;
//         cout<<even_pos_sum<<endl;
//         n--;
//     }
//     return 0;
// }
// int main(){
//     int n,steps=0,max=INT_MIN;
//     cin>>n;
//     cout<<"Sequence: "<<n;
//     do{
//         if(n%2){
//             n=3*n+1;
//         }
//         else {
//             n=n/2;                          //Collatz Sequence & Hailstone Peak
//         }
//         cout<<" -> "<<n;
//         if(n>max){
//             max=n;
//         }
//         steps++;
//     }while(n!=1);
//     cout<<endl;
//     cout<<"Steps: "<<steps<<endl;
//     cout<<"Peak: "<<max;
//     return 0;
// }
// int main(){
//     int x,y;
//     cin>>x>>y;
//     if(x==0 && y==0){
//         cout<<"Origin";
//     }
//     else if(x==0 && y>0 || x==0 && y<0){
//         cout<<"Y axis";
//     }
//     else if(y==0 && x>0|| y==0 && x<0){
//         cout<<"X axis";
//     }
//     else if(x>0 && y>0){
//         cout<<"Q1";
//     }
//     else if(x<0 && y<0){
//         cout<<"Q3";
//     }
//     else if(x>0 && y<0){
//         cout<<"Q4";
//     }
//     else if(x<0 && y>0){
//         cout<<"Q2";
//     }
//     return 0;
// }