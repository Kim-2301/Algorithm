#include <iostream>
#include <stack>
using namespace std;

long n,test_case, mx, res;
long arr[1000000];
stack<long> S;

int main(){
    cin >> test_case;
    for(int i=0; i<test_case; i++){
        cin >> n;
        res = 0;
        for(int j=0; j<n; j++){
            cin >> arr[j];
        }
        mx = arr[n-1];
        for(int x=n-2; x>=0; x--){
            if(mx > arr[x]){
                res += mx-arr[x];
            }
            else{
                mx=arr[x];
            }
        }
        cout << '#' << i+1 << ' ' << res << '\n';
    }

}