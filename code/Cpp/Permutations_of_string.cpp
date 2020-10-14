#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

void perm(string str, vector<string> &arr){
    if(str.size()==1){
        arr.push_back(str);
        return;
    }
    
    char ch = str.back();
    str.pop_back();
    
    perm(str, arr);
    int len = arr.size();
    for(int i=0; i< len; i++){
        string x = arr[0];
        arr.erase(arr.begin());
        for(int i=0; i<= x.size(); i++){
            string w = x;
            w.insert(w.begin() + i, ch);
            arr.push_back(w);
        }
        
    }
    
}

int main(){
    string s;
    cout << "Enter the string:" << endl;
    cin >> s;
    vector<string> arr;
    perm(s, arr);
    
    cout << "the permutations are:" << endl;
    for(int i=0; i< arr.size(); i++){
        cout << arr[i] << endl;
    }
}
