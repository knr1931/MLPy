#define PY_SSIZE_T_CLEAN
#include "Python.h"

#include <iostream>

#include "../common/fileutils.h"

using namespace std;

static PyObject *
lclassifier_process_data(PyObject* self, PyObject* args)
{
	const char *file_name;

	if(!PyArg_ParseTuple(args, "s", &file_name)) {
		return NULL;
	}

	const string filePath = get_abs_path(file_name);
	if (filePath.empty()) {
		PyErr_SetString(PyExc_RuntimeError, "Given file path is nor valid");
		return NULL;
	}

	int success;
	success = parse_data_set(filePath);
	return PyLong_FromLong(success);
}

static PyMethodDef lclaassifierMethods[] = {
	{"processdata", lclassifier_process_data, METH_VARARGS, "Populate the given Data Set"},
	{NULL,NULL,0,NULL}
};

static struct PyModuleDef lclassifier = {
	PyModuleDef_HEAD_INIT,
	"mlpy", /* name of module */
	NULL, /* module documentation, may be NULL */
	-1, /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
	lclaassifierMethods

};

PyMODINIT_FUNC
PyInit_lclassifier(void)
{
    return PyModule_Create(&lclassifier);
}