#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mystring.h"



int mystrlen( char *s ){
  int count = 0;
  while (*s != 0){
    count++;
    s++;
  }
  return count;
}

char * mystrcpy( char *dest, char *source ){
  char *a = dest;
  while (*source != 0){
    *dest = *source;
    dest++;
    source++;
  }
  return a;
}

char * mystrncat( char *dest, char *source, int n ){
  int i;
  char *end = dest;
  while (*end != 0){
    end++;
  }
  for (i = 0; i < n; i++){
    *(end + i) = *(end + i);
  }
  return dest;
}

int mystrcmp( char *s1, char *s2 ){
    while (*s1 == *s2 && *s1 != '\0'){
        s1++;
        s2++;
    }
    if (*s1 == '\0' && *s2 == '\0'){
        return 0;
    }
    if (*s1 < *s2){
        return -1;
    }
    return 1;
}

char * mystrchr( char *s, char c ){
    char *sa = s;
    while (*sa != c && *sa != '\0'){
        sa++;
    }
    if (*sa == c){
        return sa;
    } else{
        return NULL;
    }
}