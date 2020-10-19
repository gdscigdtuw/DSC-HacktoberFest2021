#include<iostream>
#include<string>
using namespace std;
string form(char c){
	string s="";
	s=s+c;
	s=s+c;
	s=s+c;
	return s;
	}
int modifiedstring(string m){
	int k=0,i=0;
	int l=m.length();
	int count=0;
	string s="";
	for(int i=0;i<l;i+=k){
			s=form(m[i]);
			if(i+3<=l){
				if(s==m.substr(i,3)){
					++count;
					k=2;
					}
				else
					k=1;
				}
			else
				return count;
				}
			return count;
			}
int main(){
	int T;
	cin>>T;
	while(T--){
		string k;
		cin>>k;
		cout<<modifiedstring(k);
		}
	
	
	return 0;
	}
