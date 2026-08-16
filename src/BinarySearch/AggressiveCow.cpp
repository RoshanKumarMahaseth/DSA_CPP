
#include <iostream>
#include <algorithm>
using namespace std;

bool isPossible(int arr[],int n,int k,int minAllowedDist){
    int cow=1,laststall=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]-laststall>=minAllowedDist){
            cow++;
            laststall = arr[i];
        }

        if(cow == k){
            return true;
        }
    }
    return false;
}
int getDistance(int arr[],int n,int k ){
    sort(arr,arr+n);
    int st=1,end=arr[n-1]-arr[0],ans=-1;

    while(st<=end){
        int mid = st+(end-st)/2;

        if(isPossible(arr,n,k,mid)){
            ans = mid;
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}
int main(){
    int n = 5, k=3;
    int arr[]={1,2,4,8,9};

    cout<<getDistance(arr,n,k)<<endl;

    return 0;
}