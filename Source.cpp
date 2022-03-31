#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (b == (c + a)) {
        cout << "yes" << endl;
      
    }
    else if (c == (b + a)) {
        cout << "yes" << endl;
     
    }
    else if (a == (c + b)) {
        cout << "yes" << endl;
      
    }

    else {
        cout << "no" << endl;
    }

    return 0;
}