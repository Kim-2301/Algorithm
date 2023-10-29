#include <iostream>
using namespace std;

int func1(int N){
    int sum=0;
    for(int i=1; i<=N; i++){
        if(i%3==0 || i%5==0){
            sum += i;
        }
    }
    return sum;
}

int main(void){
    int N=0;
    cout << "자연수 입력 : ";
    cin >> N;
    int sum = func1(N);
    cout << "결과값 : " << sum << endl;
}