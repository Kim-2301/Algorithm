#include <iostream>
using namespace std;

int n,m;
int arr[8];
bool isused[8];

void func(int k, int a){
    if(k==m){
        for(int i=0;i<m;i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i=a;i<=n;i++){
        if(!isused[i]){
            arr[k]=i;
            isused[i]=1;
            a=i;
            func(k+1,a);
            isused[i]=0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    func(0,1);
}