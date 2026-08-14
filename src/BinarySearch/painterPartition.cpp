

#include <iostream>
using namespace std;

bool isValid(int arr[],int n, int m,int maxAllowedTime){
    int player=1,time=0;

    for(int i=0;i<n;i++){
        if(arr[i]>maxAllowedTime){
            return false;
        }
        if(time+arr[i]<=maxAllowedTime){
            time+=arr[i];
        }else{
            player++;
            time=arr[i];
        }
    }
    if(player>m){
        return false;
    }else{
        return true;
    }
}
int minTimeToPaint(int arr[],int n,int m){
    if(m>n){
        return false;
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    
    int ans = -1;
    int st=0,end=sum;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(isValid(arr,n,m,mid)){
            ans = mid;
            end = mid-1;
        }else{
            st = mid+1;
        }
    }

    return ans;
}
int main(){
    int arr[]={40,30,10,20};
    int n=4;
    int m=2;

    cout<<minTimeToPaint(arr,n,m)<<endl;

    return 0;
}