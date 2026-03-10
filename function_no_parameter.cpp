#include <iostream>
using namespace std;

int length, width;

void input()
{
    cout << "Enter Length : ";
    cin >> length;

    cout << "Enter Width : ";
    cin >> width;
}

int rectangleArea()
{
    return length * width;
}

void output()
{
    cout << "Result : " << rectangleArea();
}

int main()
{
    input();
    output();
}