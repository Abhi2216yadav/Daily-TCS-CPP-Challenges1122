//Quick sort and Quick sort

#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr, int lb, int ub){
    int pivot = arr[lb];
    int st = lb, end = ub;

    while(st < end ){
        while(arr[st] <= pivot && st < ub){
            st++;
        }

        while(arr[end] > pivot){
            end--;
        }
        if(st < end){
            swap(arr[st], arr[end]);
        }
    }

    swap(arr[lb] , arr[end]);
    return end;
}

void QuickSort(vector<int>& arr, int lb, int ub){

    if(lb < ub){
        int loc = partition(arr, lb, ub);
        QuickSort(arr, lb, loc-1);
        QuickSort(arr, loc+1, ub);
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

    cout<<"\nBefore Quick sort Array is : ";
    display(arr);

    QuickSort(arr, 0, n-1);

    cout<<"\nAfter Quick sort Array is : ";
    display(arr);

    return 0;

}