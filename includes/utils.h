//============================================================================
// Name        : utils
// Author      : 
// Version     :
// Copyright   : Steal this code!
// Description : learn how to refactor files into a sensible directory structure
//============================================================================
#ifndef UTILS_H_
#define UTILS_H_

#include <vector>

#include "constants.h"

// Custom namespace for functions relating to utilities
namespace zw_utils
{
	//sorts vector inplace based on mySortOrder (inplace means the vector is modified)
	//returns nothing
	void sortData(const SORT_ORDER &mySortOrder,vector<process> &myProcesses);

	//gets the next process from the vector, then removes it from the vector
	//returns removed process
	process getNext(vector<process> &myProcesses);

	//returns the number of entries in the vector
	int getSize(vector<process> &myProcesses);

	//attempt to correct missing data
	//if cannot correct, then drop row
	//return number of rows in myProcesses
	int handleMissingData(vector<process> &myProcesses);
}

#endif
