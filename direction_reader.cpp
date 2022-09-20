/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Project 1 Task A
I wrote a program that reads a sequence of letters from cin and prints out its corresponding direction.
*/

#include <iostream>
using namespace std;
int main() 
{

string direc;
string dir1 = "R" ;
string dir2 = "L";
string dir3 = "U";
string dir4 = "D";
  
cout << "Enter a direction (R,L,U,D) : "<< endl;

cin >> direc;

if (direc == dir1)
{
cout << "Right"<< endl;
}

if (direc == dir2)
{
cout << "Left"<< endl;
}

if (direc == dir3)
{
cout << "Up"<< endl;
}
if (direc == dir4)
{
cout << "Down"<< endl;
}

return 0;

}
