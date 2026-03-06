//Find largest & smallest element in array

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

    int max = INT_MIN;
    int Smax = INT_MIN;

    for(int i =0; i< n; i++){
        if(arr[i] > max){
            Smax = max;
            max = arr[i];
        }else if(arr[i] > Smax && arr[i] < max){
            Smax = arr[i];
        }
        
    }
    
    cout<< "Largest value is :" << max<< endl;
    cout<< "Second Largest value is :" << Smax<< endl;
    return 0;
}

