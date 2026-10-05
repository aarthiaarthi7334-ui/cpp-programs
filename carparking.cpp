#include <iostream>
using namespace std;

int stack[10];
int top = -1;

void enterCar(int car)
{
    if (top == 9)
    {
        cout << "Parking is full\n";
    }
    else
    {
        stack[++top] = car;
        cout << "Car " << car << " entered\n";
    }
}

void leaveCar()
{
    if (top == -1)
    {
        cout << "Parking is empty\n";
    }
    else
    {
        cout << "Car " << stack[top--] << " left\n";
    }
}

void display()
{
    if (top == -1)
    {
        cout << "Parking is empty\n";
    }
    else
    {
        cout << "Cars in parking: ";
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    enterCar(101);
    enterCar(102);
    enterCar(103);

    display();

    leaveCar();

    display();

    return 0;
}