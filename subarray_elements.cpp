#include<iostream>
using namespace std;
//Generate all possible sub-arrays
int main(){
    cout<<"Enter length of an array ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of an array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){        //Starting Point 
        for(int j=i;j<n;j++){     //Ending Point
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";     //Elements between starting and ending point of array
            }
            cout<<endl;
        }
    }

    return 0;
}