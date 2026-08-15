#include <iostream>
using namespace std;


bool isValid(int arr[],int n, int D, int maxAllowedPackages){
    int days=1,Packages=0;

    for(int i=0;i<n;i++){
        if(arr[i]>maxAllowedPackages){
            return false;
        }
        if(Packages+arr[i]<=maxAllowedPackages){
            Packages+=arr[i];
        }
        else{
            days++;
            Packages=arr[i];
        }
    }
    if(days>D){
        return false;
    }else{
        return true;
    }
}

int shipPackages(int arr[],int n,int D){
    if(D>n){
        return -1;
    }

    int sum =0 ;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }

    int ans = -1;
    int st=0,end=sum;

    while(st<=end){
        int mid = st+(end-st)/2;

        if(isValid(arr,n,D,mid)){
            ans = mid;
            end = mid-1;
        }else{
            st=mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    int D = 5;

    cout<<shipPackages(arr,n,D)<<endl;

    return 0;
}