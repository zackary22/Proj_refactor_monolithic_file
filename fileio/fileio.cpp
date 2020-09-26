//============================================================================
// Name        : fileio
// Author      : 
// Version     :
// Copyright   : Steal this code!
// Description : learn how to refactor files into a sensible directory structure
//============================================================================
#include <iostream>
#include <string>
#include <vector>

#include "../includes/constants.h"
#include "../includes/fileio.h"

//attempt to open file 'filename' and read in all data
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int zw_fileio::loadData(const std::string filename, vector<process> &myProcesses){
	return UNIMPLEMENTED;
}

//attempt to create or open file 'filename' to write all data to
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int zw_fileio::saveData(const std::string filename, vector<process> &myProcesses){
	return UNIMPLEMENTED;
}
