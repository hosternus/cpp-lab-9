#include <iostream>

using namespace std;

template<typename T>
T min(const T *arr, size_t size) {
    T min = arr[0];
    for (size_t i = 0; i < size; i++){
        if (arr[i] < min) { min = arr[i]; }
    }
    return min;
}

template<typename T>
T max(const T *arr, size_t size) {
    T max = arr[0];
    for (size_t i = 0; i < size; i++){
        if (arr[i] > max) { max = arr[i]; }
    }
    return max;
}

int main(void) {

    long long arr[] = {-1, 1, 2, 5, 3, 4};

    cout << "min: " << min(arr, 6) << endl;
    cout << "max: " << max(arr, 6) << endl;

    return 0;
}
