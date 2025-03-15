#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int sz = sizeof(arr) / sizeof(arr[0]);

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i=0; i<sz; i++){
        smallest = min(arr[i] , smallest);
        largest = max(arr[i] , largest);
    }

    cout<<"Smallest : "<<smallest<<endl;
    cout<<"Largest : "<<largest<<endl;
    return 0;
}