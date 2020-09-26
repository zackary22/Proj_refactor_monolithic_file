//============================================================================
// Name        : fileio
// Author      : 
// Version     :
// Copyright   : Steal this code!
// Description : learn how to refactor files into a sensible directory structure
//============================================================================
#ifndef FILEIO_H_
#define FILEIO_H_

#include <string>
#include <vector>

// Custom namespace for functions relating to fileio
namespace zw_fileio
{
	//attempt to open file 'filename' and read in all data
	//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
	int loadData(const std::string filename, vector<process> &myProcesses);

	//attempt to create or open file 'filename' to write all data to
	//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
	int saveData(const std::string filename, vector<process> &myProcesses);
}

#endif
