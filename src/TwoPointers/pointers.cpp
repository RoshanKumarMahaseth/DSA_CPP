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



// #include <iostream>
// using namespace std;

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int *ptr = arr;

//     //print the address of first element

//     // cout<<arr<<endl;
//     // cout<<arr+0<<endl;
//     // cout<<&arr[0]<<endl;
//     // cout<<ptr<<endl;
    

//     // //print the address of second element or 1 index
//     // cout<<arr+1<<endl;
//     // cout<<&arr[1]<<endl;

//     // //print the value of 0th index
//     // cout<<arr[0]<<endl;
//     // cout<<arr[0]<<endl;


//     //print all the value

//     // for(int i=0;i<5;i++){
//     //     cout<<ptr[i]<<" ";
//     // }

//     // //print all the address
//     // for(int i=0;i<5;i++){
//     //     cout<<ptr+i<<endl;
//     // }

//     // //arithmetic operation ptr++,ptr--,ptr=ptr+1;
//     // //print all the values
//     // for(int i=0;i<5;i++){
//     //     cout<<*ptr<<" ";
//     //     ptr++;
//     // }
//     // cout<<endl;

//     //addition 

//     // ptr = ptr+3;
//     // cout<<* ptr<<endl;

//     // ptr = ptr-2;
//     // cout<<*ptr<<endl;



// }

#include <iostream>
using namespace std;

int main(){
    char arr[6]="12345";
    char *ptr = arr;

    for(int i=0;i<6;i++){
        cout<<ptr[i]<<" ";
    }
}