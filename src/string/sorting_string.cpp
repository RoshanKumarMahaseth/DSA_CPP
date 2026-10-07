
#include <iostream>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    string str = "etyuicvasdaahg";
    vector<int> freq(26,0);

    for(int i=0;i<freq.size();i++){
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