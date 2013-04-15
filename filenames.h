#ifndef FILENAMES_H
#define FILENAMES_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <dirent.h>
#include <vector>

using namespace std;

class FileNames{
	private:
	string name;
	struct dirent *drnt;
	DIR *dr;
	
	
	public:
	FileNames();
	~FileNames();
	void get_name(std::vector<string>* pnames, std::string filepath);
	
	
};



#endif
