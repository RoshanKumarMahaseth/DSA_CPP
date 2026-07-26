// Printing second largest number 

//without function

#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[6]={1,1,1,1,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    // LARGET NUMBER

    int ans = INT_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]>ans){
            ans = arr[i];
        }
    }
    cout<<"Largest element is: "<<ans<<endl;

    // SECOND LARGEST NUMBER

    int second = INT_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]!=ans){
            second = max(second,arr[i]);
        }
    }

    if(second==INT_MIN){        //if there is no second large than it return nothing (-1)
        return -1;
    }

    cout<<"Second Largest Number is: "<<second<<endl;

    return 0;
}


//with function

#include <iostream>
#include <climits>
using namespace std;

int SecLar(int arr[],int size){

    //Largest number
    int ans = INT_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]>ans){
            ans = arr[i];
        }
    }
    cout<<"Largest number is: "<<ans<<endl;

    //seocnd largest number

    int second = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]!=ans){
            second = max(second,arr[i]);

        }
    }
    cout<<"Second largest number is: "<<second<<endl;

}
int main(){
    int arr[6]={1,4,2,6,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);

    SecLar(arr,size);

    return 0;

}

