#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x,sum=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cin >> x;

    int check[1000001]={0};
    for(int i=0;i<n;i++){
        if(check[x-arr[i]]==1){
            sum++;
        }
        check[arr[i]]=1;
    }
    cout << sum;
    return 0;
    
}