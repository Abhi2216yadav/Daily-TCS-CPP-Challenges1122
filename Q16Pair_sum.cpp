// All pairs with given sum

#include<iostream>
#include<vector>
using namespace std;

void Pair_sum(int arr[], int target, int n){
    
   for(int i =0; i<n; i++){
    for(int j = i+1; j< n; j++){
        if(arr[i] + arr[j] == target){
            cout<< "["<< arr[i] << ","<< arr[j] << "], "; 
        }
    }
   }

}
int main(){
    int n;
    cout<<"Enter size of Array : ";
    cin>>n;

    int arr[n];
    cout<< " Enter element of Array : ";
    for(int i = 0; i<n ; i++){
        cin>> arr[i];
    }
    int target;
    cout<< "Enter Target sum : ";
    cin>> target;

    cout<< "Pairs of value is : ";
    Pair_sum(arr, target,n);
    return 0;

}