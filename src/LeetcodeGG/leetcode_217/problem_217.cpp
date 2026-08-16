

    //brute force

// #include <iostream>
// using namespace std;

// int main(){

//     int arr[]={1,2,3,4};
//     int size = 4;

//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(arr[i]==arr[j]){
//                 return true;
//             }
//         }
//     }
//     return false;
// }



class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(),nums.end());

        for(int i=0;i<size-1;i++){
            if(nums[i]==nums[i+1]){
                return true;
            }
        }

        return false;
        
    }
};