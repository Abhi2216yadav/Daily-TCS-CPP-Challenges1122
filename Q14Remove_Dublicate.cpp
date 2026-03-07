//Remove duplicates from array
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
    for( int i =0; i<n-1; i++){

        for(int j = i+1; j<n; j++){

            if(arr[i] == arr[j]){

                for(int k = j; k <n; k++){
                    arr[k] = arr[k+1]; // shifting 
                }
                n--; // reduce size
            }
                
        }

    }
    
    cout<<" After deleting Array : ";
    for(int i = 0; i<n; i++){
        cout<<arr[i] << " ";
         
    }
    cout<<endl;
    cout<< "Size of arr is : " << n <<endl;
    return 0;
}
