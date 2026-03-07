//Move all zeros to end

#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of Array : ";
    cin>>n;

    int arr[n];
    cout<< " Enter element of Array : ";
    for(int i = 0; i<n ; i++){
        cin>> arr[i];
    }

    
    for(int i =0; i<n; i++){
        if(arr[i] == 0){
            for(int j = i+1; j< n; j++){
                
                if(arr[j] != 0){
                    swap(arr[i], arr[j]);
                    break;
                }
            }
        }
    }

    cout<< "After moving Zeros to end Array is : ";

    for(int i =0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;
    return 0;
}