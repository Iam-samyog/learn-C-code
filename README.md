💻 **Learn-C-Code**
## Welcome to Learn-C-Code! 🎓
This repository contains all the C programming fundamentals and exercises for learning and mastering the C language. Whether you're a beginner just getting started or someone revising concepts, this repo is a great place to explore the fundamentals of C with clean examples.
📂 **Folder Structure**

Learn-C-Code/
├── 01_Variables_and_DataTypes
├── 02_Operators
├── 03_Conditional_Statements
├── 04_Loops
├── 05_Function
├── 06_Pointers
├── 07_Arrays
├── 08_Strings
├── 09_Structures
├── 10_FILE 
├── 11_Dynamic Memory Allocation 
└── README.md
✨ What You Will Learn

✅ Basics: Syntax, Variables, Data Types, Operators
🛠️ Input/Output using printf() and scanf()
🔁 Control Flow: if, else, switch, for, while, do-while
🧠 Functions and Recursion
📦 Arrays and Strings
📌 Pointers and Memory Management
🏗️ Structures and Data Organization

🚀 Getting Started
To run any .c file:

Make sure you have GCC installed:
bashgcc --version

Compile the code:
bashgcc filename.c -o output

Run the executable:
bash./output


🧭 C Programming Fundamentals
Variables: Your Digital Storage Boxes
Variables are named memory locations that store data in your program.
Rules for Variable Names:

✅ Must start with a letter or underscore (_)
✅ Can contain letters, numbers, and underscores
✅ Case-sensitive (age and Age are different variables)
❌ Cannot contain spaces or special symbols
❌ Cannot use C keywords (like int, return)

Example:
cint age = 25;           // Integer variable
float salary = 1500.50; // Float variable
char grade = 'A';       // Character variable
Data Types: Categories for Different Kinds of Data
TypeDescriptionExampleSize (typical)intWhole numbersint count = 25;4 bytesfloatDecimal numbersfloat price = 19.99;4 bytesdoubleMore precise decimalsdouble pi = 3.14159265359;8 bytescharSingle characterschar grade = 'A';1 byte
Constants: Values That Don't Change
c#define PI 3.14159     // Using preprocessor directive
const int MAX_SIZE = 100;  // Using const keyword
Keywords: C's Reserved Words
C has 32 keywords that have special meaning to the compiler and cannot be used as variable names:
auto     double   int      struct
break    else     long     switch
case     enum     register typedef
char     extern   return   union
const    float    short    unsigned
continue for      signed   void
default  goto     sizeof   volatile
do       if       static   while
Program Structure: Anatomy of a C Program
c#include <stdio.h>  // Header file inclusion

int main() {        // Main function - program execution starts here
    // Code statements
    printf("Hello, World!\n");  // Output function
    
    return 0;       // Return statement
}
Comments: Notes in Your Code
c// This is a single-line comment

/* This is a multi-line comment
   that spans several lines
   and explains complex logic */
Input/Output: Communicating with Users
Output with printf():
cprintf("Hello, World!\n");              // Simple output
printf("My age is %d years.\n", age);   // Output with variable
printf("Pi is approximately %.2f", PI); // Formatted output
Format specifiers:

%d - integers
%f - floats/doubles
%c - characters
%s - strings

Input with scanf():
cint age;
printf("Enter your age: ");
scanf("%d", &age);  // The & operator gets the memory address
Compilation: Turning Your Code into a Program
The compilation process:

Write the source code (.c file)
Compile using a C compiler (like GCC)
Run the executable file

bashgcc hello.c -o hello  # Compile
./hello               # Run
🧠 Why C?
C is:

The foundation of many modern languages like C++, Java, and Python
Used in system-level programming and embedded systems
A great way to build problem-solving skills and understand how computers really work

📝 Contribution
Feel free to fork this repo, learn along, and even suggest improvements or add more examples through pull requests!
📸 Screenshots & Diagrams
Here's a glimpse of one of the code outputs:
Input your name: Samyog
Hello, Samyog! Welcome to C programming!
📚 Resources Used

📘 Let Us C by Yashavant Kanetkar
🌐 GeeksforGeeks
💡 Programiz C Tutorials

🤝 Let's Connect
📫 Want to collaborate or discuss ideas?
Find me on:

LinkedIn
GitHub

⭐ If you found this helpful, don't forget to star the repository!
Happy Learning & Keep Coding! 🚀👨‍💻