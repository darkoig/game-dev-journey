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
-Undefined behavior (UB) is what happens when a program does something for which the C++ standard imposes no requirements: the language guarantees nothing about the result — it may crash, produce wrong values, corrupt memory, or appear to work correctly, and the outcome can change between compilers, optimization levels, or runs.  
## Chapter 2
Including header with realtive path is bad practice. Better to add external directories from including path in the IDE.  
Interesting how the compiler works with header files. Is a way to centralize in one file multiple declarations and use it in n files.
Do not rely on transitive includes if you need a header the best practice is to import even if you know that other import has it.  
If everything is done correctly order of includes doesn't matter at all but is a good practice to keep in mind this order: Paired header for this specific code, other headers from the same project, 3rd party library headers, standard headers.  
Header guards are crucial to avoid compilation errors. Convention is full filename of the header file, typed in all caps using underscore for spaces or punctuation.  
Headers are so usefull but pragma once is easier and modern. It has one case where it can fail. Duplicated identical file in different places of the directory and both get included it will fail to prevent the error. But we will be using it as starndard for us.  
## Chapter 4
|Variable type|Min-Size|Typical-size|
|:------------|:------------:|------------:|
|bool|1 byte|1 byte|
|char|1 byte|1 byte|
|wchar_t|1 byte|2 or 4 bytes|
|char8_t|1 byte|1 byte|
|char16_t|2 bytes|2 bytes|
|char32_t|4 bytes|4 bytes|
|short|2 bytes|2 bytes|
|int|2 bytes|4 bytes|
|long|2 bytes|4 or 8 bytes|
|long long|8 bytes|8 bytes|
|float|4 bytes|4 bytes|
|double|8 bytes|8 bytes|
|long double|8 bytes|8, 12 or 16 bytes|
|std::nullptr_t|4 bytes|4 or 8 bytes|
- sizeof returns size of the variable in bytes (not length of array for example)
- C++ only guarantees that integers will have a certain minimum size, not that they will have specific size.
- n-bit signed variable has a range of -(2^n-1^) to (2^n-1^)-1
- For declaring unsigned variable we have to use unsigned before the variable type.
- n-bit unsigned variable has a range of 0 to (2^n^)-1.  