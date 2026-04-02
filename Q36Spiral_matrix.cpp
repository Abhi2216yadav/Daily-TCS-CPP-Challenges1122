//Spiral matrix
#include<iostream>
#include<vector>
using namespace std;


vector<int> spiralOrder(vector<vector<int>> arr){
    int m = arr.size();
    int n = arr[0].size();
    int srow = 0, erow = m-1;
    int scol = 0, ecol = n-1;

    vector<int> ans;

    while(srow <= erow && scol <= ecol){
        //top
        for(int i = scol ; i<= ecol; i++){
            ans.push_back(arr[srow][i]);
        }

        //right
        for(int i = srow+1; i<=erow; i++){
            ans.push_back(arr[i][ecol]);
        }

        //bottom

        for(int i = ecol-1; i>= scol; i--){
            if(srow == erow){
                break;
            }
            ans.push_back(arr[erow][i]);
        } 

        //left

        for(int i = erow-1; i>=srow+1; i--){
            if(scol == ecol){
                break;
            }
            ans.push_back(arr[i][scol]);
        }scol++;
        srow++; erow--; ecol--;

    }
    return ans;
}

int main(){
    int n;
    cout<< "Enter size of Array : ";
    cin>>n;

    vector<vector<int>> arr(n, vector<int>(n));

    cout<< "Enter Elements of 2D array : ";
    for(int i = 0; i<n; i++){
        for(int j =0; j<n ; j++){
            cin>>arr[i][j];
        }
    }

    cout<< "Array is : "<<endl;
    for(int i = 0; i<n; i++){
        for(int j =0; j<n ; j++){
            cout<<arr[i][j] << " ";
        }
        cout<<endl;
    }
    
    cout<< "Spiral matrix : "<< endl;

    vector<int> ans = spiralOrder(arr);
    int n2 = ans.size();
    int j = 2;

    for(int i = 0; i<n2; i++){
        cout<<ans[i] << " ";
        if(n-1 == i){
            cout<<endl;
            n = n*j;
            j++;
        }  
    }
    cout<<endl;

    return 0;
}