#include <bits/stdc++.h>

using namespace std;

void selectionSort(vector<int> &arr) {
    int n = arr.size();

    for(int i=0; i<n; i++){
        int min_idx = i;

        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]) min_idx = j;
        }
        swap(arr[i], arr[min_idx]);
    }
}

void bubbleSort(vector<int> &arr) {
    int n = arr.size();

    for (int i=n-1; i>0; i--) {
        bool swapped = false;
        for (int j=0; j<i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break; 
    }
}


void insertionSort(vector<int> &arr){
    int n = arr.size();

    for(int i=0; i<n; i++){
        int j=i;
        while(j>0 && arr[j-1] > arr[j]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
}

void mergeSort(vector<int> &arr){

}

void recursiveBubbleSort(vector<int> &arr){

}

void recursiveInsertionSort(vector<int> &arr) {

}

void quickSort(vector<int> &arr){

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    vector<int> arr = {5,4,3,2,1};

    insertionSort(arr);

    for(auto i: arr){
        cout << i << " ";
    }

    return 0;
}
