//mergemain.cpp
#include <vector>
#include <math.h>
#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "mergesort.h"

using namespace std;

template <class T>
void print(vector<T> &a)
/* PURPOSE:  print all elements in a vector
   RECEIVES: a - the vector to print
*/ 
{  int i;   
   for (i = 0; i < a.size(); i++)
      cout << a[i] << " ";
   cout << "\n";
}

//demo of using mergesort
int main()
{
   /*
	sorting integers generated by random number generator
   */
   int seed = static_cast<int>(time(0));
   srand(seed);
   vector<int> v(20);
   time_t  time_before, time_after;	//to time the sorting time
   for ( int i = 0; i < v.size(); i++)
      v[i] = rand() % 100;
   print( v );
   time_before = time ( ( time_t * ) 0 );//get time and date in seconds
   sort_int( v );
   time_after = time ( ( time_t * ) 0 );//get time and date in seconds
   print(v);
   cout << "Time to sort " << v.size() << " integers is: "
	<< time_after - time_before << " seconds" << endl; 

  /*
	Sort strings
	Use text file "mergesort.cpp" as source of input strings
  */
  static char buffer[100];
  vector<string> vs;		//vector to hold strings	
  FILE *fp;
  if ( ( fp = fopen ( "mergesort.cpp", "rt" )) == NULL  ){
    cout << "Error opening file mergesort.cpp. " << endl;
    return 1;
  }
  while ( fscanf( fp,  "%s", buffer ) != EOF )
    vs.push_back( string ( buffer ) );  //push word read into vector
  sort_string( vs );
  cout << "Sorted text: *************" << endl;
  print ( vs );

  return 0;
}

