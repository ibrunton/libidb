/*
 *        Project:  libidb
 *       Filename:  libidb.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012-06-11 13:01
 *       Compiler:  gcc
 *
 *         Author:  Ian D Brunton (ib), iandbrunton@gmail.com
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "idb.h"

char* zero_pad (int a, int padding)
{
	char * b;
	size_t string_length = (size_t) padding;
	b = malloc (string_length);

	sprintf (b, "%0*d", padding, a);
	return b;
}

void print_usage (char* appname, char* usage)
{
	printf ("%s %s\n", appname, usage);
	return;
}

void print_version (char* appname, char* version, char* description)
{
	printf ("%s %s - %s\n", appname, version, description);
	return;
}
