<h1 align="center">🌟 Introduction to C Programming 🌟</h1>

<p align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/1/19/C_Logo.png" width="120" alt="C Language Logo"/>
</p>

<hr/>

<h2>📌 What are Variables?</h2>

<p>
Variables are named memory locations used to store data that can be changed during program execution.
</p>

<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/7/71/Memory_layout_variable.png/800px-Memory_layout_variable.png" width="500" alt="Variable memory layout"/>

<blockquote>
Example: In <code>int a = 25;</code>, <code>a</code> is the variable name storing the value <code>25</code>.
</blockquote>

<h3>🔐 Rules for Naming Variables</h3>
<ul>
  <li>Case-sensitive (e.g., <code>Age</code> and <code>age</code> are different)</li>
  <li>Must begin with an alphabet or underscore (<code>_</code>)</li>
  <li>No commas or blank spaces allowed</li>
  <li>Only <code>_</code> is allowed as a special character</li>
</ul>

---

<h2>🔠 Data Types in C</h2>

<p>Data types specify the type of data a variable can hold.</p>

<table border="1" cellpadding="8">
  <thead>
    <tr>
      <th>Type</th>
      <th>Example</th>
      <th>Description</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>int</td>
      <td>1, -2, 0</td>
      <td>Integer values</td>
    </tr>
    <tr>
      <td>float/double</td>
      <td>3.14, -24.5</td>
      <td>Real numbers</td>
    </tr>
    <tr>
      <td>char</td>
      <td>'a', 'A', '#'</td>
      <td>Single character</td>
    </tr>
  </tbody>
</table>

<img src="https://cdn.programiz.com/sites/tutorial2program/files/data-type-c.jpg" width="500" alt="Data types"/>

---

<h2>🔒 Constants</h2>

<p>Constants are values that do not change during the execution of a program.</p>

<ul>
  <li><strong>Integer Constants:</strong> 1, 2, -3</li>
  <li><strong>Real Constants:</strong> 1.0, -3.14</li>
  <li><strong>Character Constants:</strong> 'A', 'b', '#'</li>
</ul>

---

<h2>🔑 Keywords in C</h2>

<p>Keywords are reserved words in C that have special meanings.</p>

<img src="https://cdn.programiz.com/sites/tutorial2program/files/c-keywords_0.jpg" width="600" alt="C Keywords"/>

<p>Some examples include:</p>
<pre><code>
int     float   return  while
char    if      for     break
else    void    struct  typedef
</code></pre>

---

<h2>⚙️ Program Structure in C</h2>

<pre><code>#include &lt;stdio.h&gt;

int main() {
    printf("Hello World");
    return 0;
}
</code></pre>

<p>
Every C program starts with the <code>main()</code> function and includes headers like <code>&lt;stdio.h&gt;</code> for input/output functions.
</p>

---

<h2>💬 Comments in C</h2>

<p>Used to improve code readability and are ignored during compilation.</p>

<ul>
  <li>Single-line: <code>// This is a comment</code></li>
  <li>Multi-line: <code>/* This is a multi-line comment */</code></li>
</ul>

---

<h2>🖨️ Output in C</h2>

<p>Use <code>printf()</code> to display output.</p>

<pre><code>
printf("Hello World\n");
printf("Age is %d", age);
printf("Value of pi is %f", pi);
printf("Star looks like %c", star);
</code></pre>

<img src="https://www.sitesbay.com/c/images/c-output.png" width="450" alt="C Output Example"/>

---

<h2>📥 Input in C</h2>

<p>Use <code>scanf()</code> to take input from the user.</p>

<pre><code>scanf("%d", &age);</code></pre>

---

<h2>⚙️ Compilation Process</h2>

<p>C code needs to be compiled before it can run. The compiler converts it into machine-level code.</p>

<img src="https://static.javatpoint.com/cpages/images/c-program-structure.png" width="600" alt="Compilation Process"/>

<pre><code>
Source Code (hello.c)
    ↓
C Compiler
    ↓
Executable File (a.exe for Windows, a.out for Linux/Mac)
</code></pre>

---

<h2>🚀 Summary</h2>

<ul>
  <li>📦 Variables store changeable data</li>
  <li>🔢 Data types define the type of data (int, float, char)</li>
  <li>🔐 Constants are fixed values</li>
  <li>🔑 Keywords are reserved by the language</li>
  <li>🖥️ Output: <code>printf()</code>, 📥 Input: <code>scanf()</code></li>
  <li>⚙️ Compilation turns C code into executable machine code</li>
</ul>

---

<h3 align="center">Happy Coding in C! 👨‍💻👩‍💻</h3>
