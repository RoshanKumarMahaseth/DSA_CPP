// #include <iostream>
// using namespace std;

// int main(){
//     int arr[]={1,2,2,3,4};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int target=2,first=-1,second=-1;
//     int st=0,end=size-1;

//     //first occur
//     while(st<=end){
//         int mid= st+(end-st)/2;

//         if(arr[mid]==target){
//             first = mid;
//             end = mid-1;
//         }else if(arr[mid]>target){
//             end = mid-1;
//         }else{
//             st = mid+1;
//         }
        
//     }

//     //second occur
//     st=0,end=size-1;
//     while(st<=end){
//         int mid = st+(end-st)/2;

//         if(arr[mid]==target){
//             second = mid;
//             st = mid+1;
//         }
//         else if(arr[mid]>target){
//             end = mid-1;
//         }
//         else{
//             st = mid+1;
//         }
//     }

//     cout<<"first:"<<first<<" seccond:"<<second<<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[] ={1,2,3,5,6,7,8};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int st=0,end=size-1,target=4, index=size;

//     while(st<=end){
//         int mid = st + (end-st)/2;

//         if(arr[mid]==target){
//             index = mid;
//             break;
//         }else if(arr[mid]>target){
//             end=mid-1;
//         }else{
//             index = mid;
//             st = mid+1;
//         }
//     }

//     cout<<"the index value is: "<<index<<endl;

//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main(){

//     int arr[]={1,2,3,4,5,6,7,8,9,10,11,12};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int st=0,end=size-1,index,sqrt=102;

//     while(st<=end){
//         int mid = st + (end-st)/2;

//         if(mid*mid == sqrt){
//             index=mid;
//             break;
//         }else if(mid*mid >sqrt){
//             end = mid-1;
//         }else{
//             index = mid;
//             st = mid+1;
//         }
//     }

//     cout<<"the square root position is : "<<index<<endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int repeated(int arr[],int size,int target){
//     int count=0;

//     for(int i=0;i<size;i++){
//         if(arr[i]==target){
//             count++;
//         }
//     }

//     return count;
// }
// int main(){
//     int arr[]={1,2,3,6,7,8,9,6};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int target = 6;

//     cout<<repeated(arr,size,target)<<endl;

//     return -1;
// }



// #include <iostream>
// using namespace std;

// int main(){
//     int arr[]={1,2,3,3,3,4,5,6};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int st=0,end=size-1,count=0,target=3;

//     while(st<=end){
//         int mid = st+(end-st)/2;
//         if(arr[mid]==target){
//             count++;
            
//         }else if(arr[mid]>target){
//             end = mid-1;
//         }else{
//             st = mid+1;
//         }
//     }

//     cout<<"total number of time appear is: "<<count<<endl;

//     return 0;
// }





// #include <iostream>
// using namespace std;

// int main(){
//     int arr[]={1,2,3,3,3,4,5,6};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int st=0,end=size-1;
//     int first=-1,last=-1,target=3;

//     //first occur
//     while(st<=end){
//         int mid = st+(end-st)/2;

//         if(arr[mid]==target){
//             first = mid;
//             end = mid-1;
            
//         }else if(arr[mid]>target){
//             end = mid-1;
//         }else{
            
//             st=mid+1;
//         }
//     }

//     //last occur

//     st=0,end=size-1;
//     while(st<=end){
//         int mid = st+(end-st)/2;

//         if(arr[mid]==target){
//             last = mid;
//             st=mid+1;
            
//         }else if(arr[mid]>target){
//             end = mid-1;
//         }else{
//             st = mid+1;
//         }
//     }


//     int count=0;
//     if(first!=-1){
//         count = (last-first)+1;
//     }

//     cout<<"count: "<<count<<endl;

// }

// #include <iostream>
// using namespace std;

// int largest(int arr[],int size,int index){
//     int st=0,end=size-1;

//     while(st<=end){
//         int mid = st+(end-st)/2;

//         if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
//             index = mid;
//             break;
//         }else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]){
//             st = mid+1;
//         }else{
//             end = mid-1;
//         }
//     }
//     return index;
// }

