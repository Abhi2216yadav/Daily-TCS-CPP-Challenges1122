//MIssing number

#include<iostream>
#include<limits.h>
using namespace std;

  
int main(){
    int n;
    cout<<"Enter size of Array : ";
    cin>>n;
    int temp = n;

    int arr[n];
    cout<< " Enter element of Array From 1 to "<< n+1 <<" : ";
    for(int i = 0; i<n ; i++){
        cin>> arr[i];
    }
  
    int sum = 0;

    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    n = temp+1;
    int total = (n*(n+1))/2;

    cout<<"\nMissing number is : "<<total - sum<< endl;

    return 0;
}

