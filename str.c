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
  int count=0;
  while(*s!='\0')
  {
      count++;
      s++;
  }
  return count;
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
  if (s1==NULL && s2==NULL)
  {
      return 0;
  }
  if (s1==NULL)
  {
      return -1;
  }
  if (s2==NULL)
  {
      return 1;
  }
  while(*s1!='\0' && *s2!='\0')
  {
      if ((unsigned char)*s1 != (unsigned char)*s2){
          return (unsigned char)(*s1)-(unsigned char)(*s2);
      }
      s1++;
      s2++;
  }
  return (unsigned char)(*s1)-(unsigned char)(*s2);

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
  //convert x to hex and store in str
  for (int i=7; i>=0; i--)//starting from the end of str to store hex digits
  {
      int digit = x % 16; // Get the least significant hex digit:2^4=16
      if (digit < 10)
      {
          str[i] = '0' + digit;
      }
      else
      {
          str[i] = 'a' + (digit - 10);
      }
      x /= 16;
  }
  str[8] = '\0';
  // Ensure the output is exactly 8 characters long
  for (int i = 0; i < 8; i++)
  {
      if (str[i] == '\0')
      {
          str[i] = '0';
      }
  }
}
