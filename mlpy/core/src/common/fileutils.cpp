/*
 * File: fileutils.cpp
 * Author: K Nitesh Reddy
 * Description: This file contains the file input operations
 *              Copyright (c) 2023, K Nitesh Reddy
 */

#include <iostream>
#include <fstream>
#include <filesystem>

#include "fileutils.h"

using namespace std;

string
get_abs_path(const char *file_name)
{
    filesystem::path abs_path = filesystem::absolute(file_name);
    return abs_path.string();
}

int
parse_data_set(const string& filepath)
{
	ifstream inputFile(filepath);

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