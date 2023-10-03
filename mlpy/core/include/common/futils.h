/*
 * File: futils.h
 * Author: K Nitesh Reddy
 * Description: This file contains the interface for input opertions
 *              Copyright (c) 2023, K Nitesh Reddy
 */
#include <sstream>

using namespace std;

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
int get_dataset(const string& filePath);