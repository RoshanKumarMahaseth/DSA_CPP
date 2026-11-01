// #include <iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     cout<<"printing a: "<<a<<endl;
//     cout<<"printing a address: "<<&a<<endl;
//     int *ptr = &a;
//     cout<<"printing a pointer: "<<ptr<<endl;

//     cout<<"printing ptr address: "<<&ptr<<endl;

//     int ptr1 = a;
//     cout<<"printing ptr value: "<<&ptr1<<endl;

// }


//changing values using pointers

// #include <iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     int *ptr = &a;
//     *ptr = 50;
//     cout<<a;

//     return 0;
// }


//null and nullptr

#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = nullptr;
    if(ptr == nullptr){
        cout<<"pointer is empty";
    }
    if(ptr != nullptr){
        cout<<"pointer has an address";
    }
}
