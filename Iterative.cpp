#include <iostream>
#include <chrono>
 
using namespace std;
using namespace chrono;
 
// Function to calculate factorial iteratively
unsigned long long factorialIterative(int n) {
   if (n < 0) {
       return 0; // Factorial is not defined for negative numbers
   }
 
   unsigned long long result = 1;
   for (int i = 2; i <= n; ++i) {
       result *= i;
   }
 
   return result;
}
 
int main() {
   // Get user input for the value of n
   int n;
   cout << "Enter a non-negative integer n: ";
   cin >> n;
 
   // Measure execution time
   auto start = high_resolution_clock::now(); // Start the clock
 
   // Calculate factorial
   unsigned long long result = factorialIterative(n);
 
   auto stop = high_resolution_clock::now(); // Stop the clock
   auto duration = duration_cast<microseconds>(stop - start);
 
   // Display the result and execution time
   cout << "Factorial of " << n << " is: " << result << endl;
   cout << "Execution time: " << duration.count() << " microseconds" << endl;
 
   return 0;
}