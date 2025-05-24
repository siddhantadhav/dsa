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

void bubbleSort(vector<int> &arr){
    int n = arr.size();

    bool swapped = false;
     
}

void insertionSort(vector<int> &arr){

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

    bubbleSort(arr);

    for(auto i: arr){
        cout << i << " ";
    }

    return 0;
}
