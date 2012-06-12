/*
 *        Project:  libidb
 *       Filename:  libidb.h
 *
 *    Description:  Library of functions I commonly use
 *
 *        Version:  1.0
 *        Created:  2012-06-11 13:07
 *       Compiler:  gcc
 *
 *         Author:  Ian D Brunton (ib), iandbrunton@gmail.com
 *
 */

#ifndef LIBIDB_H
#define LIBIDB_H

#include <stdio.h>

extern char* zero_pad (int, int);
extern void  print_usage (char*, char*);
extern void  print_version (char*, char*, char*);

#endif /* LIBIDB_H */
