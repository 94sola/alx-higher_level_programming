#include <stdlib.h>
#include <stdio.h>
#include <Python.h>
/**
 * print_python_list_info -  function that prints some basic
 * info about Python lists
 * @p: python list
 */
void print_python_list_info(PyObject *p)
{
	int elec;

	printf("[*] Size of the Python List = %lu\n", Py_SIZE(p));
	printf("[*] Allocated = %lu\n", ((PyListObject *)p)->allocated);
	for (elec = 0; elec < Py_SIZE(p); elec++)
		printf("Element %d: %s\n", elec, Py_TYPE(PyList_GetItem(p, elec))->tp_name);
}
