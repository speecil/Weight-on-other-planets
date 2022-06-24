#include <iostream>
#include <conio.h>

int main() {
 
  double weight;
  int x;
 
  std::cout << "Please enter your current weight on earth in kilograms: ";
  std::cin >> weight;
 
  std::cout << "\nSelect the planet you would like to see your weight in:\n\n";
  std::cout << "   1. Venus   2. Mars    3. Jupiter\n";
  std::cout << "   4. Saturn  5. Uranus  6. Neptune\n\n";
  std::cin >> x;
 
  if (x == 1) {
 
    weight = weight * 0.78;
    std::cout << "\nYour weight on Venus is: " << weight << "\n";
    system("pause");
    
 
  } else if (x == 2) {
 
    weight = weight * 0.39;
    std::cout << "\nYour weight on Mars is: " << weight << "\n";
    system("pause");
 
  } else if (x == 3) {
 
    weight = weight * 2.65;
    std::cout << "\nYour weight on Jupiter is: " << weight << "\n";
    system("pause");
 
  } else if (x == 4) {
 
    weight = weight * 1.17;
    std::cout << "\nYour weight on Saturn is: " << weight << "\n";
    system("pause");
 
  } else if (x == 5) {
 
    weight = weight * 1.05;
    std::cout << "\nYour weight on Uranus is: " << weight << "\n";
    system("pause");
 
  } else if (x == 6) {
 
    weight = weight * 1.23;
    std::cout << "\nYour weight on Neptune is: " << weight << "\n";
    system("pause");
 
  }
 
 
}