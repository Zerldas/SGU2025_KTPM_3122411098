#include <iostream>

using namespace std;

/*Dễ thấy rằng đối với logic này ít nhất cần đến 3 test case lần lượt là: > 10, <10 và = 10*/

int f1(int x) {
    if (x > 10)
        return 2 * x; 
    else
        return -x;
}