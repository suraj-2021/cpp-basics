#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Task {
    string description;
    bool completed;
public:
    Task(const string& desc) : description(desc), completed(false) {}

    void markCompleted() { completed = true; }
    bool isCompleted() const { return completed; }
    string getDescription() const { return description; }
};

class TaskManager {
    vector<Task> tasks;
public:
    void addTask(const string& desc) {
        tasks.emplace_back(desc);
        cout << "Task added!\n";
    }

    void removeTask(int index) {
        if (index < 0 || index >= tasks.size()) {
            cout << "Invalid task number.\n";
            return;
        }
        tasks.erase(tasks.begin() + index);
        cout << "Task removed!\n";
    }

    void completeTask(int index) {
        if (index < 0 || index >= tasks.size()) {
            cout << "Invalid task number.\n";
            return;
        }
        tasks[index].markCompleted();
        cout << "Task marked as completed!\n";
    }

    void showTasks() const {
        if (tasks.empty()) {
            cout << "No tasks available.\n";
            return;
        }
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i << ". [" << (tasks[i].isCompleted() ? "X" : " ") << "] "
                 << tasks[i].getDescription() << '\n';
        }
    }
};

int main() {
    TaskManager manager;
    int choice;

    while (true) {
        cout << "\n--- Task Manager ---\n";
        cout << "1. Add Task\n";
        cout << "2. Remove Task\n";
        cout << "3. Complete Task\n";
        cout << "4. Show Tasks\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore(); // Clear newline

        if (choice == 1) {
            cout << "Enter task description: ";
            string desc;
            getline(cin, desc);
            manager.addTask(desc);
        } else if (choice == 2) {
            cout << "Enter task number to remove: ";
            int idx;
            cin >> idx;
            manager.removeTask(idx);
        } else if (choice == 3) {
            cout << "Enter task number to complete: ";
            int idx;
            cin >> idx;
            manager.completeTask(idx);
        } else if (choice == 4) {
            manager.showTasks();
        } else if (choice == 5) {
            cout << "Goodbye!\n";
            break;
        } else {
            cout << "Invalid choice. Try again.\n";
        }
    }
    return 0;
}
