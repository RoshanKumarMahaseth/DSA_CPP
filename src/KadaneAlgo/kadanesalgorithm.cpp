
// //prefix sum 
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     vector<int> arr = {6,4,5,-3,2,8};
//     vector<int>prefix(arr.size());

//     prefix[0] = arr[0];

//     for(int i=1;i<arr.size();i++){
//         prefix[i] = prefix[i-1]+arr[i];
//     }

//     for(int i=0;i<prefix.size();i++){
//         cout<<prefix[i]<<" ";
//     }
//     cout<<endl;

//     return 0;
// }


//suffix sum
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     vector<int> arr = {6,4,5,-3,2,8};
//     int n = arr.size();
//     vector<int>suffix(n);

//     suffix[n-1] = arr[n-1];
//     for(int i=n-2;i>=0;i--){
//         suffix[i]=suffix[i-2]+arr[i-1];
//     }

//     for(int i=0;i<suffix.size();i++){
//         cout<<suffix[i]<<" ";
//     }

//     return 0;
// }


//Divide array in 3 subarray with equal sum
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

bool divide(vector<int>arr){
    int prefix=0,total_sum=0,n=arr.size();
    //total sum

    for(int i=0;i<n;i++){
        total_sum+=arr[i];
    }

    for(int i=0;i<n;i++){
        prefix+=arr[i];
        if(total_sum == 2*prefix){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    vector<int>v(n);
    cout<<"enter the element in array: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<divide(v);

}
