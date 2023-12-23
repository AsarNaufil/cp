#include <iostream>

using namespace std;

int main(){
    int a,b;
    cout << "Input: ";
    cin >> a >> b ; 

    if (abs(a - b) == 1 || abs(a - b) == 9) 
        cout << "Yes" << endl;
    else cout << "No" << endl; 
    return 0;
}