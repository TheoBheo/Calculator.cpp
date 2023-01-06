#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <windows.h>


// -- Normal Calculator -- //
class Calc{
  public:
  void calculator(){
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "Enter #1: ";
    std::cin >> num1;
    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;    
    std::cout << "Enter #2: ";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "result: " << result << '\n';
            break;
        default:
            std::cout << "That wasn't a valid operator\n";
            break;
    }
  }
};

// -- Pythagoras -- //
class Pythagoras{
  public:
  void hypotenuse(){
   double a;
   double b;
   double c;

   std::cout << "Enter side A: ";
   std::cin >> a;
   std::cout << "Enter size B: ";
   std::cin >> b;
   c = sqrt(pow(a, 2) + pow(b, 2));
   std::cout << "side C: " << c;
}
};

// -- Perimeters -- //
class Perimeter{
  public:
  void basic(){
  char figure;

  std::cout << "Whose perimeter you want to calculate? ";
  std::cin >> figure;
  switch(figure){

    case 'Square':
    double num1;
    double result1;    
    std::cout << "Enter #1: ";
    std::cin >> num1;
    result1 = num1 * 4;
    std::cout << "Result: " << result1 << '\n';
    break;

    case 'Triangle':
    double num2;
    double num3;
    double num4;
    double result2;    
    std::cout << "Enter #1: ";
    std::cin >> num2;
    std::cout << "Enter #2: ";
    std::cin >> num3;
    std::cout << "Enter #3: ";
    std::cin >> num4;
    result2 = num2 + num3 + num4;
    std::cout << "Result: " << result2 << '\n';   
    break;

    case 'Circle':
    double num5;
    double PI = 3.14;
    double result3;
    std::cout << "Enter #1: ";
    std::cin >> num5;
    result3 = num5 * 2 * PI;
    std::cout << "Result: " << result3 << '\n';   
    break;    
  }
}
  void regular(){
    char figure;

  std::cout << "Whose area you want to calculate? ";
  std::cin >> figure;
  switch(figure){

    case 'Pentagon':
    double side;
    double result;    
    std::cout << "Enter #1: ";
    std::cin >> side;
    result = side * 5;
    std::cout << "Result: " << result << '\n';
    break;
  }
};

void area(){
    char figure;

  std::cout << "Whose area you want to calculate? ";
  std::cin >> figure;
  switch(figure){

    case 'Square':
    double num1;
    double result1;    
    std::cout << "Enter #1: ";
    std::cin >> num1;
    result1 = num1 * num1;
    std::cout << "Result: " << result1 << '\n';
    break;

    case 'Triangle':
    double num2;
    double num3;
    double num4;
    double result2;    
    std::cout << "Enter #1: ";
    std::cin >> num2;
    std::cout << "Enter #2: ";
    std::cin >> num3;
    result2 = num2 * num3 / 2;
    std::cout << "Result: " << result2 << '\n';   
    break;

    case 'Circle':
    double num5;
    double PI = 3.14;
    double result3;
    std::cout << "Enter #1: ";
    std::cin >> num5;
    result3 = num5 * num5 * PI;
    std::cout << "Result: " << result3 << '\n';   
    break;    
  }    
}

// -- Run C++ File -- //
using namespace std;
void run() {
  fstream myFile;
  myFile.open("screen.txt", ios::in);
  if(myFile.is_open()){
    string line;
    while(getline(myFile, line)){
    cout << line << endl;
    }
  }
  myFile.close();
}

int main(){     
    run();        
    char choice;
    std::cout << "What would you like to calculate? ";
    std::cin >> choice;
    switch(choice){
    case 'Calculator':
    Calc c1;
    c1.calculator(); 
    break;       
    case 'Hypotenuse':
    Pythagoras p1;
    p1.hypotenuse();
    break;
    case 'Perimeter':
    Perimeter p2;
    p2.basic();
    break;
    case 'Area':
    area();
    break;
    }
   return 0;    
}
