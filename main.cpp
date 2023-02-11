#include <iostream>
#include <string>

const int NUMBER_OF_EMPLOYEES = 2;

class Book {
  private:
    std::string title;
    std::string author;
    std::string publisher;
    double cost;
    int year;

  public:
    /* Setter Methods*/
    void setTitle(std::string t){
      title = t;
    }

    void setAuthor(std::string a){
      author = a;
    }

    void setCost(double c){
      cost = c;
    }

    void setYear(int y){
      year = y;
    }

    void setPublisher(std::string p){
      publisher = p;
    }

    /* Getter Methods */
    std::string getTitle(){
      return title;  
    }

    std::string getAuthor(){
      return author;
    }

    double getCost(){
      return cost;
    }

    int getYear(){
      return year;
    }

    std::string getPublisher(){
      return publisher;
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
    return timeEmployedAtCompany; // String value in years and months
  }

  int getSalary(){
    return salary; // Value in dollars
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
  // Function: getWalletAmount()
  // Params: None
  // Outputs: 
  // 1. walletAmount - Represents amount of money in customer's wallet. A private variable in the Customer class.
  int getWalletAmount(){
    return walletAmount;
  }

  // Function: getName()
  // Params: None
  // Outputs: 
  // 1. name - Represents the amount of money in the customer's wallet. A private variable in the Customer class.
  std::string getName(){
    return name;
  }

  // Function: makePurchase()
  // Params: None
  // Outputs: 
  // 1. purchaseAmount - Represents the amount the customer's item costs. 
  void makePurchase(int purchaseAmount){
    walletAmount -= purchaseAmount;
  }
};

// Function: 
// Params: 
Employee *filterCashiersFromEmployeeList(Employee EmployeeArray[]){
  int sizeEmployeeArray = NUMBER_OF_EMPLOYEES;
  int count = 0;

  for (int i=0; i<sizeEmployeeArray; i++){
    if (EmployeeArray[i].getJobTitle() == "Cashier"){
      count++;
    }
  }

  Employee * CashiersArray = new Employee[count]; 
  int index = 0;

  for (int i=0; i<sizeEmployeeArray; i++){
    if (EmployeeArray[i].getJobTitle() == "Cashier"){
      CashiersArray[index] = EmployeeArray[i];
      index+=1;
    }
  }

  return CashiersArray;
}


void completeTransaction(Employee employee, Book book, Customer customer){
  /* Print Transaction Details */
  std::cout << customer.getName() <<" would like to purchase " << book.getTitle() << " written by " << book.getAuthor() << std::endl;
  std::cout << "This customer has $" << customer.getWalletAmount() << " dollars in his wallet."<< std::endl;
  std::cout << "This would be a purchase of $" << book.getCost() << std::endl;
  std::cout << employee.getName() << " (Cashier) helps at the register to ring up the purchase." << std::endl;
  customer.makePurchase(book.getCost());
  std::cout << "This customer has $" << customer.getWalletAmount() << " dollars left in their wallet."<< std::endl; // This vaue should be previous walletAmount subtract book amount
  std::cout << std::endl;
}

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

  Employee EmployeeArray[NUMBER_OF_EMPLOYEES];

  EmployeeArray[0] = newEmployee1;
  EmployeeArray[1] = newEmployee2;
  //EmployeeArray[2] = newEmployee3;

  /* Print Employee Names*/
  for (int i=0; i<NUMBER_OF_EMPLOYEES;i++){
    std::cout << "Employee name is " << EmployeeArray[i].getName() << std::endl;
  }

  /* Print Employee Titles */
  for (int i=0; i<NUMBER_OF_EMPLOYEES;i++){
    std::cout << "Employee works as a " << EmployeeArray[i].getJobTitle() << std::endl;
  }

  /* Print Employee Salaries*/
  for (int i=0; i<NUMBER_OF_EMPLOYEES;i++){
    std::cout << EmployeeArray[i].getName() << "'s salary is: " << EmployeeArray[i].getSalary() << std::endl;
  }

  std::cout << std::endl;

  /* Add New Customer to the Database*/
  Customer newCustomer;
  newCustomer.setName("Gloria Bakerson");
  newCustomer.setWalletAmount(237);

  Customer newCustomer2;
  newCustomer2.setName("Frederick Gilligan");
  newCustomer2.setWalletAmount(100);

  Customer newCustomer3;
  newCustomer3.setName("Samantha Gilligan");
  newCustomer3.setWalletAmount(150);

  /* TRANSACTION 1 */
  /* Customer wants to Make a Purchase*/
  int purchaseAmount = 15;
  std::string purchaseBookTitle = "The Grapes of Wrath";
  std::string purchaseBookAuthor = "John Steinbeck";

  /* Define Book */
  Book book1;
  book1.setTitle(purchaseBookTitle);
  book1.setAuthor(purchaseBookAuthor);
  book1.setCost(purchaseAmount);

  completeTransaction(EmployeeArray[1],book1,newCustomer);

  // Transaction should be a function - Summer 2022

  /* TRANSACTION 2 */
  /* Customer wants to Make a Purchase*/
  purchaseAmount = 22;
  purchaseBookTitle = "The Great Gatsby";
  purchaseBookAuthor = "F Scott Fitzgerald";

  /* Define Book */
  Book book2;
  book2.setTitle(purchaseBookTitle);
  book2.setAuthor(purchaseBookAuthor);
  book2.setCost(purchaseAmount);

  /* Call completeTransaction() function */
  completeTransaction(EmployeeArray[1],book2,newCustomer2);

  /* Filter Cashiers from Array */
  Employee * CashiersArray;
  CashiersArray = filterCashiersFromEmployeeList(EmployeeArray);

  delete[] CashiersArray;

  // GUI or Menu function 1:
  // Printing the User Receipts
  /*
  cout << "Would you like to print receipts? (y/n)"<< endl;

  bool didUserAnswer = false;
  while (!didUserAnswer){
    cin >> printReceiptsDecision;
    didUserAnswer = true;
  }

  if (printReceiptsDecision == 'y'){

  }*/

  return 0;
}