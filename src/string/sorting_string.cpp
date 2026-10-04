#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "eabcbd";
    int freq[28] = {0};

    for(int i=0;i<str.size();i++){
        freq[str[i]-'a']++;
    }
    string ans;
    for(int i=0;i<26;i++){
        char c = 'a'+i;
        while(freq[i]){
            ans+=c;
            freq[i]--;
        }
    }
    cout<<ans<<endl;
    return 0;
}








