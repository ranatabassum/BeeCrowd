#include <iostream>

int findMax(int arr[], int size) {
    int max = arr[0];  // Assuming the first element e maximum

    // Iterate through the array starting from the second element
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];  // Update max if a larger element is found
        }
    }

    return max;
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxNumber = findMax(arr, size);

    std::cout << "The maximum number is: " << maxNumber << std::endl;

    return 0;
}
