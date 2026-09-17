#include <iostream>
using namespace std;

int main(){
    int index = 0;
    string ans;
    string address = "121.11.011";

    while(index < address.size()){
        if(address[index]=='.'){
            ans +="[.]";

        }else{
            ans += address[index];
        }
        index++;
        
    }
    
    return 0;
}





class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        int index = 0;
        
        while(index<address.size()){
            if(address[index]=='.'){
                ans += "[.]";
            }
            else{
                ans += address[index];
            }
            index++;
        }

        return ans;
    }
};