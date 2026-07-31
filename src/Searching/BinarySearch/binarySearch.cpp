//searchin target value position by binary search 


//without function
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the no. of elements: ";
    cin>>n;

    int arr[n];    
    cout<<"enter the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];    }

    int target;
    cout<<"enter the target value: ";
    cin>>target;

    int st=0,end=n-1,mid;

    while(st<end){
        mid = (st+end)/2;

        if(arr[mid]==target){
            cout<<"the target position is:"<<mid;
            break;
        }
        else if(arr[mid]<target){
            st = mid+1;
        }
        else{
            end = mid-1;
        }

    }

    return -1;
}



//with function
#include <iostream>
using namespace std;

int BinarySearch(int arr[],int n,int target){
    int st=0,end=n-1,mid;

    while(st<=end){
        mid = st+(end-st)/2;

        if(arr[mid]==target){
            return mid;
            break;
        }
        else if(arr[mid]<target){
            st=mid+1;
        }
        else{
            end=mid-1;
            }
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter the no. of elements: ";
    cin>>n;

    int arr[n];
    cout<<"enter the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];    
    }

    int target;
    cout<<"enter the target value: ";
    cin>>target;

    cout<<BinarySearch(arr,n,target)<<endl;

    return 0;

}
