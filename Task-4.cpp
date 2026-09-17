#include <iostream>
#include <vector>

using namespace std;

void add(vector<string> &tasks, vector<string> &status)
{
    string task;
    cin.ignore();
    cout << "Enter task to add in To-do list - ";
    getline(cin, task);
    tasks.push_back(task);
    status.push_back("Pending");
    cout << endl;
}

void display(vector<string> &tasks, vector<string> &status)
{
    for (int i=0; i<tasks.size(); i++)
    {
        cout << "--------- TASK - " << i+1 << "----------" << endl;
        cout << "TASK : " << tasks[i] << endl;
        cout << "Status - " << status[i] << endl << endl;
    }
}

void changeStatus(vector<string> &tasks, vector<string> &status)
{
    int taskno;
    cout << "Enter the task number to mark as completed : ";
    cin >> taskno;

    if ((taskno - 1) >= 0 && (taskno - 1) <= tasks.size()-1)
    {
        status[(taskno)-1] = "Completed";
    }

    else
    {
        cout << "Invalid task number." << endl;
        return ;
    }

    cout << "Successfully marked task  " << taskno << "as completed." <<  endl;
}

void removeTask(vector<string> &tasks, vector<string> &status)
{
    int taskno;
    cout << "Enter the task number to remove : ";
    cin >> taskno;

    if ((taskno - 1) >= 0 && (taskno - 1) < tasks.size()) {
        tasks.erase(tasks.begin() + (taskno - 1));
        status.erase(status.begin() + (taskno - 1));
    }

    else 
    {
        cout << "Invalid task number." << endl;
        return ;
    }

    cout << "Successfully removed Task " << taskno << endl;
}

int main()
{
    vector<string> tasks;
    vector<string> status;
    int choice;

    cout << "======================== TO-DO LIST MANAGER ======================" << endl;

    do {
        cout << "1. Add Task." << endl;
        cout << "2. Display To-do list." << endl;
        cout << "3. Mark task as completed." << endl;
        cout << "4. Remove a task." << endl;
        cout << "5. Exit" << endl << endl;
        
        cout << "Enter your choice : ";
        cin >> choice;
        cout << endl;

        switch(choice)
        {
            case 1 :
            {
                add(tasks, status);
                break;
            }

            case 2:
            {
                display(tasks, status);
                break;
            }

            case 3:
            {
                changeStatus(tasks, status);
                break;
            }

            case 4:
            {
                removeTask(tasks, status);
                break;
            }

            case 5:
            {
                break;
            }
        }
    }
    while (choice !=5);

    return 0;
}