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


#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "programming";
    int count = 0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='g'){
            count++;
        }
    }

    cout<<count<<endl;
    return 0;
}