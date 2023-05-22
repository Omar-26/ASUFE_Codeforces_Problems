# <p align="center"> A. Course_Class </p>

<p align="center"> time limit per test : 1 second<br>
memory limit per test : 256 megabytes<br>
input : standard input<br>
output : standard output <br> </p>

Write a C++ program that receives from a student a list of courses (up to **five** courses) that he was enrolled, which includes the **code** of each course along with his **grade** in that course.

Then, the program outputs a full list of the student's enrolled courses, which illustrate the **status** of each course whether it was passed or not. The program also outputs the student's total **GPA**.

The program should implement a **"Course"** Class, which has the following attributes:

   - 
_**"ccode"**_ and 
_**"cname"**_ strings to store course "code" and "name" respectively.

   - 
_**"cgrade"**_ float variable to hold course grade.

   - 
_**"chours"**_ integer variable to hold course credit hours.

   - 
_**"registered"**_ boolean flag to indicate whether the student registered the course or not.

Class Constructor can be

_**Course(string code, string name, int hours);**_

   which initializes course attributes with the received data. It also initializes both course "grade" and the "registered" flag by zeros.

All class data should be accessed only using the class member functions, which may include:

_- bool is_registered ()_

_- bool is_passed()_

_- string get_name()_

_- string get_code()_

_- int get_grade()_

_- int get_hours()_

_- set_registered(bool)_

_- set_grade(float)_

In the main of the program:

   - create the following 5 courses, which are the only available courses for students to enroll:

_**Course("CS101", "Introduction to Computer Science", 3);**_

_**Course("MATH201", "Calculus I", 2);**_

_**Course("PHYS101", "Introduction to Physics", 4);**_

_**Course("CHEM101", "Introduction to Chemistry", 3);**_

_**Course("ENGL101", "English Composition I", 1);**_

   - receive from user (as showed in examples):

_* Number of registered courses_ 
_**(<=5)**_

      * Followed by courses' codes (which should be from the above created courses), each with its 
_grade_.

   - Then, you can use the following functions to make the required inputs:

_void print_passed_courses();_

_void Print_failed_courses();_

_float calc_gpa();_

## Input

    - In the first line, an integer representing 
_number of courses_.

    - Then, a list includes the course 
_code_ and 
_grade_ of all registered courses, each in a separate line.

**E.g.,**

**3**

**CS101 3.7**

**MATH201 3**

**ENGL101 1**

## Output

    - a list of all enrolled courses, which shows for each course:

        course 
_status_ ("P" or "F"), course 
**code** , and 
**course** name (in the format of the following example).

      The list displays each course in a separate line, and it first displays all 
_passed_ courses followed by an
**empty line**

      Then, it also displays all failed courses followed by an
**empty line**.

    - the total 
_GPA_ of the registered courses.

**E.g.,**

**P CS101 - Introduction to Computer Science**

**P MATH201 - Calculus I**

**F ENGL101 - English Composition I**

**GPA: 3.01667**


### Examples

```input```<br>
3<br>
CS101 3.7<br>
MATH201 3<br>
ENGL101 1 <br>
```output```<br>
P CS101 - Introduction to Computer Science<br>
P MATH201 - Calculus I<br>

F ENGL101 - English Composition I<br>

GPA: 3.01667<br>

```input```<br>
2<br>
CS101 4<br>
PHYS101 3 <br>
```output```<br>
P CS101 - Introduction to Computer Science<br>
P PHYS101 - Introduction to Physics<br>

GPA: 3.42857<br>

```input```<br>
1<br>
CHEM101 2.7 <br>
```output```<br>
P CHEM101 - Introduction to Chemistry<br>

GPA: 2.7 <br>

#### Note

- GPA= **Σcoursegrade∗coursehours / Σcoursehours**
- A course is considered _"passed"_, if its grade is at least 2

- you can use arrays or vectors.
