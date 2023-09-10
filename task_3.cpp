#include <iostream>
#include <vector>
#include<string>
using namespace std;

class task
{
public:
    string name;
    bool status;

public:
    task() {}
    task(string t)
    {
        name = t;
        status = false;
    }
};
class list
{
    vector<task> tasks;

public:
    list() {}
    void add(string tt)
    {
        task t(tt);
        tasks.push_back(t);
    }
    void display()
    {
        for (int i = 0; i < tasks.size(); i++)
        {
            cout << i + 1 << "." << tasks[i].name << "    Status:";
            if (tasks[i].status == false)
                cout << "pending\n";
            else
                cout << "completed\n";
        }
    }
    void mark_as_done()
    {
        list::display();
        cout << "Enter the serial number of the task to mark it as completed:";
        int number;
        cin >> number;
        if (number >= 1 && number <= tasks.size())
        {
            tasks[number - 1].status = true;
        }
        else
        {
            cout << "Invalid task number. Please enter a valid task number.\n";
        }
    }
    void remove_task()
    {
        list::display();
        cout << "Enter the serial number of the task to delete:";
        int number;
        cin >> number;
        if (number >= 1 && number <= tasks.size())
        {
            tasks.erase(tasks.begin() + (number - 1));
        }
        else
        {
            cout << "Invalid task number. Please enter a valid task number.\n";
        }
    }
};
int main()
{
    list l1;
    cout << "\n       To-do List      \n";
    for (;;)
    {
        cout << "\n\nSelect from the following\n";
        cout << "1.Add Task\n2.View Task\n3.Mark As Completed\n4.Remove Task\n5.Exit\n";
        cout << "Your choice:";
        int choice;
        //fflush(stdin);
        cin >> choice;
        cout<<endl;
        if (choice == 1)
        {
            string t;
            cout << "Enter task to add:";
            fflush(stdin);
            getline(cin,t);
            l1.add(t);
        }
        else if (choice == 2)
        {
            l1.display();
        }
        else if (choice == 3)
        {
            l1.mark_as_done();
        }
        else if (choice == 4)
        {
            l1.remove_task();
        }
        else if (choice == 5)
        {
            exit(0);
        }
        else
        {
            cout << "Invalid Choice\n";
        }
    }
}
