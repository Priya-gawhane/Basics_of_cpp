#include <iostream>

using namespace std;

int main() {
  int marks;
  char grade;

  cout << "Enter your marks: ";
  cin >> marks;

  if (marks >= 90 && marks< 89) {
    grade = 'A';
  } else if (marks >= 80) {
    grade = 'B';
  } else if (marks >= 70) {
    grade = 'C';
  } else if (marks >= 60) {
    grade = 'D';
  } else {
    grade = 'F';
  }

  cout << "Your grade is: " << grade << endl;

  return 0;
}