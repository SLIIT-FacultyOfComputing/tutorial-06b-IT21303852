#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int no, char name[]) {
  studentId = no;
  strcpy(sname, name);
}

// Display StudentId and Name
void Student::display() {
  cout << "Student ID: " << studentId << endl;
  cout << "Student name: " << sname << endl;
}
