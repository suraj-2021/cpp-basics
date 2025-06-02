#include <iostream>
#include <vector>
using namespace std;

// Function template to print array contents
template <typename T>
void printarray(const vector<T>& array) {
    cout << "The following are the contents of the array:" << endl;
    for (size_t i = 0; i < array.size(); ++i) {
        cout << array[i] << endl;
    }
}

int main() {
    int n;
    cout << "How many elements do you want to pass in the array? ";
    cin >> n;

    vector<int> array(n);
    for (int i = 0; i < n; ++i) {
        cout << "Element at index " << i << ": ";
        cin >> array[i];
    }

    printarray(array);

    return 0;
}
