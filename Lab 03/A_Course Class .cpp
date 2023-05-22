#include <bits/stdc++.h>
#include <string.h>
#include <cmath>
using namespace std;

///////////////////////////////
class Course
{
private:
  // Member variables
  string ccode, cname;
  float cgrade;
  int chours;
  bool registered;

public:
  // Constructors
  Course();
  Course(string code, string name, int hours);
  // Member Functions
  bool is_registered();
  bool is_passed();
  string get_name() const;
  string get_code() const;
  float get_grade() const;
  int get_hours() const;
  void set_registered(bool);
  void set_grade(float);
  void print_passed_failed_courses();
  float calc_gpa();
};
///////////////////////////////

int main()
{
  int more = 1, numberOfCourses, i = 0;
  cin >> numberOfCourses;
  string listOfCourses[5];
  float gradeOfCourse, GPA = 0, numberOfHours = 0;
  // Allowed Courses
  Course cs("CS101", "Introduction to Computer Science", 3);
  Course ma("MATH201", "Calculus I", 2);
  Course ph("PHYS101", "Introduction to Physics", 4);
  Course ch("CHEM101", "Introduction to Chemistry", 3);
  Course en("ENGL101", "English Composition I", 1);

  for (int i = 0; i < numberOfCourses; i++)
  {
    cin >> listOfCourses[i] >> gradeOfCourse;
    // Checking Wether A given course  is Registered or not
    if (cs.get_code() == listOfCourses[i])
    {
      cs.set_registered(true);
      cs.set_grade(gradeOfCourse);
      GPA += cs.calc_gpa();
    }
    else if (ma.get_code() == listOfCourses[i])
    {
      ma.set_registered(true);
      ma.set_grade(gradeOfCourse);
      GPA += ma.calc_gpa();
    }
    else if (ph.get_code() == listOfCourses[i])
    {
      ph.set_registered(true);
      ph.set_grade(gradeOfCourse);
      GPA += ph.calc_gpa();
    }
    else if (ch.get_code() == listOfCourses[i])
    {
      ch.set_registered(true);
      ch.set_grade(gradeOfCourse);
      GPA += ch.calc_gpa();
    }
    else if (en.get_code() == listOfCourses[i])
    {
      en.set_registered(true);
      en.set_grade(gradeOfCourse);
      GPA += en.calc_gpa();
    }
  }
  if (cs.is_registered() == true)
  {
    cs.print_passed_failed_courses();
    numberOfHours += cs.get_hours();
  }
  if (ma.is_registered() == true)
  {
    ma.print_passed_failed_courses();
    numberOfHours += ma.get_hours();
  }
  if (ph.is_registered() == true)
  {
    ph.print_passed_failed_courses();
    numberOfHours += ph.get_hours();
  }
  if (ch.is_registered() == true)
  {
    ch.print_passed_failed_courses();
    numberOfHours += ch.get_hours();
  }
  if (en.is_registered() == true)
  {
    en.print_passed_failed_courses();
    numberOfHours += en.get_hours();
  }
  if (gradeOfCourse >= 2.0)
    cout << endl;
  cout << endl;
  cout << "GPA: " << GPA / numberOfHours << endl;
}

// Default constructor
Course ::Course()
{
  ccode = cname = "";
  chours = 0;
  cgrade = 0;
  registered = false;
}
// Another Constructor
Course ::Course(string code, string name, int hours)
{
  ccode = code;
  cname = name;
  chours = hours;
  cgrade = 0;
  registered = false;
}
void Course ::print_passed_failed_courses()
{
  string s;
  if (is_passed())
    s = "P ";
  else if (!is_passed())
    s = "F ";
  s += ccode;
  s += " - ";
  s += cname;
  if (s[0] != 'P')
    cout << endl;
  cout << s << endl;
}
float Course ::calc_gpa()
{
  float gpa = 0, numerator = 0;
  // TODO ====> if (!is_passed()) cgrade = 0 ;
  gpa += chours * cgrade;
  return gpa;
}
bool Course ::is_registered() { return registered; }
bool Course ::is_passed() { return (cgrade >= 2.0); }
string Course ::get_name() const { return cname; }
string Course ::get_code() const { return ccode; }
float Course ::get_grade() const { return cgrade; }
int Course ::get_hours() const { return chours; }
void Course ::set_registered(bool inputRegistration) { registered = inputRegistration; }
void Course ::set_grade(float inputGrade) { cgrade = inputGrade; }