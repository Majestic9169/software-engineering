// Restriction-2.h
/*
 * Default parameters to be supplied only in a header file
 * and not in the definition of a function
 *
 */

void g(int, double, char = 'a'); // defaults char
void g(int, double = 0.0, char); // defaults double and char
void g(int = 0, double, char);   // defaults int, double, char
