#include<iostream>
using namespace std;
class employee
{
    public:
        int emp_id;
        string name;
        float salary,bonus;

         employee() 
         {
        emp_id = 0;
        name = "";
        salary = 0;
        bonus = 0;
    }
        void getdata()
        {
            cout<<"Enter employee ID: ";
            cin>>emp_id;
            cout<<"Enter employee name: ";
            cin>>name;
            cout<<"Enter employee salary: ";
            cin>>salary;
            cout<<"Enter employee bonus: ";
            cin>>bonus;
        }
        void display()
        {
            cout<<"Employee ID: "<<emp_id<<endl;
            cout<<"Employee Name: "<<name<<endl;
            cout<<"Employee Salary: "<<salary<<endl;
            cout<<"Employee Bonus: "<<bonus<<endl;
        }

    employee( int id, string n, float s)
    {
        emp_id = id;
        name = n;
        salary = s;
    }   
    
void displaybonus()

    {
        float total_salary= salary + bonus;
        cout<<"Employee salary: "<<total_salary<<endl;
    }
};
 
int main()
{
    employee E;
    E.getdata();
    E.display();
    E.displaybonus();
    return 0;
}