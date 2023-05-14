#include <iostream>

using namespace std;

int main() {
    int x = 2, d, c = 0;

    while (x <= 1000) {
        if (x%10==3) {
            int p = 1;
            for (int i; d <= x/2; i++) {
                if (x%p == 0) {
                    p = 0;
                    break;
                }
            }
            if (p == 1) {
                c++;
            }
        }
        x++;
    }

    return 0;
}