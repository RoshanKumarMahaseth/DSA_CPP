// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     // string s = "Roshan";
//     // cout<<s<<endl;

//     // vector<char>arr={'a','p','p','l','e'};
//     // for(int i=0;i<arr.size();i++){
//     //     cout<<arr[i];
//     // }
//     // cout<<endl;

//     char arr1[10];
//     cout<<"enter: ";
//     cin>>arr1;
//     cout<<arr1;
    

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     string name = "Roshan";
//     // cout<<"enter your love name: ";
//     // cin>>name;

//     // cout<<"your love name is: "<<name<<endl;

//     // string sentence;
//     // getline(cin,sentence);
//     // cout<<sentence;


//     //finding string length
//     cout<<name.length()<<endl;

//     cout<<name.size();

//     //modifying characters;

//     name[0]='M';
//     cout<<name<<endl;
    

//     return 0;
    
// }

// #include <iostream>
// using namespace std;

// int main(){
//     string str = "Himanshi";
//     for(int i=0;i<str.size();i++){
//         cout<<str[i]<<endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     string name = "Himanshi";
//     int count = 0;
//     for(int i=0;i<name.size();i++){
//         if(name[i]=='a' || name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'){
//             count++;
//         }
//     }

//     cout<<count<<endl;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string str = "programming";
//     int count = 0;
//     for(int i=0;i<str.size();i++){
//         if(str[i]=='g'){
//             count++;
//         }
//     }

//     cout<<count<<endl;
//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// int main(){

//     string str = "programming";
//     int count = 0;
//     for(int i=0;i<str.size();i++){
//         if(str[i]=='a' || str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
//             count++;
//         }
//     }
//     int number = str.size()-count;

//     cout<<"number of vowels: "<<count<<endl;
//     cout<<"number of constant: "<<number<<endl;

//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string str = "programming";
//     int st=0,end=str.size()-1;
//     while(st<=end){
//         swap(str[st],str[end]);
//         st++;
//         end--;
//     }

//     cout<<str<<endl;

//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string name = "madam";
//     int st=0,end=name.size()-1;

//     while(st<end){
//         if(name[st]==name[end]){
//             st++;
//             end--;
//         }else{
//             cout<<"not palidrome";
//             return 0;
//         }
//     }
//     cout<<"its palidrome"<<endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string str = "apple";
//     int freq[26]={0};

//     for(int i=0;i<str.size();i++){
//         freq[str[i]-'a']++;
//     }

//     for(int i=0;i<26;i++){
//         if(freq[i]>0){
//             cout<<char(i+'a')<<"="<<freq[i]<<endl;
//         }
//     }

//     return 0;

// }


// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string str = "hello";
//     int freq[26]={0};
//     for(int i=0;i<str.size();i++){
//         freq[str[i]-'a']++;
//     }
    
//     int maxfreq = 0;
//     int maxIndex = 0;

//     for(int i=0;i<26;i++){
//         if(freq[i]>maxfreq){
//             maxfreq = freq[i];
//             maxIndex = i;
//         }
//     }

//     cout<<"most frequent character: "<<char(maxIndex+'a')<<endl;
//     cout<<"frequency: "<<maxfreq<<endl;

//     return 0;
// }



// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string str = "You are my everything";
//     string result = "";

//     for(int i=0;i<str.size();i++){
//         if(str[i]!=' '){
//             result+=str[i];
//         }
//     }

//     cout<<result<<endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string str = "I love coding";
//     int count = 1;

//     for(int i=0;i<str.size();i++){
//         if(str[i]==' '){
//             count++;
//         }
//     }

//     cout<<count<<endl;
//     return 0;


// }



#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "I love programming";
    
    int count = 0;
    int result = 0;
    
    for(int i=0;i<str.size();i++){
        if(str[i]!=' '){
            count++;
        }else{
            if(count>result){
                result += count;
            }
            count=0;
        }
       
    }

    if(count>result){
        result = count;
    }
    cout<<result<<endl;

    

    return 0;
}