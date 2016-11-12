#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>
#include <dlfcn.h>
#include <stdlib.h>

int (*some_function) (int);

bool init_library ( const char* libName, const char* funcName ) {

	void *hdl = dlopen (libName, RTLD_LAZY);
	if ( NULL == hdl ) {
		printf("hdl NULL \n");
		return false;
	}
	some_function = (int (*)(int))dlsym(hdl, funcName);
	if ( NULL == some_function ) {
		printf("function NULL\n");
		return false;
	}
	return true;
}

int main(int argc, char **argv )
{
	const char* prefix = "./";
	const char* libName = argv[1];
//	char* libPath = concat(prefix, libName);
	const char* funcName =argv[2];
	int intArg = atoi( argv[3]);

//	printf("%s , %s, %d \n", libName, funcName, intArg);


	if ( init_library( libName, funcName ))
		printf("%d\n", some_function(intArg) );
	else
		printf("library was not loaded \n");

	return 0;
}

