//mergesort.h
//the following interfaces are exposed to users

#ifndef MERGESORT_H
#include <vector>
#include <string>
#include "Card.h"

using namespace std;

void sort_int( vector<int> &a );
void sort_double( vector<double> &a );
void sort_string( vector<string> &a );
void sort_card( vector<Card> &a );

#endif
