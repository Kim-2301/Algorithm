#include <iostream>
using namespace std;

int test_case;
int arr[10];


int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> test_case;

    for(int i=0; i<test_case; i++){
        long sum=0;
        int res=0;
        for(int n=0; n<10; n++){
            cin >> arr[n];
            sum += arr[n];
        }
        if(sum % 10 < 5){
            res=sum/10;
        }
        else{
            res=(sum/10)+1;
        }
        cout << '#' << i+1 << ' ' << res << '\n';
    }
    return 0;
}