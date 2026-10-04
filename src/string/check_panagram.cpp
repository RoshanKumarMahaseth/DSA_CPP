#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "thequickbrownfoxjumpsoverthelaydog";
    int freq[26]={0};
    
    for(int i=0;i<str.size();i++){
        freq[str[i]-'a']=1;
    }

    for(int i=0;i<26;i++){
        if(freq[i]==0){
            cout<<0;
            break;
        }
    }
    cout<<1<<endl;
    return 0;
}