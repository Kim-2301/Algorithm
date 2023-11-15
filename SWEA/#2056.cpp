#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int test_case;
int arr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> test_case;

    for(int i=1;i<=test_case;i++){
        string S;
        cin >> S;
        int yy = stoi(S.substr(0,4));
        int mm = stoi(S.substr(4,2));
        int dd = stoi(S.substr(6,2));

        if(mm>=1 && mm<=12 && dd<=arr[mm]){
            cout << '#' << i << ' ' << setw(4) << setfill('0') << yy;
            cout << '/' << setw(2) << setfill('0') << mm;
            cout << '/' << setw(2) << setfill('0') << dd << '\n';
        }   
        else{
            cout << '#' << i << ' ' << -1 << '\n';
        }    
    }
}