#include <bits/stdc++.h>
using namespace std;
using namespace std;

class Course
{
public:
  string ccode;
  string cname;
  float chours;

  Course(string code, string name, float hours)
      : ccode(code), cname(name), chours(hours) {}
};

class Student
{
public:
  string scode, sname;
  vector<Course> courses;
  float gpa;
  float totalHours;

  Student(string scode, string sname)
      : scode(scode), sname(sname), gpa(0), totalHours(0)
  {
    courses.push_back(Course("CS101", "Introduction to Computer Science", 3));
    courses.push_back(Course("MATH201", "Calculus I", 4));
    courses.push_back(Course("PHYS101", "Introduction to Physics", 4));
    courses.push_back(Course("CHEM101", "Introduction to Chemistry", 3));
    courses.push_back(Course("ENGL101", "English Composition I", 3));
  }

  void register_course(string ccode, float cgrade);
  float calc_gpa() const { return gpa; }
};

bool compareStudents(const Student &s1, const Student &s2);

int main()
{
  int numberOfStudents;
  cin >> numberOfStudents;
  vector<Student> students;
  string studentCode, studentName, courseCode;
  float courseGrade;

  for (int i = 0; i < numberOfStudents; i++)
  {
    cin >> studentCode >> studentName;
    Student student(studentCode, studentName);
    for (int j = 0; j < 5; j++)
    {
      cin >> studentCode >> courseGrade;
      student.register_course(studentCode, courseGrade);
    }
    students.push_back(student);
  }
  sort(students.begin(), students.end(), compareStudents);
  for (Student student : students)
  {
    cout << student.sname << " " << student.calc_gpa() << "\n\n";
  }
  return 0;
}
void Student ::register_course(string ccode, float cgrade)
{
  for (int i = 0; i < courses.size(); i++)
  {
    if (courses[i].ccode == ccode)
    {
      gpa = ((gpa * totalHours) + (cgrade * courses[i].chours)) / (totalHours + courses[i].chours);
      totalHours += courses[i].chours;
      break;
    }
  }
}

bool compareStudents(const Student &s1, const Student &s2)
{
  if (s1.calc_gpa() > s2.calc_gpa())
    return true;
  return false;
}
