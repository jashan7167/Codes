#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int l, int h, int x) {
    if (h >= l) {
        int mid = l + (h - l) / 2;
        
        if ((arr[mid] == x) && (mid == 0 || x > arr[mid - 1]))
            return mid;

        if (x > arr[mid])
            return binarysearch(arr, mid + 1, h, x);

        return binarysearch(arr, l, mid - 1, x);
    }
    return -1;
}

void sortarr(int Arr1[], int Arr2[], int n1, int n2) {
    int temp[n1], flag[n1];
    for (int i = 0; i < n1; i++) {
        temp[i] = Arr1[i];
        flag[i] = 0;
    }
    sort(temp, temp + n1);

    int index = 0;

    for (int i = 0; i < n2; i++) {
        int f = binarysearch(temp, 0, n1 - 1, Arr2[i]);

        if (f == -1)
            continue;

        for (int j = f; (j < n1 && temp[j] == Arr2[i]); j++) {
            Arr1[index++] = temp[j];
            flag[j] = 1;
        }
    }

    for (int i = 0; i < n1; i++) {
        if (flag[i] == 0) {
            Arr1[index++] = temp[i];
        }
    }
}

int main() {
    int n1, n2;
    cout << "Enter the no of elements for array 1:" << endl;
    cin >> n1;
    cout << "Enter the no of elements for array 2:" << endl;
    cin >> n2;
    int arr1[n1], arr2[n2];

    for (int i = 0; i < n1; i++) {
        cout << "Element " << i << ": ";
        cin >> arr1[i];
    }

    for (int i = 0; i < n2; i++) {
        cout << "Element " << i << ": ";
        cin >> arr2[i];
    }

    sortarr(arr1, arr2, n1, n2);
    cout << "Sorted Array:" << endl;
    for (int i = 0; i < n1; i++) {
        cout << arr1[i] << endl;
    }
    return 0;
}
