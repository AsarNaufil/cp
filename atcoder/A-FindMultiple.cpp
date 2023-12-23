// Optimal implementation

#include <iostream>

int main() {
    int A, B, C;
    std::cin >> A >> B >> C;

    int remainder = A % C;
    int result = (remainder == 0) ? A : A + (C - remainder);

    if (result <= B)
        std::cout << result << std::endl;
    else 
        std::cout << -1 << std::endl;
    
    return 0;
}


// #include <iostream>
// #include <vector>

// int main() {
//     int a, b, c;
//     std::cin >> a >> b >> c;
//     bool found = false;

//     for (int i = a; i <= b; i++) {
//         if (i % c == 0) {
//             found = true;
//             std::cout << i;
//             break;
//         }
//     }
//     if (!found) std::cout << -1;
//     return 0;
// }
