//strs_demo.cpp
#include <iostream>
#include "strs.h"

using namespace std;

int main()
{
  Strings s1( (char *) "testing" );
  char c;
  c = s1[2];
  cout << c << endl;	//s
  Strings s2;
  s2 = s1;
  s2.prints();		//testing
  Strings::iterator start = s2.begin();
  Strings::iterator stop = s2.end();
  for ( ; start != stop; ++start  )	//testing
    cout << *start;
  cout << endl;
  Strings temp( (char *) " eat" );
  s2.insert( 4, temp );
  s2.prints();		//test eating

  return 0;
}
