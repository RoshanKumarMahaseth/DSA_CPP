#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string str = "AAbbAa";  
    vector<int>lower(26,0);
    vector<int>upper(26,0);

    for(int i=0;i<str.size();i++){
        if(str[i]>='a'){
            lower[str[i]-'a']++;        
        }else{
            upper[str[i]-'A']++;
        }
    }
    int count=0;
    bool odd=0;
    for(int i=0;i<26;i++){
        if(lower[i]%2==0){
            count+=lower[i];
        }else{
            count+=lower[i]-1;        //a=1 b=2  
            odd = 1;
        }

        if(upper[i]%2==0){
            count+=upper[i];
        }else{                    //A=3
            count+=upper[i]-1;
            odd = 1;
        }
    }
    count=count+odd;

    cout<<count<<endl;

    return 0;
    
}
