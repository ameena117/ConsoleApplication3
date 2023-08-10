#include <iostream>
using namespace std;
class req {
private:
    int base;
    int hight;

public:
    void set_base(int b) {  base = b; }
    void set_hight(int h) {  hight = h; }
    int get_b() { return base; }
    int get_h() { return hight; }
    double get_area() {
        return 0.5 * base * hight;
    }

};

int main()
{
    req r1;
    r1.set_base(2);
    r1.set_hight(2);
    cout << r1.get_area();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
