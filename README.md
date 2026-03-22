1. Purpose of the Code
The program demonstrates a simple “sleep sort” technique, where each number in an array is printed after a delay proportional to its value.

3. Headers Included
<iostream>: For input and output operations, e.g., printing to the console.
<ctime>: Provides access to the clock() function, which measures CPU time and is used to implement a custom delay.

5. Namespace
The line using namespace std; allows using cout and other standard functions without typing std:: every time.

7. Custom Sleep Function
The program defines a function mySleep(int seconds) that pauses program execution.
How it works:
Records the current CPU time at the start.
Uses a while loop to keep the program busy until the required number of seconds has passed.
Note: This method is called a busy wait and is not very efficient but works on all systems.

9. Main Function
Declares an array arr[] containing numbers 1 to 10.
Sets n = 5, meaning only the first five numbers will be processed.
Uses a for loop to iterate over the array:
Calls mySleep(arr[i]) to pause for a number of seconds equal to the current element.
Prints the element to the console after the delay.

10. Program Output
Each number appears after a delay equal to its value.
For the first 5 numbers, the program prints:
1 2 3 4 5
The timing between numbers reflects their values: e.g., 2 appears 2 seconds after 1.

12. Key Notes
The code mimics a sleep sort algorithm but in a single-threaded and simple way.
The busy wait uses CPU resources unnecessarily.
For more accurate and efficient delays, modern C++ can use std::this_thread::sleep_for().
