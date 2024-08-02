#include <iostream>
using namespace std;

int main() {
    int n, choice;
    cout << "Enter the number of elements in the array : ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter 1 for Ascending order or 2 for Descending order : ";
    cin >> choice;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((choice == 1 && arr[j] > arr[j + 1]) || (choice == 2 && arr[j] < arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << endl;
    cout << "Sorted array : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
