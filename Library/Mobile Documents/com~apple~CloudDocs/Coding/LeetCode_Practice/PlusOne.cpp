#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        std::reverse(digits.begin(), digits.end()); //1)9 9 9
        digits[0] += 1; //2)10 9 9 
        for (int i = 0; i < digits.size(); i++) {
            if (digits[i] == 10) {
                digits[i] = digits[i] - 10; //3)0 9 9 5)0 0 9
            if (digits[i +1] == 9) {
                    // std::reverse(digits.begin(), digits.end())
                return digits;
            }
            else {
                digits[i +1] += 1;
            }
        }
        }
        std::reverse(digits.begin(), digits.end());
        return digits;
    }
};

int main() {
    std::vector<int> nums = {9,9,9};

    Solution solution;

    std::vector<int> result = solution.plusOne(nums);

    for (int i : result) {
        std::cout << i;
    }
    std::cout << std::endl;
}
