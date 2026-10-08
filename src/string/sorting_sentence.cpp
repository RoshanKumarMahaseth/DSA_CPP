// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main(){
//     string str = "is2 sentence4 this1 a3";
//     vector<string> ans(10);
//     string temp;
//     int count=0,index=0;

//     while(index<str.size()){
//         if(str[index]==' '){
//             int pos = temp.back()-'0';
//             temp.pop_back();
//             ans[pos]=temp;
//             temp.clear();
//             count++;
            
//             index++;
            
//         }else{
//             temp+=str[index];
//             index++;
//         }
//     }
//     int pos = temp.back()-'0';
//     temp.pop_back();
//     ans[pos]=temp;
//     count++;

//     string result;

//     for(int i=1;i<=count;i++){
//         result+=ans[i];

//         if(i!=count){
//             result += ' ';
//         }
//     }
//     cout<<result;
//     return 0;
// }
