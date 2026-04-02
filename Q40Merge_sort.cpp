//Merge sort and Quick sort

#include<iostream>
#include<vector>
using namespace std;

void Merge(vector<int>& arr, int st, int mid, int end){
    int i = st;
    int j = mid+1;
    vector<int> temp;

   while(i <= mid && j <= end){
        if(arr[i] < arr[j])
            temp.push_back(arr[i++]);
        else
            temp.push_back(arr[j++]);
    }

    while(i <= mid)
        temp.push_back(arr[i++]);

    while(j <= end)
        temp.push_back(arr[j++]);

    for(int k = 0; k < temp.size(); k++){
        arr[st + k] = temp[k];
    }

}

void MergeSort(vector<int>& arr, int st, int end){

    if(st < end){
        int mid = st + (end - st) / 2;
        MergeSort(arr, st, mid);
        MergeSort(arr, mid+1, end);
        Merge(arr, st, mid, end);
    }
}

void display(vector<int> arr){

    for(int val : arr){
        cout<<val << " ";
    }
    cout<<endl;

    return;
}

int main(){
    int n;
    cout<< "Enter size of Array : ";
    cin>>n;

    vector<int> arr(n);
    cout<< "Enter array elements : ";
    for(int i =0; i<n; i++ ){
        cin>>arr[i];
    }

    cout<<"\nBefore Merge sort Array is : ";
    display(arr);

    MergeSort(arr, 0, n-1);

    cout<<"\nAfter Merge sort Array is : ";
    display(arr);

    return 0;

}