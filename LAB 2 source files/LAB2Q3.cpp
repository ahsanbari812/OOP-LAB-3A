#include <iostream>

bool hasSubsetSum(int arr[], int size, int targetSum) {
    if (targetSum == 0) {
        return true;
    }
    if (size == 0) {
        return false;
    }

    if (hasSubsetSum(arr, size - 1, targetSum)) {
        return true;
    }

    if (targetSum >= arr[size - 1] && hasSubsetSum(arr, size - 1, targetSum - arr[size - 1])) {
        return true;
    }

    return false;
}

int main() {
    int arr[] = {3, 34, 4, 12, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int targetSum;
    std::cout << "Enter the target sum: ";
    std::cin >> targetSum;

    if (hasSubsetSum(arr, size, targetSum)) {
        std::cout << "A subset with the target sum exists." << std::endl;
    } else {
        std::cout << "No subset with the target sum exists." << std::endl;
    }

    return 0;
}
