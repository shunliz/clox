/*************************************************************************
	> File Name: scanner.c
	> Author: 
	> Mail: 
	> Created Time: Thu 24 Jan 2019 07:10:20 PM EST
 ************************************************************************/

#include <stdio.h>    
#include <string.h>   

#include "common.h"   
#include "scanner.h"  

typedef struct {      
  const char* start;  
  const char* current;
  int line;           
} Scanner;            

Scanner scanner;  

void initScanner(const char* source) {
      scanner.start = source;             
      scanner.current = source;           
      scanner.line = 1;                   

}    
