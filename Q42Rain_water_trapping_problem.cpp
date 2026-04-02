//Rain water trapping problem

#include<iostream>
#include<vector>
using namespace std;

int mostarea(vector<int>& arr){
    int up = arr.size()-1;
    int lb = 0;
    int maxwater = 0;

    while(lb < up){
        int w  = up - lb;
        int ht = min(arr[lb], arr[up]);
        int curr = ht * w;
        maxwater = max(maxwater, curr);

        arr[lb] < arr[up] ? lb++ : up--;
    }

    return maxwater;

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

    cout<< "Most water area is : " << mostarea(arr)<<endl;
    return 0;
}
