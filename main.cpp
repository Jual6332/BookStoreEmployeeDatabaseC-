#include <iostream>
#include <string>

class Book {
  private:
    std::string title;
    std::string author;
    int year;
    std::string publisher;

  public:
    void setTitle(std::string t){
      title = t;
    }

    void setAuthor(std::string a){
      author = a;
    }

    std::string getTitle(){
      return title;  
    }

    std::string getAuthor(){
      return author;
    }
};


// Possible modification, print method so not relying on accessing the data. PrintName so data does not have to be disclosed. Idk.

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

// Function: 
// Params: 
/*
Employee * filterCashiersFromEmployeeList(Employee *EmployeeArray){
  //int sizeEmployeeArray = sizeof(EmployeeArray)/sizeof(EmployeeArray[0]); // The size of the array, the number of employees
  int count = 0;

  for (int i=0; i<2; i++){
    if (EmployeeArray[i].getJobTitle() == "Cashier"){
      count++;
    }
  }

  static Employee cashiersArray[count]; //
  int index = 0;

  for (int i=0; i<2; i++){
    if (EmployeeArray[i].getJobTitle() == "Cashier"){
      cashiersArray[index] = EmployeeArray[i];
    }
  }

  return cashiersArray;
}
*/

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

  /* Print Employee Titles */
  std::cout << "Employee1 works as a " << EmployeeArray[0].getJobTitle() << std::endl; 
  std::cout << "Employee2 works as a " << EmployeeArray[1].getJobTitle() << std::endl;

  /* Print Employee Salaries*/
  std::cout << "Employee1, " << EmployeeArray[0].getName() << "'s salary is: " << EmployeeArray[0].getSalary() << std::endl;
  std::cout << "Employee2, " << EmployeeArray[1].getName() << "'s salary is: " << EmployeeArray[1].getSalary() << std::endl;

  std::cout << std::endl;

  /* Filter Cashiers from Array */


  /* Add New Customer to the Database*/
  Customer newCustomer;
  newCustomer.setName("Gloria Bakerson");
  newCustomer.setWalletAmount(237);

  /* Customer wants to Make a Purchase*/
  int purchaseAmount = 15;
  std::string purchaseBookTitle = "The Grapes of Wrath";
  std::string purchaseBookAuthor = "John Steinbeck";

  std::cout << "This customer would like to purchase " << purchaseBookTitle << " written by " << purchaseBookAuthor << std::endl;
  std::cout << "This customer has $" << newCustomer.getWalletAmoount() << " dollars in his wallet."<< std::endl;
  std::cout << "This would be a purchase of $" << purchaseAmount << std::endl;
  std::cout << EmployeeArray[1].getName() << " helps at the register to ring up the purchase." << std::endl;

  return 0;
}