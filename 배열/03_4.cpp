#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[9]={0};
    int N;
    cin >> N;

    while(N){
        if(N%10 == 9)
            arr[6]++;
        else 
            arr[N%10]++;
        N/=10;
    }
    arr[6]=(arr[6]+1)/2;
    sort(arr,arr+9);
    cout << arr[8]<<" ";
    
}