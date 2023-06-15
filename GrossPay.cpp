#include <iostream>
#include <iomanip>
#include <vector>    // Needed to define vectors
#include <string>

using namespace std;

struct Employee
{
	string name;
	double hours;
	double payRate;	
};

int main()
{
	vector<Employee> employees;	
	vector<double> hours;      // hours is an empty vector
	vector<double> payRate; // payRate is an empty vector
	int numEmployees;       // The number of employees
	int index;              // Loop counter

   // Get the number of employees.
   cout << "How many employees do you have?: ";
   cin >> numEmployees;
   cout << endl;

   // Input the payroll data.
   cout << "Enter the hours worked by " << numEmployees;
   cout << " employees, their hourly rates, and name.\n";
   cout << endl;
   for (index = 0; index < numEmployees; index++)
   {
      double tempHours;    // To hold the number of hours entered
      double tempRate;  // To hold the payrate entered
	  string tempName;

	  cout << "____________________________________" << endl;

	  cout << "Name of employee #" << (index + 1);
	  cout << " : ";
	  cin.ignore();
	  getline(cin, tempName);
	  cout << endl;

      cout << "Hours worked by employee #" << (index + 1);
      cout << " : ";
      cin >> tempHours;
	  cout << endl;
	 // tempEmployees.at(index).hours = tempHours;
      //employees.push_back(tempEmployees);     // Add an element to hours

	  cout << "Hourly pay rate for employee #" << (index + 1);
      cout  << " : ";
      cin >> tempRate;
	  cout << endl;
     // payRate.push_back(tempRate);  // Add an element to payRate

	  Employee tempEmployees = { tempName, tempHours, tempRate };
	  employees.push_back(tempEmployees);
   }

   // Display each employee's gross pay.
   cout << "Here is the gross pay for each employee:\n";
   cout << fixed << showpoint << setprecision(2);

   for (index = 0; index < numEmployees; index++)
   {
      double grossPay = employees[index].hours * employees[index].payRate;
      cout << "Employee #" << (index + 1);
	  cout << " " << employees[index].name;
      cout << " : $" << grossPay << endl;
   }
   return 0;
}
