#include <iostream>
using namespace std;

int main()
{
    string history[10];
    int top = -1;

    // Push web pages
    history[++top] = "Google.com";
    history[++top] = "Youtube.com";
    history[++top] = "ABCSC.com";
    history[++top] = "Facebook.com";

    cout << "Browser History:" << endl;

    for(int i = top; i >= 0; i--)
    {
        cout << history[i] << endl;
    }

    // Press Back once
    top--;
    cout << "\nAfter pressing Back once:" << endl;
    cout << "Top page: " << history[top] << endl;

    // Press Back twice
    top--;
    cout << "\nAfter pressing Back twice:" << endl;
    cout << "Top page: " << history[top] << endl;

    return 0;
}