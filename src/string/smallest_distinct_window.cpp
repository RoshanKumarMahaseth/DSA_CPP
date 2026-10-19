#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string str = "AABBBCBBAC";
    vector<int>count(256,0);


    int first=0,second=0,len=str.size(),diff=0;

    // calculate all the unique characters
    while(first<str.size()){
        if(count[str[first]]==0){
            diff++;
        }
        count[str[first]]++;
        first++;
    }

    for(int i=0;i<256;i++){
        count[i]=0;
    }

    first=0;

    while(second<str.size()){
        // until diff becomes 0
        while(diff && second<str.size()){
            if(count[str[second]]==0){
                diff--;
            }
            count[str[second]]++;
            second++;
        }

        len = min(len,second-first);

        // diff becomes 1
        while(diff!=1 && first<str.size()){
            len = min(len,second-first);
            count[str[first]]--;

            if(count[str[first]]==0){
                diff++;
            }
            first++;
        }
    }

    cout<<len<<endl;
    return 0;


}

