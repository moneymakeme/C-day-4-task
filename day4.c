//number-crunching
/*1.Count the number of digits in a given number

Input Format

Integer

Constraints

NUM>0

Output Format

Integer

Sample Input 0

12345
Sample Output 0

5

sollution: */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long a,count=0;
    scanf("%ld",&a);
    int b=1;
    if(a==0)
    {
        printf("%d",b);
}
    
      else{
           while(a!=0)
        {
        a=a/10;
        count++;
        
        }
    printf("%ld",count);
      }   
   
    return 0;
}

/*2.Write a C program Count the number of occurrences of a digit in a given number

Input Format

The number and the digit

Constraints

NUMBER>0

Output Format

Integer

Sample Input 0

12224 2
Sample Output 0

3

sollution: */
#include <stdio.h>

int main() {
    long long number; // Use long long to handle large numbers
    int digit, count = 0;

    // Read input
   // printf("Enter a positive integer and a digit to count: ");
    scanf("%lld %d", &number, &digit);

    // Validate the digit input
    if (digit < 0 || digit > 9) {
        printf("Digit must be between 0 and 9.\n");
        return 1;
    }

    // Count occurrences of the digit
    while (number > 0) {
        if (number % 10 == digit) {
            count++; // Increment count if the last digit matches
        }
        number /= 10; // Remove the last digit
    }

    // Print the result
    printf("%d\n", count);
    
    return 0;
}

/*3.Write a c Program to find the product of the digits in a given number

Input Format

INTEGER

Constraints

INPUT>0

Output Format

INTEGER

Sample Input 0

123
Sample Output 0

6

sollution: */
#include <stdio.h>

int main() {
    int number;
    int product = 1;

    // Read input
    //printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Validate the input
    if (number <= 0) {
        printf("Input must be greater than 0.\n");
        return 1;
    }

    // Calculate the product of the digits
    while (number > 0) {
        product *= (number % 10); // Multiply by the last digit
        number /= 10;              // Remove the last digit
    }

    // Print the result
    printf("%d\n", product);
    
    return 0;
}

/*4.Print all the prime digits in a given number

Input Format

Integer

Constraints

Input>0

Output Format

Integer

Sample Input 0

12345
Sample Output 0

2 3 5 

sollution: */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long a,rem,arr[100],index=0;
    scanf("%ld",&a); //12345 [5,3,2]
    while(a>0)
    {
        rem=a%10; //1
        a=a/10; //0
        if(rem > 1)
        {
            if(rem==2 || rem==3 || rem==5 || rem==7)
                {
                arr[index++]=rem;
                }
               
}
       
           
}
    for(int j=index-1;j>=0;j--)
    {
        printf("%ld ",arr[j]);
}
       
       

    return 0;
}

/*5.Write a C program to display the digits of a given number from right to left

Input Format

Integer

Constraints

Input>=1

Output Format

Integer

Sample Input 0

1234
Sample Output 0

4 3 2 1 

sollution: */
#include <stdio.h>

void display_digits_reverse(int number) {
    // Loop until the number becomes 0
    while (number > 0) {
        int digit = number % 10; // Get the last digit
        printf("%d ", digit);    // Print the digit
        number /= 10;             // Remove the last digit
    }
}

int main() {
    int input_number;

    // Input: Ensure input is greater than or equal to 1
   
    scanf("%d", &input_number);

    if (input_number >= 1) {
        display_digits_reverse(input_number);
    } else {
        printf("Input must be greater than or equal to 1.\n");
    }

    return 0;
}

/*6.Write a C program to find the reverse number of the given number

Input Format

Integer

Constraints

Input>0

Output Format

Integer

Sample Input 0

123
Sample Output 0

321

sollution: */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long a,rem, ans=0;
    scanf("%ld",&a);
    if (a == 0) {
        printf("0");
    }
    while(a>0)
    {
        rem=a%10;
        ans=ans*10+rem;
        a=a/10;
       
    }
    printf("%ld",ans);
    return 0;
}

