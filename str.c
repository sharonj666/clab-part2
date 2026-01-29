#include <stdio.h>
#include <assert.h>

#include "string.h"


// Return the length of the string pointed to by "s".
//
// Note: C standard library function strlen accomplishes
// exactly the same functionality as string_len. In this exercise,
// please do not use strlen. In subsequent exercises (list.c, htable.c), 
// it is recommended that you use strlen instead of string_len
int string_len(char *s)
{
  // TODO: Your code here.

}

// Compare strings "s1" and "s2". It returns less than, equal to or greater than zero
// if "s1" is found to be less than, match, or larger than "s2" alphabetically.
// For example, string_cmp("aa", "aaa") should return a negative number
// and string_cmp("aa", "a0") should return a positive number.
// Note that we use the ASCII values of characters as basis for comparison.
// As the ASCII value of 'a' is greater than the ASCII value of '0',
// "aa" is considered to be greater than "a0".
//
// Important: Characters should be compared as unsigned values (like strcmp does).
// This matters for characters with values > 127.
//
// Note: C standard library function strcmp accomplishes
// exactly the same functionality as string_cmp. In this exercise,
// please do not use strcmp. In subsequent exercises (list.c, htable.c), 
// it is recommended that you use strcmp instead of string_cmp.
int string_cmp(char *s1, char *s2)
{
  // TODO: Your code here.

}

// Convert integer x into hex format and store the resulting hex string to "str".
// For example, if x=16, then str should be "00000010".
// If x=26, then str should be "0000001a".
//
// Requirements:
// - The output must be exactly 8 lowercase hex characters, zero-padded on the left
// - Followed by a null terminator (so 9 bytes total)
// - Use lowercase letters 'a'-'f' for hex digits 10-15
//
// We assume the caller has allocated an array of at least 9 characters for "str".
// Note: please do not use formatted output, such as sprintf
void int_to_hex(unsigned int x, char *str)
{
  // TODO: Your code here.
}

