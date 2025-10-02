#include <iostream>
#include <vector>
using namespace std;

class TwoSum {
    vector<int> nums;
    int target;

public:
    // Constructor
    TwoSum(vector<int> nums, int target) : nums(nums), target(target) {}

    // Método que busca los dos índices
    vector<int> solve() {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j}; // devuelve un vector con los índices
                }
            }
        }
        return {}; // si no encuentra nada
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    TwoSum ts(nums, target);
    vector<int> result = ts.solve();

    if (!result.empty()) {
        cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No se encontró solución." << endl;
    }

    return 0;
}
