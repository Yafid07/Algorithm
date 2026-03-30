#include <iostream>
#include <vector>
#include <chrono>
#include <cstdlib>

using namespace std;
using namespace chrono;

void insertionSort(vector<int> &arr) {

    int N = arr.size();

    for (int j = 1; j < N; j++) {

        int key = arr[j];
        int k = j - 1;
        while (k >= 0 && arr[k] > key) {

            arr[k + 1] = arr[k];
            k--;

        }

        arr[k + 1] = key;

    }

}

void merge(vector<int> &arr, int l, int mid, int r) {

    int n1 = mid - l + 1;
    int n2 = r - mid;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++) L[i] = arr[l+ i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {

        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];

    }

    while (i < n1) {

            arr[k++] = L[i++];

    }

    while (j < n2) {

            arr[k++] = R[j++];

    }

}

void mergeSort(vector<int>& arr, int l, int r) {

    if (l < r) {

        int mid = (l + r) / 2;

        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);

    }

}

int partition(vector<int> &arr, int l, int h) {

    int pivot = arr[h];
    int i = l - 1;

    for (int j = l; j < h; j++) {

        if (arr[j] < pivot) {

            i++;
            swap(arr[i], arr[j]);

        }

    }

    swap(arr[i + 1], arr[h]);
    return i + 1;

}

void quickSort(vector<int> &arr, int l, int h) {

    if (l < h) {

        int pi = partition(arr, l, h);
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, h);

    }

}

int main() {

    string name = "Tajrian Chowdhury";
    string id = "C243026";

    vector<int> X = {10, 100, 1000, 10000, 100000};

    for (int i = 0; i < X.size(); i++) {

        int N = X[i];

        vector<int> data(N);
        for (int i = 0; i < N; i++) {

            data[i] = rand() % 100000;

        }
        //11111111111111111111
        vector<int> arr1 = data;

        auto start1 = high_resolution_clock::now();
        insertionSort(arr1);

        auto end1 = high_resolution_clock::now();

        double time1 = duration<double>(end1 - start1).count();

        cout << "Name: " << name << ", ID: " << id << ", Algorithm: Insertion Sort, N=" << N << ", Time: " << time1 << " sec\n";


        //222222222222222222
        vector<int> arr2 = data;

        auto start2 = high_resolution_clock::now();
        mergeSort(arr2, 0, N - 1);

        auto end2 = high_resolution_clock::now();

        double time2 = duration<double>(end2 - start2).count();

        cout << "Name: " << name << ", ID: " << id << ", Algorithm: Merge Sort, N=" << N << ", Time: " << time2 << " sec\n";

        //33333333333
        vector<int> arr3 = data;

        auto start3 = high_resolution_clock::now();
        quickSort(arr3, 0, N - 1);

        auto end3 = high_resolution_clock::now();

        double time3 = duration<double>(end3 - start3).count();

        cout << "Name: " << name << ", ID: " << id << ", Algorithm: Quick Sort, N=" << N << ", Time: " << time3 << " sec\n";

        cout << "-------------------------------------\n";

    }

    return 0;
}
