#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

bool isPermutation(std::vector<int> array) {
    int n = array.size();

    if (n != std::unordered_set<int>(array.begin(), array.end()).size()) 
        return false;
    
    for (int i = 0; i < n; i++) 
        if (array[i] < 1 || array[i] > n) return false;
    
    return true;
    
}

int main(){

    int n;
    cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if(isPermutation(arr)) cout << "Yes";
    else cout << "No";
    
    return 0;
}