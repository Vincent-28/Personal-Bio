#include <iostream>
#include <cmath>
#include <algorithm>

// class Solution {
// public:
//     std::string addBinary(std::string a, std::string b) {
//         int numA = 0;
//         int numB = 0;
//         for (int i = 0; i < a.length(); i++) {
//             if (a[a.length() -(i +1)] == '1') {
//                 numA = numA + pow(2, i);
//             }
//         }
//         for (int i = 0; i < b.length(); i++) {
//             if (b[b.length() -(i +1)] == '1') {
//                 numB = numB + pow(2, i);
//             }
//         }

//         int numAB = numA + numB;

//         if (numAB == 0) {
//             return "0";
//         }

//         std::string numStringA = "";
//         int numInt = numAB;
//         while (numInt != 0) {
//             numInt = numAB /2;
//             if (numInt *2 == numAB) {
//                 numStringA += "0";
//                 numAB = numAB /2;
//             }
//             else {
//                 numStringA += "1";
//                 numAB = numAB /2;
//             }
//         }
//         std::reverse(numStringA.begin(), numStringA.end());

//         return numStringA;
//     }
// };

// int BinaryToDecimal (std::string x) {
//     int num = 0;
//     for (int i = 0; i < x.length(); i++) {
//         if (x[x.length() -(i +1)] == '1') {
//             num = num + pow(2, i);
//         }
//     }
//     return num;
// }

// std::string DecimalToBinary (int x) {
//     std::string numString = "";
//     int numInt = x;
//     while (numInt != 0) {
//         numInt = x /2;
//         if (numInt *2 == x) {
//             numString += "0";
//             x = x /2;
//         }
//         else {
//             numString += "1";
//             x = x /2;
//         }
//     }
//     std::reverse(numString.begin(), numString.end());
//     return numString;
// }






class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
        std::reverse(a.begin(), a.end());
        std::reverse(b.begin(), b.end());
        int numA = 0;
        //convert binary string into integer decimal number
        for (int i = 0; i < a.length(); i++) {
            if (a[i] == '1') {
                numA = numA +pow(2, i);
            }
            else {
                numA = numA +0;
            }
        }
        int numB = 0;
        for (int i = 0; i < b.length(); i++) {
            if (b[i] == '1') {
                numB = numB +pow(2, i);
            }
            else {
                numB = numB +0;
            }
        }

        int newNumInt = numA + numB;
        int intTester = newNumInt;
        std::string answer = "";
        //convert integer decimal number into binary string
        if (newNumInt == 0) {
            return "0";
        }
        while (newNumInt > 0) {
            newNumInt = newNumInt /2;
            if (newNumInt *2 == intTester) {
                answer += '0';
                intTester /= 2;
            }
            else {
                answer += '1';
                intTester /= 2;
            }
        }
        std::reverse(answer.begin(), answer.end());
        return answer;
    }
};





int main() {
    std::string a;
    std::string b;

    std::cout << "Enter a binary number: ";
    std::cin >> a;

    std::cout << "Enter another binary number: ";
    std::cin >> b;

    // int decimalAddition = BinaryToDecimal(a) + BinaryToDecimal(b);

    // std::cout << DecimalToBinary(decimalAddition) << std::endl;

    Solution solution;

    std::cout << solution.addBinary(a, b) << std::endl;
}