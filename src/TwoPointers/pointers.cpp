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

// #include <iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     int *ptr = nullptr;
//     if(ptr == nullptr){
//         cout<<"pointer is empty";
//     }
//     if(ptr != nullptr){
//         cout<<"pointer has an address";
//     }
// }



#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr = arr;

    //print the address of first element

    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;
    

    //print the address of second element or 1 index
    cout<<arr+1<<endl;
    cout<<&arr[1]<<endl;

    //print the value of 0th index
    cout<<arr[0]<<endl;
    cout<<arr[0]<<endl;


}