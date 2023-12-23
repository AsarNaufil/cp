#include <iostream>

using namespace std;

int main(){

    int n, sum = 0;
    cout << "No of trees: " ;
    cin >> n ;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > 10) 
            sum += arr[i] - 10;
    }
    cout << sum << endl;
    return 0;
}