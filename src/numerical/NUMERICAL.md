# Numerical recursion

### How to compile
Use the command:

```bash
g++ <file.cpp> [-o executable_name]
```

to generate the executable file.

### How to execute executable file
There are two ways to execute it:

```bash
./<executable_file>
```

or passing arguments to the program:

```bash
./<executable_file> [argv1] [argv2] ... [argvn]
```

## `argv`s:

`argv`s depends on what the program does. Follows a list of what they mean in each `.cpp` file:

-  *oddSum.cpp*: it allows one `int` argument, which is the number of odd numbers to sum.
- *digitsCount.cpp*: it allows one `int` argument, which is the number to count the digits of.
- *sumDigits.cpp*: it allows one `int` argument, which is the number to sum the digits of.
- *gcd.cpp*: it allows two `int` arguments, which are the numbers to calculate the greatest common divisor of.
- *countDivisors.cpp*: it allows one `int` argument, which is the number to count the divisors of.
- *oddMultiply.cpp*: it allows one `int` argument, which is the number of odd numbers to multiply.
- *fibonacci.cpp*: it allows one `int` argument, which is the i-th number of the Fibonacci sequence to be computed.
- *alternateSum.cpp*: it allows one `int` argument, which is the i-th term of the alternating sum to calculate.
