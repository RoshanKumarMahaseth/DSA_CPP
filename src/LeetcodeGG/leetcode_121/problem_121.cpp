


 // only work on few cases;

// #include <iostream>
// #include <climits>
// using namespace std;

// int main(){
//     int arr[]={7,1,5,3,6,4};

//     int size = 6;
//     int k;

//     int min = INT_MAX;
//     for(int i=0;i<size;i++){
//         if(arr[i]<min){
//             min = arr[i];
//             k = i;
//         }
//     }

//     int max = INT_MIN;
//     for(int j=k;j<size;j++){
//         if(arr[j]>max){
//             max = arr[j];
//         }
//     }


//     int ans = max-min;

//     cout<<"profit is: "<<ans<<endl;
//     return 0;
// }


 // better approach
// #include <iostream>
// using namespace std;

// int main(){
//     int arr[]={7,1,5,3,6,4};
//     int size = 6;

//     int min = arr[0];
//     int profit = 0;

//     for(int i=1;i<size;i++){
//         if(arr[i]<min){
//             min = arr[i];
//         }

//         int currentProfit = arr[i]-min;

//         if(currentProfit>profit){
//             profit = currentProfit;
//         }
//     }

//     cout<<"profit is: "<<profit<<endl;

//     return 0;
// }


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();

        int min = prices[0];
        int profit=0;

        for(int i=1;i<size;i++){
            if(prices[i]<min){
                min = prices[i];
            }

            int currentProfit = prices[i] - min;
            if(currentProfit>profit){
                profit = currentProfit;
            }
        }

        return profit;
    }
};