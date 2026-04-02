//Seat arrangement problem

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter seat no to check facing seat Number and site type : ";
    cin>>n;

    int pos = n % 8;
    if(pos == 0){
        pos = 8;
    }

    switch(pos){
        case 1: cout<< "Facing seat is : " <<n+3<< "\n Seat type : Lower"; 
            break;
        case 2: cout<< "Facing seat is : " <<n+3<< "\n Seat type : Middle"; 
            break;
        case 3: cout<< "Facing seat is : " <<n+3<< "\n Seat type : Upper"; 
            break;
        case 4: cout<< "Facing seat is : " <<n+3<< "\n Seat type : Lower"; 
            break;
        case 5: cout<< "Facing seat is : " <<n+3<< "\n Seat type : middle"; 
            break;
        case 6: cout<< "Facing seat is : " <<n+3<< "\n Seat type : Upper"; 
            break;
        case 7: cout<< "Facing seat is : " <<n+1<< "\n Seat type : SideLower"; 
            break;
        case 8: cout<< "Facing seat is : " <<n-1<< "\n Seat type : SideUpper"; 
            break;
        default:
            cout<< "Enter valid Seat number"<<endl;
            break;
    }
    return 0;
}