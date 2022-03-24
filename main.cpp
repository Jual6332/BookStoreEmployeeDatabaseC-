#include <iostream>
#include <string>

class Employee {
  private:
    std::string name;
    std::string jobTitle;
    int salary;

  public:

  void setSalary(int dollarAmount){
    salary = dollarAmount;
  }

  void setJobTitle(std::string role){
    jobTitle = role;
  }

  int getSalary(){
    return salary;
  }

  std::string getJobTitle(){
    return jobTitle;
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
  Employee newEmployee;
  newEmployee.setJobTitle("Supervisor II");
  newEmployee.setSalary(40000);

  Customer newCustomer;
  newCustomer.setWalletAmount(237);
  newCustomer.makeTransaction(115);
  
  std::cout << "New employee salary is: "<< newEmployee.getSalary() << std::endl;
  //std::cout << "Hello World!\n";
}