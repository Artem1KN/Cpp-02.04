#include <iostream>

using namespace std;

void inver(int n) {
    if (n < 1) {
        cout << endl;
        cout <<"***" << endl;

        return;
    }
    else {
        int i;

        cin >> i;

        inver(n-1);
        cout << i << endl;
        cout << "###" << endl;
    }
}

int main() {
    int n;
    cin >> n;
    cout << endl;

    inver(n);
}
