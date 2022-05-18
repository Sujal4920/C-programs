int fact_recursive(int num)  
{
  int result;
  if (num == 0)		// Base case for recursion.
    return 1;     // fact() return 1 if argument is 0
  else
  {
    result = num * fact_recursive(num-1);      // Call recursively with lesser number.
    return result; 
  }
}
#include <stdio.h>

int sum(int num) 
{
  int result;
  if(num == 0)		// Base case to return immediately without recursion
    return num;		// return when num is ZERO.
  else
  {
    result = num + sum(num-1);	// Call the function recursively with smaller value.
    return result;
  }
}

int main() 
{
  int number, result;
  number = 10;		//Number upto which the Sum is required.
  result = sum(number);
  printf("sum=%d\n", result);
  return 0;
}
#include <stdio.h>

int fact_recursive(int num)  
{
  if (num == 0)
    return 1;     // fact() return 1 if argument is 0
  else
    return num * fact_recursive(num-1); 
  // Different way to Call recursively with lesser number and return in same line.
}

int fact_non_recursive(int num)  
{
  int fact=1, i;
  for(i=1;i<=num;i++)
    fact = fact*i;        // Calculate factorial iteratively
  return fact;
}

int main() 
{
  int number, fact1, fact2;
  number = 5;	// Number whose factorial required
  fact1 = fact_recursive(number);        // Call the Recursive version
  fact2 = fact_non_recursive(number);        // Call the iterative version
  printf("Number=%d\n", number);
  printf("Recursive_Factorial=%d\n", fact1);
  printf("Non_Recursive_Factorial=%d\n", fact2);
  return 0;
}