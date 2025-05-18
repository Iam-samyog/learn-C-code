<div align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=0:007bff,100:a82da8&height=200&section=header&text=Learn-C-Code&fontSize=50&fontColor=FAFAFA&animation=twinkling&fontAlignY=35" width="100%"/>
</div>
<div align="center">
  <!-- Animated greeting text -->
  <img src="https://readme-typing-svg.herokuapp.com?font=Fira+Code&size=24&duration=3000&pause=1000&color=a82da8&center=true&vCenter=true&multiline=true&width=500&height=100&lines=Welcome+to+Learn-C-Code;Master+the+C+programming+language" alt="Typing SVG" />
</div>
<!-- Main description section with animated GIF -->
<table align="center" border="0" cellspacing="0" cellpadding="0">
  <tr>
    <td width="60%">
      <img src="https://media1.tenor.com/m/YeqrQU04PpMAAAAC/lofi-girl-train.gif" width="100%" />
    </td>
    <td width="40%">
      <h3>⋆｡˚ About This Repository ⋆｡˚</h3>
      <p><i><strong>"From basics to mastery, one concept at a time."</strong></i></p>
      <p>
        This repository contains all the C programming fundamentals and exercises for learning and mastering the C language. Whether you're a beginner just getting started or someone revising concepts, this repo is a great place to explore the fundamentals of C with clean examples.
      </p>
      <p>
        Each folder contains organized examples and exercises that build upon each other, helping you develop a strong foundation in C programming.
      </p>
    </td>
  </tr>
</table>
<!-- Repository structure visualization -->
<div align="center">
  <h2>📂 Repository Structure</h2>
Learn-C-Code/
├── 01_Variables_and_DataTypes/
├── 02_Operators/
├── 03_Conditional_Statements/
├── 04_Loops/
├── 05_Function/
├── 06_Pointers/
├── 07_Arrays/
├── 08_Strings/
├── 09_Structures/
├── 10_FILE/
├── 11_Dynamic Memory Allocation/
└── README.md
</div>
<!-- What you'll learn section -->
<div align="center">
  <h2>✨ What You Will Learn</h2>
</div>
<table align="center" border="0" cellspacing="0" cellpadding="0">
  <tr>
    <td>
      <ul>
        <li>✅ <b>Basics:</b> Syntax, Variables, Data Types, Operators</li>
        <li>🛠️ <b>Input/Output</b> using printf() and scanf()</li>
        <li>🔁 <b>Control Flow:</b> if, else, switch, for, while, do-while</li>
        <li>🧠 <b>Functions</b> and Recursion</li>
      </ul>
    </td>
    <td>
      <ul>
        <li>📦 <b>Arrays</b> and Strings</li>
        <li>📌 <b>Pointers</b> and Memory Management</li>
        <li>🏗️ <b>Structures</b> and Data Organization</li>
        <li>📁 <b>File Handling</b> and I/O operations</li>
      </ul>
    </td>
  </tr>
</table>
<!-- Getting started section -->
<div align="center">
  <h2>🚀 Getting Started</h2>
</div>
To run any .c file:

Make sure you have GCC installed:

bashgcc --version

Compile the code:

bashgcc filename.c -o output

Run the executable:

bash./output
<!-- C Fundamentals Section -->
<div align="center">
  <h2>🧭 C Programming Fundamentals</h2>
</div>
<details>
  <summary><b>Variables: Your Digital Storage Boxes</b></summary>
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
</details>
<details>
  <summary><b>Data Types: Categories for Different Kinds of Data</b></summary>
TypeDescriptionExampleSize (typical)intWhole numbersint count = 25;4 bytesfloatDecimal numbersfloat price = 19.99;4 bytesdoubleMore precise decimalsdouble pi = 3.14159265359;8 bytescharSingle characterschar grade = 'A';1 byte
</details>
<details>
  <summary><b>Constants: Values That Don't Change</b></summary>
c#define PI 3.14159     // Using preprocessor directive
const int MAX_SIZE = 100;  // Using const keyword
</details>
<details>
  <summary><b>Keywords: C's Reserved Words</b></summary>
