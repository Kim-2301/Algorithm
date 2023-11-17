#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
int arr[8];
int num[8];
bool check[8];

void func(int k,int a){
    if(k==m){
        for(int i=0;i<m;i++){
            cout << num[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i=a;i<n;i++){
        if(!check[i]){
            num[k]=arr[i];
            check[i]=1;
            a=i;
            func(k+1,a);
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
    func(0,0);
}