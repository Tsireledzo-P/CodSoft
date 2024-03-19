#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Task

{

    string type;

    bool completed;

    Task(const string &desc) : type(desc), completed(false) {}
};

void addTask(vector<Task> &tasks, const string &type)

{

    Task newTask(type);

    tasks.push_back(newTask);

    cout << "Task added successfully.\n";
}

void viewTasks(const vector<Task> &tasks)

{

    if (tasks.empty())

    {

        cout << "No tasks available.\n";
    }

    else

    {

        cout << "Task List:\n";

        for (size_t i = 0; i < tasks.size(); ++i)

        {

            cout << i + 1 << ". ";
            cout << tasks[i].type;
            cout << " - " << (tasks[i].completed ? "Completed" : "Pending") << "\n";
        }
    }
}

void markTaskCompleted(vector<Task> &tasks, size_t number)

{

    if (number >= 0 && number < tasks.size())

    {

        tasks[number].completed = true;

        cout << "Task marked as completed.\n";
    }

    else

    {

        cout << "Invalid task number.\n";
    }
}

void removeTask(vector<Task> &tasks, size_t number)

{

    if (number >= 0 && number < tasks.size())

    {

        tasks.erase(tasks.begin() + number);

        cout << "Task removed successfully.\n";
    }

    else

    {

        cout << "Invalid task number.\n";
    }
}

int main()

{

    vector<Task> tasks;

    int choice;

    do

    {

        cout << "\nTo-Do List Manager\n";

        cout << "1. Add Task\n";

        cout << "2. View Tasks\n";

        cout << "3. Mark Task as Completed\n";

        cout << "4. Remove Task\n";

        cout << "5. Exit\n";

        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice)

        {

        case 1:

        {

            string type;

            cout << "Enter your task: ";

            cin.ignore();

            getline(cin, type);

            addTask(tasks, type);

            break;
        }

        case 2:

            viewTasks(tasks);

            break;

        case 3:

        {

            size_t number;

            cout << "Enter the task number to mark as completed: ";

            cin >> number;

            markTaskCompleted(tasks, number - 1);

            break;
        }

        case 4:

        {

            size_t number;

            cout << "Enter the task number to remove: ";

            cin >> number;

            removeTask(tasks, number - 1);

            break;
        }

        case 5:

            cout << "Exiting the program.\n";

            break;

        default:

            cout << "Invalid choice. Please enter a valid option.\n";
        }

    } while (choice != 5);

    return 0;
}
