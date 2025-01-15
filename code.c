//Name : B.V.Sai Hasitha
//Rg.No : AP24110010908

1.Write a program to print the binary representation of a number using loops.
//Code:

#include <stdio.h>
void printBinary(int num) {
    int binary[32];
    int index = 0;
    while (num > 0) {
        binary[index] = num % 2;
        num /= 2;
        index++;
    }
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Binary representation of %d is: ", num);
    printBinary(num);
    return 0;
}

2.Write separate functions for addition, subtraction, multiplication, and division. Call these functions from a menu-driven program.
//Code:
    
#include <stdio.h> 
#include <ctype.h>  
void countVowelsConsonants(char *str, int *vowels, int *consonants) { 
    while (*str != '\0') { 
        char ch = tolower(*str); 
        if (ch >= 'a' && ch <= 'z') { 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') { 
                (*vowels)++; 
            } else { 
                (*consonants)++; 
            } 
        } 
        str++; 
    } 
} 
int main() { 
    char str[100]; 
    int vowels = 0, consonants = 0; 
    printf("Enter a string: "); 
    fgets(str, sizeof(str), stdin);  
    countVowelsConsonants(str, &vowels, &consonants); 
    printf("Number of vowels: %d\n", vowels); 
    printf("Number of consonants: %d\n", consonants); 
    return 0; 
}
 

3. Write separate functions for addition, subtraction, multiplication, and division. Call these functions from a menu-driven program.
//Code:
    
#include<stdio.h>
float add(float a,float b){
return a+b;	
}
float sub(float a,float b){
return a-b;
}
float mul(float a,float b){
return a*b;
}
float div(float a,float b){
return a/b;
}
int main(){
int choice;
float a,b,result;
printf("enter the valid operator from '+' '-' '*' '/'");
printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
scanf("%d",&choice);
if(choice >0 && choice<5){
printf("Enter the first number\n");
scanf("%f",&a);
printf("Enter the second number\n");
scanf("%f",&b);
switch(choice){
case 1: result = add(a,b);
printf("The result is %.2f", result);
break;
case 2: result = sub(a,b);
printf("The result is %.2f" ,result);
break;
case 3: result = mul(a,b);
printf("The result is %.2f",result);
break;
case 4 :
if(b>0){
result = div(a,b);
printf("The result is %.2f",result);
}else{
printf("Division by zero ");
}
default :
printf("Invalid Operation\n");
}
return 0;
}else{
printf("Invalid operation\n");
}}

4.  Write a program to print a diamond-shaped pattern using loops.
//Code:

#include <stdio.h>
void printDiamond(int n) {
    for (int i = 1; i <= n; i += 2) {
        for (int j = i; j < n; j += 2) {
            printf(" ");
        }
        for (int k = 0; k < i; k++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 2; i >= 1; i -= 2) {
        for (int j = n; j > i; j -= 2) {
            printf(" ");
        }
        for (int k = 0; k < i; k++) {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter an odd number: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("Input must be an odd number!\n");
    } else {
        printDiamond(n);
    }
    return 0;
}


5. Write a program to find the length of a given string using pointers.
//Code:

#include <stdio.h> 
int stringLength(char*str) { 
    int length=0; 
    while (*str!='\0') { 
        length++; 
        str++;         
    } 
    return length; 
} 
int main() { 
    char str[100]; 
    printf("Enter a string:"); 
    fgets(str, sizeof(str), stdin);   
    int len = stringLength(str); 
    printf("Length of the string is:%d\n",len); 
    return 0; 
}
 


6. Write a function to calculate the GCD (Greatest Common Divisor) of two numbers using recursion.
//Code:

#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("GCD of %d and %d is: %d\n", a, b, gcd(a, b));
    return 0;
}
 
