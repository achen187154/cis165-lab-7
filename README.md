# cis165-lab-7
Name: Angelina Chen
Date: Oct. 21, 2026
Course:CIS-165

BMI tests: weight in pounds, height in inches
Inputs: 
weight, height	Expected result

100, 70	        14.35 — Underweight     
The reason why this is the correct result is because it passes the initial if else statement, 
where if even one of the values is less than or equal to 0, it will hit an error output. Then, the bmi value is calculated to pass through the bmi rating if else statements. In this case, the first test looked for values under 18.5, which 14.35 does pass.

150, 70	        21.52 — Optimal weight
It clears the initial if else statement and the value 21.52 is neither under 18.5 nor is it above 25, which makes it optimal weight.

200, 70	        28.69 — Overweight
It clears the initial if else statement and the value 28.69 matches the second condition that it is over 25.

150, 0	        Error: weight and height must be positive.
-150, -70	    Error: weight and height must be positive.
Both of these do not pass the initial test, as at least of one the numbers are either equal to or less than 0.

Overall, everything matches. Initially, I forgot to include <= 0, when comparing bmi, but is now resolved.


Color Mixer tests
Inputs: 
first color, second color	Expected result     Actual Result
    red, blue	            purple                  purple
    red, yellow	            orange                  orange
    blue, yellow	        green                   green
    blue, red	            purple                  purple
    red, red	            red                     red
    orange, blue	        Error                   Error
    asdf,yellow             Error                   Error

Initially had a lot of problems with parentheses and || and &&, but throuh multiple trial and error, these trials now all match


1. How does the BMI formula use pounds and inches? 
Why is height * height needed? Using the formula provided: bmi = weight * 703.0 / (height * height), the weight is multiplied in pounds by 703. Then, it is divided by height squared, but because aren't able to square our height, another way to square it is to multiply by itself.

2. How do your conditions handle exactly 18.5 and exactly 25.0? Does the order of your conditions matter? Explain how your conditions avoid gaps and handle both endpoints.
My conditions were firstly to see if it is under 18.5, then above 25, then everything else, including 18.5 and 25 is part of the else portion of the if else statement. The order of conditions don't really matter, as long as the conditions are adjusted to filter out the other values. It is just easier to do the 18.5-25 as an else portion.

3. Why do you check weight and height before calculating BMI?
To make sure the values are correct, so that the calculated BMI isn't really big or small.

4. Why do you classify the unrounded BMI and round only its displayed value?
The setprecision(2) only affects the output. 

5. What does strcmp return for equal text? Why is == not the correct comparison for character-array contents?
It returns 0 if the compared values are the same and 1 otherwise. That is why part of the function has a "== 0", to return a true or false value. == wouldn't be correct, because it will compare the memory for each variable, which unless the variable was compared against itself, a separate value will be stored in a different memory.

6. How do you make each mixture work in either input order and handle two identical primary colors?
First, I made sure the values of each variable were at least (red or yellow or blue), then using strcmp, I compared if the 2 variables had the same value. After that, I did a condition where if it was 2 color orders like (combo1 || combo2).

7. How do you check for an invalid color in either input position?
First, I made sure the values of each variable were at least (red or yellow or blue), then used an and statement to make sure that both variables were one of the primary colors.

8. How do named constants and result variables make your programs easier to read and check?
I don't have to manually input array size or result variables.