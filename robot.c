/**
 * robot.c
 *
 * A file that contains the supporting functions for main() in the
 * ~/robots example source for Software Engineering.
 *
 * @author Tanya L. Crenshaw & Matthew Farr
 * @since August 2014
 *
 */

#include "robot.h"

/**
 * robPrintMessage
 *
 * This function prints the message, "I really* love robots!"
 *
 * @param num the number of times the message should print the word
 * "really"
 *
 * @returns none 
 */
void robPrintMessage(int num)
{
  int i = 0;


  printf("Matthew Garand and Matthew Farr");
  for(i; i < num; i++)
    {
      printf("really ");
    }
  
  printf("loves robots!\n");
  
  return;
}

/**
 * robPrintAscii
 *
 */
void robPrintAscii(void)
{
  printf("    i_i    \n"
	 "   [^_^]   \n"
	 "   [D_D]   \n"
	 "  /|___|\\  \n"
         "   d   b   \n"
         "     i_i    \n"
         "             [^_^]   \n"
         "             [D_D]   \n"
         "            /|___|\\  \n"
         "             d   b   \n"
         "                       i_i    \n"
         "                      [^_^]   \n"
         "                      [D_D]   \n"
         "                     /|___|\\  \n"
         "                      d   b   \n");


}
