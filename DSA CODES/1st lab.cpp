#include <iostream>
using namespace std;

int main() {
    int g, a[15], b[15], c[30], m = 0, n, o, k, cou = 0, i, pos, sea;
    char p;

    do {
        cout << "Menu:" << endl;
        cout << "1. Insert data" << endl;
        cout << "2. Traverse array" << endl;
        cout << "3. Delete specific data" << endl;
        cout << "4. Merge two arrays" << endl;
        cout << "5. Search in array" << endl;
        cout << "6. Sort array in descending order" << endl;
        cout << "Enter your choice: ";
        cin >> k;

        switch (k) {
            case 1:
                cout << "Enter the total size of the array: ";
                cin >> m;
                if (cou == m) {
                    cout << "Array is full" << endl;
                } else {
                    cout << "Enter values: " << endl;
                    for (i = 0; i < m; i++) {
                        cin >> a[i];
                    }
                }
                break;

            case 2:
                if (m == 0) {
                    cout << "Array is empty" << endl;
                } else {
                    cout << "Displaying the values:" << endl;
                    for (i = 0; i < m; i++) {
                        cout << a[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 3:
                if (m == 0) {
                    cout << "Array is empty" << endl;
                } else {
                    cout << "Enter the position of data you want to delete : ";
                    cin >> pos;
                    if (pos <= 0 || pos > m) {
                        cout << "Invalid position!" << endl;
                    } else {
                        for (i = pos - 1; i < m - 1; i++) {
                            a[i] = a[i + 1];
                        }
                        m--; 
                        cout << "Array after deletion: ";
                        for (i = 0; i < m; i++) {
                            cout << a[i] << " ";
                        }
                        cout << endl;
                    }
                }
                break;

            case 4:
                if (m == 0) {
                    cout << "First array is empty" << endl;
                } else {
                    cout << "Enter the size of the second array: ";
                    cin >> n;

                    cout << "Enter values for the second array: " << endl;
                    for (i = 0; i < n; i++) {
                        cin >> b[i];
                    }

                    o = m + n;
                    for (i = 0; i < m; i++) {
                        c[i] = a[i];
                    }
                    for (i = 0; i < n; i++) {
                        c[m + i] = b[i];
                    }

                    cout << "Merged array: ";
                    for (i = 0; i < o; i++) {
                        cout << c[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 5:
                if (m == 0) {
                    cout << "Array is empty" << endl;
                } else {
                    cout << "Enter the value to search: ";
                    cin >> sea;
                    g = 0;
                    for (i = 0; i < m; i++) {
                        if (a[i] == sea) {
                            cout << "Found at position: " << i + 1 << endl;
                            g++;
                            break;
                        }
                    }
                    if (g == 0) {
                        cout << "Value not found in the array" << endl;
                    }
                }
                break;

            case 6:
                if (m == 0) {
                    cout << "Array is empty" << endl;
                } else {
                   
                    for (i = 0; i < m - 1; i++) {
                        for (int j = i + 1; j < m; j++) {
                            if (a[i] < a[j]) {
                    
                                int temp = a[i];
                                a[i] = a[j];
                                a[j] = temp;
                            }
                        }
                    }

                    cout << "Array sorted in descending order: ";
                    for (i = 0; i < m; i++) {
                        cout << a[i] << " ";
                    }
                    cout << endl;
                }
                break;

            default:
                cout << "Wrong choice! Please try again." << endl;
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> p;
    } while (p == 'y');

    return 0;
}

