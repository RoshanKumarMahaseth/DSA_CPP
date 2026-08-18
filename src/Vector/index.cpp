
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    //create vector

    // vector<int>v;
    // vector<int>v1(5,1);
    // //size and capacity
    // cout<<"size of v: "<<v.size()<<endl;
    // cout<<"capacity of v: "<<v.capacity()<<endl;

    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(10);

    // cout<<"size of v: "<<v.size()<<endl;
    // cout<<"capacity of v: "<<v.capacity()<<endl;

    // // update value
    // v[1]=5;
    //  cout<<"size of v: "<<v1.size()<<endl;
    // cout<<"capacity of v: "<<v1.capacity()<<endl;

    // v1.push_back(8);
    //  cout<<"size of v1: "<<v1.size()<<endl;
    // cout<<"capacity of v1: "<<v1.capacity()<<endl;


    // vector<int>v3={1,2,3,4,5};
    // cout<<"size of v3: "<<v3.size()<<endl;


    //delete value from vector

    // vector<int>vnew;
    // vnew.push_back(2);
    // vnew.push_back(4);
    // vnew.push_back(5);
    // vnew.push_back(1);
    // vnew.push_back(7);

    // cout<<"size of vnew: "<<vnew.size()<<endl;
    // cout<<"capacity of vnew v: "<<vnew.capacity()<<endl;

    // vnew.pop_back();
    // cout<<"size of vnew: "<<vnew.size()<<endl;
    // cout<<"capacity of vnew v: "<<vnew.capacity()<<endl;
    
    // for(int i=0;i<vnew.size();i++){
    //     cout<<vnew[i]<<" ";
    // }
    // cout<<endl;
    // vnew.insert(vnew.begin()+1,50);
    // for(int i=0;i<vnew.size();i++){
    //     cout<<vnew[i]<<" ";
    // }
    // cout<<endl;
    // vnew[1]=47;
    // for(int i=0;i<vnew.size();i++){
    //     cout<<vnew[i]<<" ";
    // }

    // vnew.clear();
    // cout<<"size of vnew: "<<vnew.size()<<endl;
    // cout<<"capacity of vnew v: "<<vnew.capacity()<<endl;

    // vector<int>arr;

    // arr.push_back(9);
    // arr.push_back(3);
    // arr.push_back(5);
    // arr.push_back(7);
    // arr.push_back(6);
    // arr.push_back(88);

    // cout<<arr[0]<<endl;
    // cout<<arr.front()<<endl;
    // cout<<arr[arr.size()-1]<<endl;
    // cout<<arr.back()<<endl;

    // for(auto i: arr){
    //     cout<<i<<" ";
    // }


    //sorting

    vector<int>ans;

    ans.push_back(5);
    ans.push_back(23);
    ans.push_back(6);
    ans.push_back(7);
    ans.push_back(45);

    // //sort in increasing order

    // sort(ans.begin(),ans.end());
    // for(auto i : ans){
    //     cout<<i<<" ";
    // }

    // cout<<endl;
    // // sort in decreasing order

    // sort(ans.rbegin(),ans.rend());
    // for(auto i : ans){
    //     cout<<i<<" ";
    // }


    //search in binary search

    cout<<binary_search(ans.begin(),ans.end(),7)<<endl;

    cout<<find(ans.begin(),ans.end(),7)-ans.begin()<<endl;


}