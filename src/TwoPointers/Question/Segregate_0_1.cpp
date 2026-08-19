/*
    arr[]={1,0,1,0}
    we have to sort array like  {0,0,1,1}

    we can use stl sorting method but we will use one more way to segregate this array

*/


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     vector<int>arr = {0,1,0,1,0,1};
    
//     sort(arr.begin(),arr.end());
//     for(auto i : arr){
//         cout<<i<<" ";
//     }

//     cout<<endl;

//     return 0;
// }




// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int>arr = {1,0,1,0,1,0};
//     int size = arr.size();

//     int count_0 = 0;
//     int count_1 = 0;

//     for(auto i : arr){
//         if(i == 0){
//             count_0++;
//         }
//         else{
//             count_1++;
//         }
//     }

//     for(int i=0;i<count_0;i++){
//         arr[i]=0;
//     }
//     for(int i=count_0;i<size;i++){
//         arr[i]=1;
//     }

//     for(int i=0;i<size;i++){
//         cout<<arr[i];
//     }
//     cout<<endl;
//     return 0;

// }



class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int count0=0,count1=0;
        
        for(auto i : arr){
            if(i == 0){
                count0++;
            }else{
                count1++;
            }
        }
        
        for(int i=0;i<count0;i++){
            arr[i]=0;
        }
        for(int i=count0;i<arr.size();i++){
            arr[i]=1;
        }
        
    
    }
};