//Nearest greater number using digits

#include<iostream>
#include<vector>
using namespace std;

int NextGret(int num){
    vector<int> arr;
    int ans = 0, smallest = INT_MAX;

    while(num > 0){
        int rem = num %10;
        num /= 10;

        if(rem < ans){
            ans = rem;
            break;
        }
        ans = rem;
        smallest = min(smallest, ans);
        arr.push_back(ans);
        
    }

    num = num*10 + smallest;

    for(int i = 0; i<arr.size(); i++){
        if(arr[i] == smallest){
            num = num*10 + ans;
            continue;
        }
        num = num*10 + arr[i];
    }
    return num;
}

int main(){
    int num;
    cout<< "\nEnter number to find Nearest greater number  : ";
    cin>>num;

    cout<<"\nNearest greater number using digits is : "<< NextGret(num) <<endl;
    return 0;
}
