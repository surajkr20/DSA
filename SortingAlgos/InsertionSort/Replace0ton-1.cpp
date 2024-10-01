#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void Replace(vector<int>& arr) {
    int n = arr.size();
    vector<int> v(n, 0);
    int x = 0;
    
    for (int i = 0; i < n; i++) {
        int mn = INT_MAX;
        int mindx = -1;
        for (int j = 0; j < n; j++) {
            if (v[j] == 1) continue;
            if (mn > arr[j]) {
                mn = arr[j];
                mindx = j;
            }
        }
        arr[mindx] = x;
        v[mindx] = 1;
        x++;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; // Add a newline at the end for better output formatting
}

int main() {
    vector<int> arr = {2, 5, 8, 9, 4, 9};
    Replace(arr);
    return 0;
}
