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

    int min = INT_MAX;
    int max = INT_MIN;

    for(int i =0; i< n; i++){
        if(arr[i] > max){
            max = arr[i];
        }

        if(arr[i] < min){
            min = arr[i];
        }
        
    }
    cout<< "Smallest value is :"<< min<< endl;
    cout<< "Largest value is :" << max<< endl;
    return 0;
}