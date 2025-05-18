## Variables in C

Variables are the name of the memory location where data is stored .

---
 ## For instance,
        a=5,b='Programming '
<p>Here a is storing the value 5 [a integer] in the memory and b is storing "Programming" [a string]. We have basically supposed that in the memory , b is the place where we will have our string 'Programmiing'.Therefore, variables are the  location in the memory where data is being stored.</p>
---

## Syntax in C-programming to declare a Variable
```
    data_type variable_name=Value
```
 Here, Data type can be integers, strings, float (decimal values),and many more .There are about 3 mainly categories of the data types in C.
 
---

 <img src="https://media.geeksforgeeks.org/wp-content/uploads/20220808115138/DatatypesInC.jpg" alt="Image of Data types"/>
---

<h2>For now, we will only take about Primary data types.</h2>
 <table>
    <tr>
      <th>Data Type</th>
      <th>Typical Size</th>
      <th>Description</th>
    </tr>
    <tr>
      <td><code>int</code></td>
      <td>2 or 4 bytes</td>
      <td>Integer numbers</td>
    </tr>
    <tr>
      <td><code>char</code></td>
      <td>1 byte</td>
      <td>Character</td>
    </tr>
    <tr>
      <td><code>float</code></td>
      <td>4 bytes</td>
      <td>Floating point numbers</td>
    </tr>
    <tr>
      <td><code>double</code></td>
      <td>8 bytes</td>
      <td>Double precision float</td>
    </tr>
    <tr>
      <td><code>void</code></td>
      <td>0 byte</td>
      <td>Represents no value</td>
    </tr>
  </table>

---

## Rules to define Variables
a. Variables are case sensitive. C-programming is itself case sensitive which means lowercase and uppercase is different in C 
**For instance**
```c
    int A=5;
    int a=5;
```
 Both has different memory location

b.The first character of the variable should be alphabet or '_'
```c
    int name='Samyog';
    float _age=18;
```

c. There should not be comma or blank space between the variables.

```c
    int roll,no=36; //will be error
    int roll_no=36; //will be correct
```

d.No other symbol other than ' _ ' should be used.You cannot use '/,`.~.@' or any other symbol in place of '_' .

---