C has 32 keywords that have special meaning to the compiler and cannot be used as variable names:
auto     double   int      struct
break    else     long     switch
case     enum     register typedef
char     extern   return   union
const    float    short    unsigned
continue for      signed   void
default  goto     sizeof   volatile
do       if       static   while
</details>
<details>
  <summary><b>Program Structure: Anatomy of a C Program</b></summary>
c#include <stdio.h>  // Header file inclusion

int main() {        // Main function - program execution starts here
    // Code statements
    printf("Hello, World!\n");  // Output function
    
    return 0;       // Return statement
}
</details>
<details>
  <summary><b>Input/Output: Communicating with Users</b></summary>
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
</details>
<!-- Why C section -->
<div align="center">
  <h2>🧠 Why C?</h2>
</div>
<table align="center" border="0" cellspacing="0" cellpadding="0">
  <tr>
    <td width="60%">
      <p>C is:</p>
      <ul>
        <li>The foundation of many modern languages like C++, Java, and Python</li>
        <li>Used in system-level programming and embedded systems</li>
        <li>A great way to build problem-solving skills and understand how computers really work</li>
        <li>Still widely used in operating systems, game development, and hardware interfaces</li>
      </ul>
    </td>
    <td width="40%">
      <img src="https://media.giphy.com/media/v1.Y2lkPTc5MGI3NjExc3FrbWZqbHhpMnZpa2N5Z2kwaHR3cXIyYm5pMnA1d3N4aDlpbDQzaiZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/fwbZnTftCXVocKzfxR/giphy.gif" width="100%" />
    </td>
  </tr>
</table>
<!-- Screenshot and example section -->
<div align="center">
  <h2>📸 Screenshots & Examples</h2>
</div>
<div align="center">
  <img src="https://miro.medium.com/v2/resize:fit:1400/1*v_65_bB6EMfqnOTroPi4PA.png" width="80%" alt="C Programming Example"/>
  <pre>
Input your name: Samyog
Hello, Samyog! Welcome to C programming!
  </pre>
</div>
<!-- Contribution -->
<div align="center">
  <h2>📝 Contribution</h2>
  <p>Feel free to fork this repo, learn along, and even suggest improvements or add more examples through pull requests!</p>
</div>
<!-- Resources -->
<div align="center">
  <h2>📚 Resources Used</h2>
</div>
<div align="center">
  <table border="0" cellspacing="0" cellpadding="0">
    <tr>
      <td align="center">
        <img src="https://m.media-amazon.com/images/I/51KSaAJ-xsL._SY445_SX342_.jpg" height="100" alt="Let Us C"/>
        <br>
        📘 Let Us C by Yashavant Kanetkar
      </td>
      <td align="center">
        <img src="https://media.geeksforgeeks.org/wp-content/uploads/20211005162802/geeksforgeeks.png" height="100" alt="GeeksforGeeks"/>
        <br>
        🌐 GeeksforGeeks
      </td>
      <td align="center">
        <img src="https://programiz.com/sites/all/themes/programiz/assets/favicon.png" height="100" alt="Programiz"/>
        <br>
        💡 Programiz C Tutorials
      </td>
    </tr>
  </table>
</div>
<!-- Connect section -->
<div align="center">
  <h2>🤝 Let's Connect</h2>
  <p>📫 Want to collaborate or discuss ideas?</p>
  <p>Find me on:</p>
  <a href="https://linkedin.com/in/yourusername">
    <img src="https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white" alt="LinkedIn"/>
  </a>
  <a href="https://github.com/yourusername">
    <img src="https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white" alt="GitHub"/>
  </a>
</div>
<!-- Coding quote -->
<div align="center">
  <br>
  <p><i><strong>"First, solve the problem. Then, write the code."</strong></i></p>
</div>
<div align="center">
  ⭐ If you found this helpful, don't forget to star the repository!
  <br>
  Happy Learning & Keep Coding! 🚀👨‍💻
</div>
<!-- Footer -->
<div align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=0:a82da8,100:007bff&height=150&section=footer&fontSize=24&fontColor=fff&animation=twinkling&fontAlignY=65" width="100%"/>
</div>