#include<iostream>
using namespace std;

class coffee {
    private:
        int x, y;
    public:
        coffee(int a, int b) {
            x = a;
            y = b;
        }
        void show() {
            cout << "x = " << x << endl;
            cout << "y = " << y << endl;
        }
};

int main() {
    coffee c1(10, 20); // Create an object with x = 10, y = 20
    c1.show();         // Call the show method
    return 0;
} 