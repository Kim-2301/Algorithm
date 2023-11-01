#include <iostream>
#include <vector>

using namespace std;

int main(void){
    int arr[26]={0};
    string s;
    cin >> s;

    for(char c : s)
        arr[c-'a']++;
    
    for(int i : arr)
        cout << i << " ";
}