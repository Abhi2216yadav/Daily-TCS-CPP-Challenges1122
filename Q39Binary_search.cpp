//Binary search

#include<iostream>
#include<vector>
using namespace std;

int Binarysearch(vector<int> arr, int n, int val){

    for(int i = 0; i<n; i++){
        if(arr[i] == val){
            return i+1;
        }
    }
    return -1;
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

    int val;
    cout<< "Enter value to search : ";
    cin>>val;

    int ans = Binarysearch(arr, n, val);

    if(ans != -1){
        cout<< "Value is find at : "<<ans<<" position "<<endl;
    }else{
        cout<< "Value is Not found in Array "<<endl;
    }
    return 0;
}