/*7.Write a C program to find whether the given number is Palindrome or Not

Input Format

Integer

Constraints

Input>0

Output Format

Integer

Sample Input 0

121
Sample Output 0

Palindrome
Sample Input 1

548
Sample Output 1

Not a Palindrome

sollution: */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long a,rem, ans=0,original;

    scanf("%ld",&a);
    original = a;

    if (a == 0) {

        printf("Palindrome");

    }

    while(a>0)

    {

        rem=a%10;

        ans=ans*10+rem;

        a=a/10;

       

    }
    if(original==ans)
        {
        printf ("Palindrome") ;
    }
    else{
        printf("Not a Palindrome");
    }

   
    return 0;
}

/*8.Find whether the given number is Adam or Not.

Input Format

Integer

Constraints

input>0

Output Format

Integer

Sample Input 0

12
Sample Output 0

Adam Number
Sample Input 1

23
Sample Output 1

Not a adam number

sollution: */
#include <stdio.h>

int reverse_number(int number) {
    int reversed = 0;
    while (number > 0) {
        int digit = number % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Build the reversed number
        number /= 10; // Remove the last digit
    }
    return reversed;
}

int main() {
    int input_number;

    
    scanf("%d", &input_number);

    if (input_number > 0) {
        // Step 1: Square the original number
        int original_square = input_number * input_number;

        // Step 2: Reverse the original number
        int reversed_number = reverse_number(input_number);

        // Step 3: Square the reversed number
        int reversed_square = reversed_number * reversed_number;

        // Step 4: Reverse the square of the reversed number
        int reversed_square_reversed = reverse_number(reversed_square);

        // Step 5: Check if the reversed square is equal to the original square
        if (original_square == reversed_square_reversed) {
            printf("Adam Number\n");
        } else {
            printf("Not a adam number\n");
        }
    } else {
        printf("Input must be greater than 0.\n");
    }

    return 0;
}

/*9.Find whether the given number is armstrong or not.

Input Format

Integer

Constraints

Input>0

Output Format

Integer

Sample Input 0

153
Sample Output 0

Armstrong number
Sample Input 1

157
Sample Output 1

Not an Armstrong number

sollution: */
#include <stdio.h>
#include <math.h>

int is_armstrong(int number) {
    int original = number;
    int sum = 0;
    int count = 0;

    // Step 1: Count the number of digits
    while (number > 0) {
        number /= 10;
        count++;
    }

    number = original; // Restore original number for calculation

    // Step 2: Calculate the sum of each digit raised to the power of count
    while (number > 0) {
        int digit = number % 10; // Get the last digit
        sum += pow(digit, count); // Add the digit raised to the power of count
        number /= 10; // Remove the last digit
    }

    // Step 3: Check if the sum is equal to the original number
    return sum == original;
}

int main() {
    int input_number;

    // Input: Ensure input is greater than 0
   // printf("Enter a positive integer: ");
    scanf("%d", &input_number);

    if (input_number > 0) {
        if (is_armstrong(input_number)) {
            printf("Armstrong number\n");
        } else {
            printf("Not an Armstrong number\n");
        }
    } else {
        printf("Input must be greater than 0.\n");
    }

    return 0;
}

/*10.Find whether the given number is strong number or not.

Input Format

Integer

Constraints

input>0

Output Format

Integer

Sample Input 0

145
Sample Output 0

Strong Number
Sample Input 1

98
Sample Output 1

Not a strong number
Sample Input 2

98
Sample Output 2

Not a strong number
Sample Input 3

98
Sample Output 3

Not a strong number

sollution: */
#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to check if the number is a strong number
int is_strong(int number) {
    int original = number;
    int sum = 0;

    // Calculate the sum of the factorials of the digits
    while (number > 0) {
        int digit = number % 10; // Get the last digit
        sum += factorial(digit); // Add the factorial of the digit
        number /= 10; // Remove the last digit
    }

    // Check if the sum of the factorials is equal to the original number
    return sum == original;
}

int main() {
    int input_number;

    // Input: Ensure input is greater than 0
   // printf("Enter a positive integer: ");
    scanf("%d", &input_number);

    if (input_number > 0) {
        if (is_strong(input_number)) {
            printf("Strong Number\n");
        } else {
            printf("Not a strong number\n");
        }
    } else {
        printf("Input must be greater than 0.\n");
    }

    return 0;
}