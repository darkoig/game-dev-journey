# Exercise: Savings box (debugger practice)

**Goal:** learn the VS debugger (learncpp 3.6-3.9). The program is just an excuse.

## Requirements
Simulate a savings account with compound interest:
- A starting balance of 100
- A separate function that takes the current balance and returns it
  increased by 5%
- A loop in main simulating 10 years: each year, call the function,
  update the balance, print the year and the balance
- After the loop: print the final balance

## Before running
Write down your prediction for the balance at the end of year 3: 115,7625.

## Debugger session
- [x] Breakpoint inside the loop
- [x] Step over (F10) year by year, checking prediction vs locals window
- [x] Step into (F11) the interest function
- [x] Inspect the call stack from inside the function

## Observation
Depending on the type you choose for the balance, something happens
with the decimals. What, and why? (answer goes to notes.md)
