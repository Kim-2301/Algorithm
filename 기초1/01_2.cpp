#include <iostream>
using namespace std;

int func2(int arr[], int N){
    int result=0;

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(arr[i]+arr[j]==100){
                return 1;
            }
        }
    }
    return 0;
}

int main(void){
    int arr[]={};
    int N=0;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }

    return func2(arr,N);

}