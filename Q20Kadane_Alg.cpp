//Kadane’s algorithm (max subarray sum)

#include<iostream>
#include<limits.h>
#include<vector>
#include <algorithm>
using namespace std;

int MaxSum(vector<int> &arr){
    int CurrSum = 0, maxSum = INT_MIN;

    for(int val : arr){
        CurrSum += val;
        maxSum = max(CurrSum, maxSum);

        if(CurrSum < 0){
            CurrSum = 0;
        }
    }
    return maxSum;
}

int main(){
    int n;
    cout<<"Enter size of Array : ";
    cin>>n;

    vector<int> arr(n);
    cout<< " Enter element of Array : ";
    for(int i = 0; i<n ; i++){
        cin>> arr[i];
    }

    cout<<"MAximum Subarray Sum :"<< MaxSum(arr)<<endl;
    return 0;
}