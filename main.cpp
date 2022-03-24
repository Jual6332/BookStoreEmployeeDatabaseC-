#include <iostream>
#include <string>

class Employee {
  private:
    std::string name;
    int salary;

  public:

  void setSalary(int dollarAmount){
    salary = dollarAmount;
  }

  int getSalary(){
    return salary;
  }

};

int main() {
  Employee newEmployee;
  newEmployee.setSalary(40000);
  std::cout << "New employee salary is: "<< newEmployee.getSalary() << std::endl;
  std::cout << "Hello World!\n";
}