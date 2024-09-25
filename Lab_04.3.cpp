#include <iostream>
#include <iomanip> // ��� ������������ ������
using namespace std;

int main() {
    double a, b, c, xp, xk, dx;

    // �������� �������
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(10) << "F(x)" << " |" << endl;
    cout << "---------------------------" << endl;

    double x = xp;
    while (x <= xk) {
        double F;  // ��������� ���������� ������� F

        // ����� ��� ���������� F
        if (x < 0 && b != 0) {
            F = (-a) * pow(x, 2) + b;
        }
        else if (x > 0 && b == 0) {
            F = F = x / (x - c) + 5.5;
        }
        else {
            F = x / (-c);
        }

        // ��������� ���������� � ������� � �������������
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << F
            << " |" << endl;

        x += dx;
    }

    cout << "---------------------------" << endl;

    return 0;
}
