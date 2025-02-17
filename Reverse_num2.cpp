#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
// worest case time complexity when n digits  O(n)
int reverse_integer_naive(int n) {
    // Convert the integer to a string
    std::string str = std::to_string(n);

   
    std::reverse(str.begin(), str.end());

    int reversed = std::stoi(str);
    return reversed;
}

int main() {
    int num ;
    cout<<"Enter digits:";
    cin>>num;
    int reversed_num = reverse_integer_naive(num);
    std::cout << "Reversed integer: " << reversed_num << std::endl;
    return 0;
}
