//============================================================================
// Name        : utils
// Author      : 
// Version     :
// Copyright   : Steal this code!
// Description : learn how to refactor files into a sensible directory structure
//============================================================================
#include <vector>

#include "../includes/constants.h"
#include "../includes/utils.h"

//sorts vector inplace based on mySortOrder (inplace means the vector is modified)
//returns nothing
void zw_utils::sortData(const SORT_ORDER &mySortOrder,vector<process> &myProcesses){

}

//gets the next process from the vector, then removes it from the vector
//returns removed process
process zw_utils::getNext(vector<process> &myProcesses){
	process p;
	return p;
}

//returns the number of entries in the vector
int zw_utils::getSize(vector<process> &myProcesses){
	return UNIMPLEMENTED;
}

//attempt to correct missing data
//if cannot correct, then drop row
//return number of rows in myProcesses
int zw_utils::handleMissingData(vector<process> &myProcesses){
	return NO_DATA_TO_WORK_ON;
}
