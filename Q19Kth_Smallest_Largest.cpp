//Kth largest/smallest element

#include<iostream>
#include<limits.h>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of Array : ";
    cin>>n;

    vector<int> arr(n);
    cout<< " Enter element of Array : ";
    for(int i = 0; i<n ; i++){
        cin>> arr[i];
    }
    int k;
    cout<<"Enter Kth value : ";
    cin>>k;
    sort(arr.begin(),arr.end());

    cout<< "Kth Smallest Element is :"<< arr[k-1]<<endl;
    cout<< "Kth Largest Element is : " << arr[n-k] <<endl;
    return 0;
}