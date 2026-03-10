#include <iostream>
using namespace std;

// Rectangle area program
int length, width;



// Function to get user input
void input()
{
    cout << "Enter Length : ";
    cin >> length;

    cout << "Enter Width : ";
    cin >> width;
}

int rectangleArea(int a, int b)
{
    return a * b;
}

int rectanglePerimeter(int a, int b)
{
    return 2 * (a + b);
}

void output()
{
    cout << "Area : " << rectangleArea(length, width) << endl;
}

int main()
{
    input();
    output();
    cout << "Perimeter : " << rectanglePerimeter(length, width);

}

