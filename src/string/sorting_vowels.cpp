#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string str = "Leetcode";
    vector<int>lower(26,0);
    vector<int>upper(26,0);

    for(int i=0;i<str.size();i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            lower[str[i]-'a']++;
        }
        else if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            upper[str[i]-'A']++;
        }

        string ans;

        for(int i=0;i<26;i++){
            char c = 'A'+i;

            while(upper[i]){
                ans+=c;
                upper[i]--;
            }
        }

        for(int i=0;i<26;i++){
            char c = 'a'+i;
            while(lower[i]){
                ans+=c;
                lower[i]--;
            }
        }
    }
}