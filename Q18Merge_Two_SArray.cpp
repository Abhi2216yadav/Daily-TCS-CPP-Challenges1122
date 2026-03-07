// Merge two sorted arrays

#include<iostream>
#include<vector>
using namespace std;

void MergeSort(vector<int> arr, vector<int> arr2, int n, int n2){
    vector<int> ans(n+n2, 0);
    int i =0, j = 0;
    int idx = 0;

    while(i < n && j < n2){

        if(arr[i] < arr2[j]){
            ans[idx++] = arr[i++];
        }else{
            ans[idx++] = arr2[j++];
        }
    }

    while(i < n){
        ans[idx++] = arr[i++];
    }

    while(j < n2){
        ans[idx++] = arr2[j++];
    }

    cout<< "After Merging Array is ";
    for(int i =0; i< (n+n2); i++){
        cout<< ans[i] << " ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter size of First Array : ";
    cin>>n;

    vector<int> arr(n);
    cout<< "\nEnter element of  First Sorted Array : ";
    for(int i = 0; i<n ; i++){
        cin>> arr[i];
    }

    int n2;
    cout<<"\nEnter size of Second Array : ";
    cin>>n2; 

    vector<int> arr2(n2);
    cout<< "\nEnter element of  First Sorted Array : ";
    for(int i = 0; i<n2 ; i++){
        cin>> arr2[i];
    }

    MergeSort(arr, arr2,n, n2);

    return 0;
}