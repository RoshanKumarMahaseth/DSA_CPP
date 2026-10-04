#include <iostream>
#include <string>
using namespace std;

int main(){

    string str = "255.100.25.60";
    int index = 0;
    string ans;

    while(index < str.size()){
        if(str[index] == '.'){
            ans += "[.]";
        }else{
            ans += str[index];
        }

        index++;
    }

    cout << ans << endl;

    return 0;
}