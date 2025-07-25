# Looping-in-Cpp

# Aim:

To understand and implement the use of loops (for and while) in C++ through simple practical programs such as:

    Printing even numbers using a for loop.

    Password checker using while and for loops.

    Reversing a number using a while loop.

    Repeating a message multiple times using a for loop.

# Software Used

Visual Studio Code

# Theory:

In C++, loops are used to execute a block of code repeatedly until a certain condition is met. The three main types of loops are:

    For loop – Best when the number of iterations is known.

    While loop – Ideal when the loop must continue as long as a condition is true.

    Do-while loop – Similar to while, but guarantees at least one execution.

Loops reduce code redundancy and enhance efficiency in repetitive tasks.

# Program Summaries:

# 1. Even Values Using for Loop

Objective: Print all even numbers between 0 and 10.

Logic: Use a for loop with an if condition to check divisibility by 2.

File: Even_values_using_for_loop.cpp

# 2. Password Checker Using Loops

Objective: Validate user input by comparing it to a preset password, with a maximum of 5 attempts.

Logic: Use a while loop for retry attempts and a for loop for character-wise comparison.

File: Password_checker_using_loops.cpp

# Algorithm:

      Set the correct password as Password123.
    
      Initialize attempt counter to 5.
    
      Prompt the user to enter an 11-character password.
    
      While attempts are remaining:
    
        Get user input.
    
        Compare input character-by-character using a for loop.
    
        If all characters match:
    
          Print success message.
    
          Exit loop.
    
        Else:
    
          Reduce the attempt count and notify the user.
    
      If all attempts are used, notify the user they are out of attempts.

# 3. Printing a Message Multiple Times

Objective: Print "SIT" five times.

Logic: Use a for loop from 0 to 4.

File: Printing_multiple_time.cpp

# 4. Reverse a Number Using Loops

Objective: Take a number input (e.g., a PRN) and reverse its digits.

Logic: Use a while loop to extract digits and build the reversed number.

File: Reverse_using_loops.cpp

# Algorithm:

      Take input number (PRN).
      
      Initialize a variable to store the reversed number as 0.
    
      While the input number is greater than 0:
    
        Extract the last digit using % 10.
    
        Add the digit to the reversed number after shifting the previous digits (b = b * 10 + a).
    
        Remove the last digit from the input number (prn = prn / 10).
    
      Display the reversed number.

# Conclusion:

This lab successfully demonstrated the practical use of loops in C++ through four programs. The for loop was shown to be effective when the number of iterations is predetermined, while the while loop is useful when the number of iterations depends on a condition (like password attempts or reversing a number). These examples form the foundational understanding required for more complex iterative structures in programming.
