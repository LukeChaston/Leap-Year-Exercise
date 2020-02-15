int main() {
  input x;
  std::cout << "What is the year?";
  std::cin >> x;
  
  if (x % 4 == 0) {
       std::cout << "This is a leap year.";
   }
   else if (x % 100 == 0) {
     std::cout << "This is a leap year."
   }
   else if (x % 400 == 0) {
     std::cout << "This is a leap year."
   }
  else {
        std::cout << "This is not a leap year";
 }
  
}

//qJegVa