#include <iostream>

#include "common/futils.h"


using namespace std;

int
main()
{


    const string filePath = "data/train_data_set.csv";

    cout << get_dataset(filePath) << endl;

 	return 0;
}