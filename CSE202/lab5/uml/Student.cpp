#include <iostream>
#include <string>

#include "Student.h"

using namespace std;

Student::Student(): Person(), mjor("")
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -117--74--108--126-4571c031:1547e2e8c07:-8000:000000000000088F begin
{
}
// section -117--74--108--126-4571c031:1547e2e8c07:-8000:000000000000088F end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element

Student::Student(string n, string d, string g, string m): Person(n, d, g), mjor(m)
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -117--74--108--126-4571c031:1547e2e8c07:-8000:0000000000000891 begin
{
}
// section -117--74--108--126-4571c031:1547e2e8c07:-8000:0000000000000891 end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element

//prints 
void Student::print()
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -117--74--108--126-4571c031:1547e2e8c07:-8000:000000000000089A begin
{
	Person::print();
	cout << "	Student, Major: " << mjor << endl;
}
// section -117--74--108--126-4571c031:1547e2e8c07:-8000:000000000000089A end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element