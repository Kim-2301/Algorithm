#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N,v,cnt=0;
    int arr[100]={0};
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    cin >> v;

    for(int i=0;i<N;i++){
        if(arr[i]==v){
            cnt++;
        }
    }
    cout << cnt;
}