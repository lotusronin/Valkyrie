#include "filenames.h"
#include <iostream>
#include <string>
#include <stdio.h>

FileNames::FileNames()
{
	name = "Hello";
}

FileNames::~FileNames()
{
}

void FileNames::get_name(std::vector<string>* pnames, std::string filepath)
{
	const char* fpath = filepath.c_str();
	(*pnames).clear();
	dr=opendir(fpath);
	
	while (drnt=readdir(dr))
	{
		name = drnt->d_name;
		(*pnames).push_back(name);
	}
	closedir(dr);
	//return names.back();
}
