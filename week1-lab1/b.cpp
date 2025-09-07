#include<iostream>

using namespace std;

/* Ta thấy rằng với điều kiện này nên có các case test như sau: 
    x > 10;
    x < 0;
    0 < x < 10;
    x = 10
*/

int f1(int x) {
    if (x > 10)
        return 2 * x;
    else if (x > 0)
        return -x;
    else
        return 2 * x;
}

int main() {
    int x;
    cin >> x;
    cout << f1(x) << endl;
    return 0;
}