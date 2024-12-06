#include <bits/stdc++.h>

using namespace std;

void pattern1(int n){
    for (int i=1; i <=n; i++) {
        for (int j=1; j <=n; j++) {
            cout << "*" << " ";
        }
        cout << "\n";
    }
}

void pattern2(int n){
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            cout << "*" << " ";
        }
        cout << "\n";
    }
}

void pattern3(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++) {
            cout << j << " ";
        }
        cout << "\n";
    }
}

void pattern4(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++) {
            cout << i << " ";
        }
        cout << "\n";
    }
}

void pattern5(int n){
    for (int i=1; i<=n; i++){
        for (int j=i; j<=n; j++) {
            cout << "*" << " ";
        }
        cout << "\n";
    }
}

void pattern6(int n){
    for (int i=1; i<=n; i++){
        for (int j=i; j<=n; j++) {
            cout << j << " ";
        }
        cout << "\n";
    }
}

void pattern7(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i; j++){
            cout << " ";
        }
        for (int j=1; j<=2*i-1; j++){
            cout << "*";
        }
        for (int j=2*i; j<=n; j++){
            cout << " ";
        }
        cout << "\n";
    }
}

void pattern8(int N)
{
    // This is the outer loop which will loop for the rows.
    for (int i = 0; i < N; i++)
    {
        // For printing the spaces before stars in each row
        for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
       
        // For printing the stars in each row
        for(int j=0;j< 2*N -(2*i +1);j++){
            
            cout<<"*";
        }
        
        // For printing the spaces after the stars in each row
         for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
        
        // As soon as the stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
    }
}


int main() {
    int n;
    cin >> n;

    pattern8(n);

    return 0;
}