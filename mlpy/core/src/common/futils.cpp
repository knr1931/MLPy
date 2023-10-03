/*
 * File: futils.cpp
 * Author: K Nitesh Reddy
 * Description: This file contains the file input operations
 *              Copyright (c) 2023, K Nitesh Reddy
 */

#include <iostream>
#include <fstream>
#include <filesystem>

#include "common/futils.h"

using namespace std;

string
get_abs_path(const char *file_name)
{
    filesystem::path abs_path = filesystem::absolute(file_name);
    return abs_path.string();
}

int
get_dataset(const string& filepath)
{
    string abs_file_path = get_abs_path(filepath.c_str());
    cout << "Absolute File Path: " << abs_file_path << endl;
    
	ifstream inputFile(abs_file_path);

    if (!inputFile.is_open()) {
        cerr << "Failed to open data file." << endl;
        return 1;
    }

    string line;
    int count = 0;
    while (getline(inputFile, line)) {
        // cout << line << endl;
        count++;
    }
    inputFile.close();
    cout << count << endl;
	return 0;
}