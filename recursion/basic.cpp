#include <bits/stdc++.h>

using namespace std;

/*

1. print name n times using recursion
2. print 1 to n using recursion
3. print n to 1 using recursion
4. print 1 to n using backtracking
5. print n to 1 using backtracking
6. sum of first n numbers (parameterized and functional)
7. factorial

*/

int factorialFunc(int n) {
    if (n==1) {
        return 1;
    }
    return n * factorialFunc(n-1);
}

void factorialParam(int n, int fact) {
    if (n==1) {
        cout << fact << "\n";
        return;
    }
    factorialParam(n-1, fact*n);
}

int sumNFunc(int n) {
    if (n==0) {
        return 0;
    }
    return n + sumNFunc(n-1);
}

void sumNParam(int n, int sum) {
    if (n==0) {
        cout << sum << "\n";
        return;
    }
    sumNParam(n-1, sum+n);
}

void printNto1Backtrack(int cnt, int n) {
    if (cnt > n) {
        return;
    }
    printNto1Backtrack(cnt+1, n);
    cout << cnt << "\n";
}

void print1toNBacktrack(int cnt, int n) {
    if (cnt == 0) {
        return;
    }
    print1toNBacktrack(cnt-1, n);
    cout << cnt << "\n";
}

void printNto1(int n) {
    if (n == 0) {
        return;
    }
    cout << n << "\n";
    printNto1(n-1);
}

void print1toN(int cnt, int n) {
    if (cnt > n) {
        return;
    }
    cout << cnt << "\n";
    print1toN(cnt+1, n);
}

void printName(string name, int cnt, int n) {
    if ( cnt == n ) {
        return;
    }
    cout << name << "\n";
    printName(name, cnt+1, n);
}

int main () {
    // int n;
    // string name;
    // cin >> n;
    // cin >> name;

    // printName(name, 0, n);

    int m;
    cin >> m;
    // print1toN(1,m);
    // printNto1(m);
    // print1toNBacktrack(m, m);
    // printNto1Backtrack(1, m);
    // sumNParam(m, 0);
    // cout << sumNFunc(m) << "\n";
    // factorialParam(m, 1);
    cout << factorialFunc(m);

    return 0;
}