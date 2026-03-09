// Задача 18: Решение квадратного уравнения
#include <iostream>
#include <cmath>
using namespace std;

double square(double x) {
    return x * x;
}

double discriminant(double a, double b, double c) {
    return square(b) - 4 * a * c;
}

int main() {
    double a, b, c;

    cout << "Квадратное уравнение: ax² + bx + c = 0\n";
    cout << "Введите коэффициент a: ";
    cin >> a;
    cout << "Введите коэффициент b: ";
    cin >> b;
    cout << "Введите коэффициент c: ";
    cin >> c;

    if (a == 0) {
        cout << "Это не квадратное уравнение (a = 0)\n";
        return 0;
    }

    double D = discriminant(a, b, c);

    cout << "\nУравнение: " << a << "x² + " << b << "x + " << c << " = 0\n";
    cout << "Дискриминант: " << D << "\n\n";

    if (D > 0) {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        cout << "Два корня:\n";
        cout << "x₁ = " << x1 << "\n";
        cout << "x₂ = " << x2 << "\n";
    } else if (D == 0) {
        double x = -b / (2 * a);
        cout << "Один корень:\n";
        cout << "x = " << x << "\n";
    } else {
        cout << "Нет действительных корней (D < 0)\n";
    }

    return 0;
}
