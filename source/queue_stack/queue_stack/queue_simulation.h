#pragma once
#include <iostream>
#include <queue>
using namespace std;

void queue_simulation()
{
    queue<int> q;
    int choice, value;

    while (true)
    {
        cout << "\n--- Queue Menu ---\n";
        cout << "1. Push (Enqueue)\n";
        cout << "2. Pop (Dequeue)\n";
        cout << "3. Top (Front element)\n";
        cout << "4. Display Queue\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            q.push(value);
            cout << value << " inserted into queue.\n";
            break;

        case 2:
            if (q.empty())
            {
                cout << "Queue is empty!\n";
            }
            else
            {
                cout << "Removed element: " << q.front() << endl;
                q.pop();
            }
            break;

        case 3:
            if (q.empty())
            {
                cout << "Queue is empty!\n";
            }
            else
            {
                cout << "Front element is: " << q.front() << endl;
            }
            break;

        case 4:
        {
            if (q.empty())
            {
                cout << "Queue is empty!\n";
            }
            else
            {
                queue<int> temp = q;
                cout << "Queue elements: ";
                while (!temp.empty())
                {
                    cout << temp.front() << " ";
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
            cout << "Invalid choice. Try again.\n";
        }
    }
}