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

