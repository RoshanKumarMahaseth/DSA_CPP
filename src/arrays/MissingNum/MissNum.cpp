// Finding the missing element in an array


//without function
#include <iostream>
using namespace std;

int main(){
    int arr[]={4,3,1};
    int size=4;
    
    int sum = 0;

    for(int i=0;i<size-1;i++){
        sum += arr[i];
    }

    int ans = size*(size+1)/2;
    
    int miss = ans - sum;

    cout<<"The missing number is: "<<miss <<endl;

    return 0;
}



//with function
#include <iostream>
using namespace std;

void MissNum(int arr[],int size){

    int sum = 0;
    for(int i=0;i<size-1;i++){
        sum += arr[i];
    }

    int ans = size*(size+1)/2;

    int miss = ans - sum;

    cout<<"missing number is: "<<miss<<endl;
}
int main(){
    
    int size;
    cout<<"Enter the size: ";
    cin>>size;

    int arr[100];
    cout<<"Enter the array: ";
    for(int i=0;i<size-1;i++){
        cin>>arr[i];
    }

    MissNum(arr,size);

    return 0;
}

