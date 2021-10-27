#include <stdio.h>

char to_upper_case(char c){
    return (c>=97 && c<=122)? c-32:c; 
}