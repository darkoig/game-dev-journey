# Notes
## What changed since my degree (old c++ vs modern c++)

## Debugging exercise
Prediction year 3: 115,7625.  
What happened with decimals (first impression): decimals are
incrementing each iteration and some error happens.

Correction after digging deeper: floating point error does NOT appear
at some point when digits "run out" — it exists from the very first
operation. A double cannot represent 0.05 exactly; it stores a very
close binary approximation, so every calculation is slightly off from
operation one. What grows with each iteration is not the error
appearing, but the error accumulating. This is why you never compare
floats with == and why physics breaks far from the world origin in
games.

Found that Integer * Double it makes a double until store data action that truncates the value to fit it in variable type.  

Interesting shortcuts in Visual Studio:
- **F11** for *step in* --> Line per line execution. Entering a function and stopping in each line of the function.
- **F10** for *step over* --> Statement execution. If it finds a function it executes the functionallity without executing line per line. It executes the whole function without entering on it. 
- **Shift+F11** for *step out* --> Executes all remaining code in the function that is currently running.
- **Ctrl+F10** for *run to cursor* --> Executes all code stopping where the selected line is and starts debugging from there.
- **F5** for *continue* --> Executes all code until the end of it or until finding a breakpoint (once you are in debug).
- **F5** for *start* --> Same as before but the entry condition is to not being in debug mode.
- **F9** to *create a breakpoint* --> It creates a marker that tells the debugger to stopp execution of the program at the breakpoint when running in debug mode.
- **Ctrl+Shift+F10** for *set next statement* --> It allows to change the point of execution to some other statement (also called jumping)

# Learncpp
## Chapter 1
When does undefined behaviour occur? What are the consequences of undefined behaviour?  
- For example declaring a variable without initialization and using it for calculations or Cout.
- The consequences can be anything, from crashing to work propertly. Can cause future bugs.
## Chapter 2
