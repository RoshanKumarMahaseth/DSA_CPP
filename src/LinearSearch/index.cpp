// LINEAR SEARCH METHOD

//without function
#include <iostream>
using namespace std;

int main(){
    int arr[6]={1,4,2,5,6,3};
    int size = sizeof(arr)/sizeof(arr[0]);

    int target;
    cout<<"enter the target value: ";
    cin>>target;
    int index;

    for(int i=0;i<size;i++){
        if(arr[i]==target){
            index = i;
            break;
            
        }
    }
    cout<<"The target value possition is: "<<index<<endl;

    return 0;

}


//with function
#include <iostream>
using namespace std;

int LinearSearch(int arr[],int size,int target){
    int index;
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            index = i;
            break;
        }
    }
    return index;
}
int main(){

    int arr[]={1,4,2,3,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    int target;
    cout<<"Target value: ";
    cin>>target;

    cout<<LinearSearch(arr,size,target)<<endl;

    return 0;
}
