#include <iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int freq[26]={};
    for(int i=0; i<s.size(); i++){
        char ch=s[i];
        freq[ch-'a']++; 
    }
    int max=0;
    for(int i=1; i<26; i++){
        if(freq[i]>max){
            max=i;
        }
    }
    cout<<(char)('a'+ max)<<" "<<freq[max]<<endl;
}
