#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string str;
    //Take the string as input in same line with spaces
    getline(cin,str);
    int n=str.length();
    int x,y;
    cin>>x>>y;
    for(int i=0; i<n; i++){
        if(i==(x-1)){
            if(str[i]>='a' && str[i]<='z'){
                str[i]-=32;
            }
            else if(str[i]>='A' && str[i]<='Z'){
                str[i]+=32;
            }   
        }
        if(i==(y-1)){
            if(str[i]>='a' && str[i]<='z'){
                str[i]-=32;
            }
            else if(str[i]>='A' && str[i]<='Z'){
                str[i]+=32;
            }
        }        
    }
    cout<<str;
    return 0;
}
