5 questions about Malaysia 
(mini project as a beginner after the Python piscine)
---------------------------------------------------------------------------------------------------
Hello there 👋

This repository was created just for fun using what I learned during the 42KL Discovery Piscine (February 2026).

This quiz will ask you general questions about Malaysia.
-------------------------------------------------------------------------------------------------------
Concepts Used:

* If–else statements
* Functions
* Logical AND operations
--------------------------------------------------------------------------------------------------------
What I learned throughout this project:
1. Input Sanitization

I learned how to use .strip() and .lower() to clean up user input. This ensures the quiz doesn't fail just because a user added an extra space or used capital letters.

2. Nested Conditional Logic

I built a "Second Chance" system using nested if-else statements. This allows the program to branch out: if the first answer is wrong, it triggers a second prompt before deciding whether to end the game.

3. Membership Operators (in)
 
For questions with multiple answers , I used the "in" operator. This makes the code smarter because it checks if the keywords exist in the sentence, regardless of the order the user types them in.

4. Functional Organization

I organized each quiz question into its own function. This keeps the code clean and modular, making it much easier to read and debug compared to one long block of text.

5. Process Control
   
I used the exit() function to create a "Hard Stop" for the quiz. This mimics the strict logic often found in C programming, where the program terminates immediately if a specific condition isn't met.

-----------------------------------------------------------------------------------------------------------------------
I hope you enjoy this mini project 🙂

To run the program:

Run it in the terminal using:

* python3 5\ questions\ about\ Malaysia.py
* ./5\ questions\ about\ Malaysia.py 

Example questions:
- What is the capital city of Malaysia?

