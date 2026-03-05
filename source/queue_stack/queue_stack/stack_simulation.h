#pragma once
#include<iostream>
#include<stack>

using namespace std;

void stack_simulation()
{
    stack<int> s;
    int choice, value;

    while (true)
    {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Top element\n";
        cout << "4. Display Stack\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            s.push(value);
            cout << value << " pushed into stack.\n";
            break;

        case 2:
            if (s.empty())
            {
                cout << "Stack is empty!\n";
            }
            else
            {
                cout << "Removed element: " << s.top() << endl;
                s.pop();
            }
            break;

        case 3:
            if (s.empty())
            {
                cout << "Stack is empty!\n";
            }
            else
            {
                cout << "Top element is: " << s.top() << endl;
            }
            break;

        case 4:
        {
            if (s.empty())
            {
                cout << "Stack is empty!\n";
            }
            else
            {
                stack<int> temp = s;
                cout << "Stack elements (top to bottom): ";
                while (!temp.empty())
                {
                    cout << temp.top() << " ";
                    temp.pop();
                }
                cout << endl;
            }
            break;
        }

        case 5:
            cout << "Exiting program.\n";
            return;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    }
}