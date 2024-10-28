#define _USING_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
// задание 1А
float far(float c) {
    return (9.0 / 5.0) * c + 32;
}
// задание 1Б
float kel(float c) {
    return c + 273;
}
// задание 1В
float both(float& c) {
    float c1 = c;
    c = far(c);
    return kel(c1);
}
// задание 2
void f(short *a, short *b, short *c) {
    float d = pow(*b, 2) - 4 * (*a) * (*c);
    if (d > 0) {
        float x1 = (-(*b) + sqrt(d)) / (2 * (*a));
        float x2 = (-(*b) - sqrt(d)) / (2 * (*a));
        cout << x1 << ", " << x2;
    }
    else if (d == 0) {
        float x1 = (-(*b) + sqrt(d)) / (2 * (*a));
        cout << x1;
    }
    else
        cout << "У уравнения нет действиетльных корней";
}
// задание 3
bool f2(float x, float &result) {
    if (x == 1 || x == 0)
        return false;
    else if (x <= 2) {
        result += (2 * x + (1 / (1 - x))) / (3 * x);
        return true;
    }
    else if (x > 2 && x <= 5) {
        result += 72.0 / 7.0;
        return true;
    }
    else if (x>5){
        result += -3 - x;
        return true;
    }
}
// задание 4
float average(float a, float b) {
    return (a + b) / 2.0;
}
float average(float a, float b, float c) {
    return (a + b + c) / 3.0;
}
float average(float a, float b, float c, float d) {
    return (a + b + c + d) / 4.0;
}
// задание 5
float triangle(int a, int h) {
    return 0.5 * a * h;
}
float triangle(int a, int b, int angle) {
    return 0.5 * a * b * sin(angle);
}
float triangle(float a, float b, double c) {
    float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
// задание 6
void luck(int x) {
    short sum1 = 0, sum2 = 0;
    for (int i = 0; i < 3; i++) {
        sum1 += x % 10;
        x /= 10;
    }
    for (int i = 0; i < 3; i++) {
        sum2 += x % 10;
        x /= 10;
    }
    if (sum1 == sum2)
        cout << "Число счастливое";
    else
        cout << "Число несчастливое";
}
void luck(int a, int b, int c, int d, int e, int f) {
    if (a + b + c == d + e + f)
        cout << "Число счастливое";
    else
        cout << "Число не счастливое";
}
void luck(int a, int b) {
    short numb1 = 0, numb2=0;
    for (int i = 0; i < 3; i++) {
        numb1 += a % 10;
        a /= 10;
    }
    for (int i = 0; i < 3; i++) {
        numb2 += b % 10;
        b /= 10;
    }
    if (numb1 == numb2)
        cout << "Число счастливое";
    else
        cout << "Число несчастливое";
}
int main()
{
    setlocale(LC_ALL, "RU");

    //задание 1
    float c; cin >> c;
    cout << "Фаренгейты: " << far(c) << endl;
    cout << "Кельвины: " << kel(c) << endl;
    cout << "Кельвины и фаренгейты: " << both(c) << ", " << c;

    // задание 2
    /*cout << "Введиет коэффициенты уранения: ";
    short a, b, c; cin >> a >> b >> c;
    cout << "Корни уравнения: "; f(&a, &b, &c);*/

    // задание 3
    /*float result = 0, a, b; cin >> a >> b;
    cout << f2(2, result) - f2(0, result) * f2(a, result) << "  " << result;*/

    // задание 4
    /*cout << average(2, 3) << endl;
    cout << average(2, 3, 4) << endl;
    cout << average(2, 3, 4, 5);*/

    // задание 5
    /*cout << triangle(3, 4) << endl;
    cout << triangle(4, 4, 45) << endl;
    cout << triangle(4.0, 4.0, 4.0);*/

    // задание 6
    /*luck(137452);
    luck(1, 3, 7, 4, 5, 2);
    luck(137, 452);*/

    return 0;
}

