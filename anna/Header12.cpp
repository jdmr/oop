#include <iostream>
#include <string>
#include <fstream>
using namespace std;


//hope it works
int main(){
ofstream outFile("fileA.txt", ios::out | ios::app);

string firstName;
string middleInitial;
string lastName;

unsigned long employeeNumber;
char choice;

do {

  cout<< "Enter first name ";
  cin>> firstName;
  cout<< "Enter middle name ";
  cin>> middleInitial;
  cout<< "Enter last name ";
  cin>> lastName;
  cout<< "Enter your employee Number ";
  cin>> employeeNumber;

  outFile<< firstName<< '\n' << middleInitial << '\n' << lastName << '\n' << employeeNumber <<endl;

  cout<<"Would you like to add another Employee? :"<<endl;
  cout<<"Enter y/n"<<endl;
  cin >> choice;
} while(choice == 'y');

  outFile.close();
  ifstream inFile("fileA.txt");


  return 0;
}
