#include <iostream>
#include <string>

class Employee {
  private:
    std::string name;
    std::string jobTitle;
    std::string timeEmployedAtCompany;
    int salary;

  public:

   /* Setter Methods */
  void setName(std::string nm){
    name = nm;
  }

  void setJobTitle(std::string role){
    jobTitle = role;
  }

  void setTimeEmployedAtCompany(std::string time){
    timeEmployedAtCompany = time; // Value in years
  }

  void setSalary(int dollarAmount){
    salary = dollarAmount;
  }

  /* Getter Methods */
  std::string getName(){
    return name;
  }

  std::string getJobTitle(){
    return jobTitle;
  }

  std::string getTimeEmployedAtCompany(){
    return timeEmployedAtCompany; // Value in years
  }

  int getSalary(){
    return salary;
  }

};

class Customer {
  private:
    std::string name;
    int walletAmount;

  public:
  void setName(std::string nm){
    name = nm;
  }

  void setWalletAmount(int cash){
    walletAmount = cash;
  }

  /* Getter Methods */
  int getWalletAmoount(){
    return walletAmount;
  }

  std::string getName(){
    return name;
  }

  void makeTransaction(int purchaseAmount){
    std::cout << "This customer has $" << walletAmount<< " dollars in his wallet."<<std::endl;
    std::cout << "They want to make a purchase of $" << purchaseAmount << std::endl;
    //if ( walletAmount){
      
    //}
  }
};

int main() {
  Employee newEmployee1;
  newEmployee1.setName("Richard Sventhal");
  newEmployee1.setJobTitle("Supervisor II");
  newEmployee1.setTimeEmployedAtCompany("4 years 1 month");
  newEmployee1.setSalary(40000);

  Employee newEmployee2;
  newEmployee2.setName("Melissa Robinson");
  newEmployee2.setJobTitle("Cashier");
  newEmployee2.setTimeEmployedAtCompany("2 years 4 months");
  newEmployee2.setSalary(27000);

  Employee EmployeeArray[2];

  EmployeeArray[0] = newEmployee1;
  EmployeeArray[1] = newEmployee2;

  /* Print Employee Names*/
  std::cout << "Employee1 name is " << EmployeeArray[0].getName() << std::endl;
  std::cout << "Employee2 name is " << EmployeeArray[1].getName() << std::endl;

  /* Print Employee Salaries*/
  std::cout << "New employee," << EmployeeArray[0].getName() << "'s, salary is: " << EmployeeArray[0].getSalary() << std::endl;
  std::cout << "New employee," << EmployeeArray[1].getName() << "'s, salary is: " << EmployeeArray[1].getSalary() << std::endl;

  /* Add New Customer to the Database*/
  Customer newCustomer;
  newCustomer.setName("Gloria Bakerson");
  newCustomer.setWalletAmount(237);
  newCustomer.makeTransaction(15);

  return 0;
}