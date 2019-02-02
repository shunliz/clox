/*************************************************************************
	> File Name: compiler.h
	> Author: 
	> Mail: 
	> Created Time: Thu 24 Jan 2019 07:08:40 PM EST
 ************************************************************************/

#ifndef clox_compiler_h          
#define clox_compiler_h          

#include "object.h" 
#include "vm.h"                                

bool compile(const char* source, Chunk* chunk);

#endif
