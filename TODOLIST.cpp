#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool completed;
};

class ToDoList {
private:
    vector<Task> tasks;

public:
   int addTask(const string& description) {
        Task newTask = {description, false};
        tasks.push_back(newTask);
        cout << "Task added successfully." << endl;
        cout<<"Well Done";
        return 0;
    }

    int viewTasks() {
        if (tasks.empty()) {
            cout << "No tasks in the list." << endl;
        } else {
            cout << "Tasks:" << endl;
            for (size_t i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". ";
                if (tasks[i].completed) {
                    cout << "[X] ";
                } else {
                    cout << "[ ] ";
                }
                cout << tasks[i].description << endl;
            }
        }
        return 0;
    }

    int deleteTask(size_t index) {
        if (index >= 1 && index <= tasks.size()) {
            tasks.erase(tasks.begin() + index - 1);
            cout << "Task deleted successfully." << endl;
        } else {
            cout << "Invalid task index." << endl;
        }
        return 0;
    }
};

int main() {
    ToDoList toDoList;
    char choice;

    do {
        cout << "===== To-Do List Manager =====" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Delete Task" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                string description;
                cout << "Enter task description: ";
                cin.ignore();
                getline(cin, description);
                toDoList.addTask(description);
                break;
            }
            case '2':
                toDoList.viewTasks();
                break;
            case '3': {
                size_t index;
                cout << "Enter task index to delete: ";
                cin >> index;
                toDoList.deleteTask(index);
                break;
            }
            case '4':
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != '4');

    return 0;
}