// int main(){
//     int arr[]={7,8,9,7,6,5};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int index = -1;
//     cout<<"the largest value index is : "<<largest(arr,size,index)<<endl;

//     return 0;

// }



// #include <iostream>
// using namespace std;

// int main(){
//     int arr[] = {4,5,6,7,8,2,3};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int index=arr[0],st=0,end=size-1;

//     while(st<=end){
//         int mid = st+(end-st)/2;

//         if(arr[mid]>index){
//             st = mid+1;
//         }else{
//             index = arr[mid];
//             end = mid-1;
//         }
//     }

//     cout<<"smallest value is: "<<index<<endl;

//     return 0;
// }




// pefix sum 


// #include <iostream>
// using namespace std;

// int PreffixSum(int arr[],int size,int preffix[]){
//     for(int i=1;i<size-1;i++){
//         preffix[i] = arr[i-1]+arr[i];
//     }

//     for(int i=0;i<size;i++){
//         cout<<preffix[i]<<" ";
//     }

//     return 0;
// }
// int main(){
//     int arr[]={4,3,2,5,6,7,-8,3};
//     int preffix[]={};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     PreffixSum(arr,size,preffix);
    
// }



// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){

//     vector<int> arr={6,4,5,-3,2,8};
//     int size = arr.size();

//     vector<int> suffix(size);

//     suffix[size-1] = arr[size-1];
//     for(int i=size-2;i>=0;i--){
//         suffix[i] = arr[i]+suffix[i+1];
//     }

//     for(int i=0;i<suffix.size();i++){
//         cout<<suffix[i]<<" ";
//     }

//     return 0;
// }





//kadane's algorithm

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int Subbarrays(vector<int> arr){
//     int prefix=0,total_sum=0,size=arr.size();

//     //total sum
//     for(int i=0;i<size;i++){
//         total_sum += arr[i];
//     }

//     for(int i=0;i<size;i++){
//         prefix += arr[i];

//         if(total_sum==2*prefix){
//             return 1;
//         }
//     }
//     return 0;
// }

// int main(){
//     int size;
//     cout<<"array size: ";
//     cin>>size;
//     vector<int>arr(size);
//     cout<<"enter array: ";
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }

//     cout<<Subbarrays(arr);


// }




// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int trap(vector<int>arr){
//     int size = arr.size();
//     int ans = 0;
//     int l=0,r=size-1;
//     int lmax=0,rmax=0;

//     while(l<r){
//         lmax = max(lmax,arr[l]);
//         rmax = max(rmax,arr[r]);

//         if(lmax<rmax){
//             ans += lmax-arr[l];
//             l++;
//         }
//         else{
//             ans += rmax-arr[r];
//             r--;
//         }

//     }
//     return ans;
// }
// int main(){
//     vector<int>arr = {0,1,0,2,1,0,1,3,2,1,2};

//     cout<<trap(arr)<<endl;

// }


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int trap(vector<int>arr){
//     int size = arr.size();
//     int lmax=0,rmax=0,ans=0;
//     int l=0,r=size-1;

//     while(l<r){
//         lmax = max(lmax,arr[l]);
//         rmax = max(rmax,arr[r]);

//         if(lmax<rmax){
//             ans += lmax-arr[l];
//             l++;
//         }else{
//             ans += rmax-arr[r];
//             r--;
//         }
//     }

//     return ans;
// }
// int main(){
//     int size;
//     cout<<"Size: ";
//     cin>>size;
//     vector<int>arr(size);
//     cout<<"enter array: ";
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }

//     cout<<trap(arr)<<endl;

// }


// #include <iostream>
// using namespace std;

// int main(){
//     int arr[]={2,0,6,5,7,3};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int target=10;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(arr[i]+arr[j]==target){
//                 cout<<i<<" "<<j<<endl;
                
//             }
//         }
//     }

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main(){
//     int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

//     for(int row=0;row<3;row++){
//         for(int col=0;col<4;col++){
//             cout<<arr[row][col]<<" ";
//         }
//     }

//     cout<<endl;
// }


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = {2,2,1,1,1,2,2};

    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums.size()-i-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
           
        }
    }

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}