#ifndef RAND64SW_H
#define RAND64SW_H
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/* Software implementation.  */

/* Input stream containing random bytes.  */
//FILE *urandstream;

/* Initialize the software rand64 implementation.  */
void
software_rand64_init (void); 

//Use for the case where we have a file: "/F"
void setFileName(char *file);

/* Return a random value, using software operations.  */
unsigned long long
software_rand64 (void); 

/* Finalize the software rand64 implementation.  */
void
software_rand64_fini (void); 

bool
writebytes (unsigned long long x, int nbytes); 

#endif //RAND64-SW_H
