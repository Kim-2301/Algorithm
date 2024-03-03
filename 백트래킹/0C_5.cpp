#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
int arr[8];
int num[8];
int check[8];

void func(int k){

    if(k==m){
        for(int x=0;x<m;x++){
            cout << num[x] << ' ';
        }
        cout << '\n';
        return;
    }
    
    for(int i=0;i<n;i++){
        if(!check[i]){
            num[k]=arr[i];
            check[i]=1;
            func(k+1);
            check[i]=0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    func(0);
}