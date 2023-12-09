#include <iostream>
#include <chrono>
 
using namespace std;
using namespace chrono;
 
// Function to calculate factorial recursively
unsigned long long factorialRecursive(int n) {
   if (n < 0) {
       return 0; // Factorial is not defined for negative numbers
   }
 
   if (n == 0 || n == 1) {
       return 1; // Base case: 0! and 1! are both 1
   }
 
   return n * factorialRecursive(n - 1);
}
 
int main() {
   // Get user input for the value of n
   int n;
   cout << "Enter a non-negative integer n: ";
   cin >> n;
 
   // Measure execution time
   auto start = high_resolution_clock::now(); // Start the clock
 
   // Calculate factorial
   unsigned long long result = factorialRecursive(n);
 
   auto stop = high_resolution_clock::now(); // Stop the clock
   auto duration = duration_cast<microseconds>(stop - start);
 
   // Display the result and execution time
   cout << "Factorial of " << n << " is: " << result << endl;
   cout << "Execution time: " << duration.count() << " microseconds" << endl;
 
   return 0;
}