CFLAGS = -Wall

#TODO link (-o) all object files into the executable myexe
myexe: fileio.o utils.o proj_refactor_file.o
	g++ proj_refactor_file.o fileio.o utils.o -o myexe
	
proj_refactor_file.o: proj_refactor_file.cpp ../includes/constants.h ../includes/fileio.h ../includes/utils.h
	g++ $(CFLAGS) -c proj_refactor_file.cpp
	
fileio.o: ../fileio/fileio.cpp ../includes/constants.h ../includes/fileio.h
	g++ $(CFLAGS) -c ../fileio/fileio.cpp
	
utils.o: ../utils/utils.cpp ../includes/constants.h ../includes/utils.h
	g++ $(CFLAGS) -c ../utils/utils.cpp
	
clean:
	rm *.o myexe
	