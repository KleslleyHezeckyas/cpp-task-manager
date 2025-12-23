#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string title;
    bool completed;
};

void showMenu() {
    cout << "\n1 - Add task\n";
    cout << "2 - List tasks\n";
    cout << "3 - Complete task\n";
    cout << "0 - Exit\n";
    cout << "Choose an option: ";
}

int main() {
    vector<Task> tasks;
    int option;

    do {
        showMenu();
        cin >> option;
        cin.ignore();

        if (option == 1) {
            Task task;
            cout << "Task title: ";
            getline(cin, task.title);
            task.completed = false;
            tasks.push_back(task);
            cout << "Task added successfully\n";
        }

        else if (option == 2) {
            if (tasks.empty()) {
                cout << "No tasks found\n";
            } else {
                for (size_t i = 0; i < tasks.size(); i++) {
                    cout << i + 1 << " - " << tasks[i].title;
                    cout << (tasks[i].completed ? " [Done]\n" : " [Pending]\n");
                }
            }
        }

        else if (option == 3) {
            int index;
            cout << "Task number: ";
            cin >> index;

            if (index > 0 && index <= tasks.size()) {
                tasks[index - 1].completed = true;
                cout << "Task completed\n";
            } else {
                cout << "Invalid task\n";
            }
        }

    } while (option != 0);

    cout << "Program finished\n";
    return 0;
}
