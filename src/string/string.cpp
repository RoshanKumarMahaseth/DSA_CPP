// #include <iostream>
// using namespace std;

// int main(){
//     char arr[]={'a','p','p','l','e'};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     for(int i=0;i<size;i++){
//         cout<<arr[i];
//     }
//     cout<<endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     char arr[1000];

//     int size;
//     cout<<"size: ";
//     cin>>size;

//     cout<<"enter array: ";
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<size;i++){
//         cout<<arr[i];
//     }
//     cout<<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     string s = "roshan";
//     cout<<s<<endl;

//     string s1 = "rohit";
//     string s2 = "class";
    
//     string s3 = s1+s2;

//     cout<<s3<<endl;

//     s1.push_back('x');
//     cout<<s1<<endl;

//     s2.pop_back();
//     cout<<s2<<endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     string s = "roshan is a part time gamer";
//     cout<<s<<endl;


//     string r = "roshan study \"dsa daily\" ";
//     cout<<r<<endl;


//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     string s;
//     getline(cin,s);
//     cout<<s<<endl;
//     cout<<s.size();


//     string s1;
//     cin>>s1;
//     cout<<s1<<endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     // string s1 = "roshan", s2 = " diamond juice";
//     // s1 = s1+"p";
//     // cout<<s1;

//     string s = "\\0";
//     cout<<s<<endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     string s = "Roshan";
//     int st=0,end=s.size()-1;
//     while(st<end){
//         swap(s[st],s[end]);
//         st++,end--;
//     }

//     cout<<s<<endl;
// }


#include <iostream>
using namespace std;

int main(){
    string s = "roshan";
    int size=0;
    while(s[size]!='\0'){
        size++;
    }

    cout<<size<<endl;

    string s2 = "namam";
    int st=0,end=s2.size()-1;

    while(st<end){
        if(s2[st]!=s2[end]){
            cout<<"not a palidrome";
            return 0;
        }
        st++,end--;
    }
    cout<<"its a palidrome";
    
    
}