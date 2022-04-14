#include <iostream>
#include <string>

class Employee {
  private:
    std::string name;
    std::string jobTitle;
    int salary;

  public:

   /* Setter Methods */
  void setName(std::string nm){
    name = nm;
  }

  void setJobTitle(std::string role){
    jobTitle = role;
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

  int getSalary(){
    return salary;
  }

};

class Customer {
  private:
    std::string name;
    int walletAmount;

  public:
  void setWalletAmount(int cash){
    walletAmount = cash;
  }

  int getWalletAmoount(){
    return walletAmount;
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
  newEmployee1.setSalary(40000);

  Employee newEmployee2;
  newEmployee2.setName("Melissa Robinson");
  newEmployee2.setJobTitle("Cashier");
  newEmployee2.setSalary(27000);

  Employee EmployeeArray[2];

  EmployeeArray[0] = newEmployee1;
  EmployeeArray[1] = newEmployee2;

  std::cout << "Employee1 name is " << EmployeeArray[0].getName() << std::endl;
  std::cout << "Employee1 name is " << EmployeeArray[1].getName() << std::endl;

  std::cout << "New employee salary is: "<< newEmployee1.getSalary() << std::endl;

  Customer newCustomer;
  newCustomer.setWalletAmount(237);
  newCustomer.makeTransaction(15);

  return 0;
}