\# 🧠 Variables in C Programming

  

Variables in C are the \*\*names of memory locations\*\* where data is stored. They allow us to store, modify, and retrieve values during the execution of a program.

  

\---

  

\## 📌 Understanding Variables with an Example

  

\`\`\`c

int a = 5;

char b\[\] = "Programming";

a stores the integer value 5 in memory.

  

b stores the string "Programming" in memory.

  

So, a variable is simply a labeled memory space used to hold data.

  

🧾 Syntax to Declare a Variable in C

c

Copy

Edit

data\_type variable\_name = value;

data\_type defines the kind of data the variable will store (e.g., int, float, char).

  

variable\_name is the name of the variable.

  

value is the data assigned to that variable.

  

🔢 Categories of Data Types

There are three main categories of data types in C:

  

Primary (Fundamental) – int, char, float, double, void

  

Derived – Arrays, Pointers, Structures, Unions

  

User-defined – enum, typedef, etc.

  

For now, let’s focus on Primary Data Types:

  

Data Type	Size (Typical)	Example Values
int	2 or 4 bytes	1, -25, 1000
char	1 byte	'A', 'z'
float	4 bytes	3.14, 7.25
double	8 bytes	3.1415926535
void	0 byte	Represents "no value"


⚙️ Rules for Naming Variables

To declare variables properly, follow these rules:

  

Case-sensitive – Age and age are different variables.

  

Start with a letter or underscore \_ – Valid: \_age, name; Invalid: 1age

  

No spaces or commas –

❌ int roll, no = 5;

✅ int roll\_no = 5;

  

Avoid special characters – Only \_ is allowed. Do not use @, #, $, %, etc.

  

✅ Good Practice:

Use meaningful names:

  

c

Copy

Edit

int score = 90;      // Good

int x = 90;          // Avoid (not clear)

🧪 Example of Declaration and Initialization

c

Copy

Edit

#include 

  

int main() {

    int age = 21;

    float height = 5.9;

    char grade = 'A';

  

    printf("Age: %d\\n", age);

    printf("Height: %.1f\\n", height);

    printf("Grade: %c\\n", grade);

  

    return 0;

}

✅ Output:

makefile

Copy

Edit

Age: 21

Height: 5.9

Grade: A

📥 Taking Input from the User

In C, we use scanf() to take input from the user.

  

🧾 Syntax:

c

Copy

Edit

scanf("format\_specifier", &variable);

You must use the address-of operator & when taking input.

  

✅ Example:

c

Copy

Edit

#include 

  

int main() {

    int age;

    printf("Enter your age: ");

    scanf("%d", &age);

    printf("You are %d years old.\\n", age);

    return 0;

}

📌 Format Specifiers in C

Data Type Format Specifier Example

int %d or %i scanf("%d", &a);

char %c scanf("%c", &ch);

float %f scanf("%f", &pi);

double %lf scanf("%lf", &g);

string (char array) %s scanf("%s", name);

  

🧾 Purpose of Semicolon in C

Every statement in C ends with a semicolon (;). It tells the compiler:

  

"This line of code is complete."

  

✅ Example:

c

Copy

Edit

int age = 20;   // ends with ;

Forgetting a semicolon will cause a compile-time error.

  

🧠 Final Notes

Use understandable names for variables.

  

Always declare variables before use.

  

Use correct format specifiers for both printf() and scanf() functions.

  

Don’t forget your semicolon!