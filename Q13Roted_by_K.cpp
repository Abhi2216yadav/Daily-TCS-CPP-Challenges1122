//Rotate array by K positions

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

    int k;
    cout<< "Enter k position to roted array :";
    cin>>k;
    
    k = k % n;   

    int temp[k];
    
    //here i am storing value before kth index
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    //shifting or roted value to last to kth postion
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    //now restore the value from temp to origanl arr at kth position
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
    
    cout<< "After rotetion of Array is :";
    for(int i= 0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
    cout<<"Done";
    return 0;
}

