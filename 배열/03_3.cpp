#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int arr[10]={0};
    int A,B,C,num;
    cin >> A;
    cin >> B;
    cin >> C;
    num = A*B*C;
    while(num>0){
        arr[num%10]++;
        num/=10;
    }
    for(int i=0;i<10;i++)
        cout << arr[i] <<'\n';
}