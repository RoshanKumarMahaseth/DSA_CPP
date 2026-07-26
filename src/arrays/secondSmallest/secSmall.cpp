//printing second smallest element in an array if it is not exist return -1


//without function
#include <iostream>
#include <climits>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,7,0,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    // Smallest number
    int small = INT_MAX;

    for(int i=0;i<size;i++){
        if(arr[i]<small){
            small = arr[i];
        }
    }
    cout<<"smallest number is: "<<small<<endl;

    //second smallest number

    int second = INT_MAX;

    for(int i=0;i<size;i++){
        if(arr[i] != small){
            second = min(second,arr[i]);
        }

    }

    if(second==INT_MAX){
        return -1;
    }

    cout<<"second smallest number is: "<<second<<endl;

    return 0;

}


//with function
#include <iostream>
#include <climits>
using namespace std;

int secSmall(int arr[],int size){

    //First smallest element in an array

    int small = INT_MAX;

    for(int i=0;i<size;i++){
        if(arr[i]<small){
            small = arr[i];
        }
    }
    cout<<"first smallest element is: "<<small<<endl;

    //second smallest element 

    int second = INT_MAX;

    for(int i=0;i<size;i++){
        if(arr[i]!=small){
            second = min(arr[i],second);

        }
    }

    cout<<"Second elemen is: "<<second<<endl;

    if(second == INT_MAX){
        return -1;
    }
}
int main(){
    int size;
    cout<<"The size of array: ";
    cin>>size;

    int arr[10000];
    cout<<"Enter the array: ";

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    secSmall(arr, size);

    return 0;
}