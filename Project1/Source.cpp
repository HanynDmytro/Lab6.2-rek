#include <iostream>
#include <limits>
using namespace std;

int findMaxIndex(const int a[], int n, int index = 0, int maxIndex = 0) {
    if (index == n) {
        return maxIndex;
    }
    if (a[index] > a[maxIndex]) {
        maxIndex = index;
    }
    return findMaxIndex(a, n, index + 1, maxIndex);

}

int findMinIndex(const int a[], int n, int index = 0, int minIndex = 0) {
    if (index == n) {
        return minIndex;
    }
    if (a[index] < a[minIndex]) {
        minIndex = index;
    }
    return findMinIndex(a, n, index + 1, minIndex);

}

//double calculateAverageIndex(int a[], int n) {
//    int maxIndex = findMaxIndex(a, n);
//    int minIndex = findMinIndex(a, n);
//    return (maxIndex + minIndex) / 2.0;
//}

int main() {
    const int n = 6;
    int a[n] = {5, 2, 8, 1, 9, 3};

    cout << "Array: ";
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    int maxIdx = findMaxIndex(a, n);
    int minIdx = findMinIndex(a, n);
    double avgIndex = (maxIdx + minIdx) / 2.0;
    cout << "Average index: " << avgIndex << endl;

    return 0;
}
