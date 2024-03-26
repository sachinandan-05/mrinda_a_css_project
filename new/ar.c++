
#include<iostream>
using namespace std;
int main(){
    char s;
    cin>>s;
    string r="qwertyuiopasdfghjkl;zxcvbnm,./";
    string f;
    cin>>f;
    if(s=='R'){
        for(int i=0;i<f.length();i++){
            for(int j=0;j<r.length();j++){
                if(f[i]==r[j]){
                    f[i]=r[j-1];
                }
            }
        }
    }
    else if(s=='L'){
        for(int i=0;i<f.length();i++){
            for(int j=0;j<r.length();j++){
                if(f[i]==r[j]){
                    f[i]=r[j+1];
                }
            }
        }
    }
    cout<<f;
}