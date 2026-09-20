#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<bool> arr(26,0);
    string s = "thequickbrownfoxjumpsoverthelazydog";
    for(int i=0;i<s.size();i++){
        arr[s[i]-'a']=1;
    }

    for(int i=0;i<26;i++){
        if(arr[i]==0){
            return 0;
        }
    }
    return 1;
}
