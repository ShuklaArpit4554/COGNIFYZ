#include <iostream>
using namespace std;

int main() {
    int numSubjects;
    cout << "Enter the number of subjects : ";
    cin >> numSubjects;

    double grades[numSubjects];
    double sum = 0;

    for (int i = 0; i < numSubjects; i++) {
        cout << "Enter grade for subject " << i + 1 << " : ";
        cin >> grades[i];
        sum += grades[i];
    }

    double average = sum / numSubjects;
    cout << "The average grade is : " << average << endl;

    return 0;
}
