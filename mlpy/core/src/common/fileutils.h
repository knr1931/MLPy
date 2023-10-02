/*
 * File: fileutils.h
 * Author: K Nitesh Reddy
 * Description: This file contains the interface for input opertions
 *              Copyright (c) 2023, K Nitesh Reddy
 */
#include <sstream>

using namespace std;

/**
  * @brief gets absolute path
  *
  * @param file_name Input Data set file name.
  * @return Returns abspath
  */
string get_abs_path(const char *file_name);

 /**
  * @brief Reads and parses the input data set
  *
  * This function reads the input data set from .csv file and
  * parses through them creating a input and output vector for later use
  * in learning algorithm
  *
  * @param filePath Path for Input data file.
  * @return Returns 0 for success otherwise Error code 1
  */
int parse_data_set(const string& filePath);