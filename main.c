/**
 * main.c
 * 
 * The main entrypoint of the "I really love robots" program.  The
 * program prints the phrase "I really love robots!" to the screen.
 *
 * @author Tanya L. Crenshaw
 * @since August 2013
 *
 */
#include "robot.h"
#include "farr16.h"

/**
 * main()
 *
 * The main entrypoint of the program.
 * 
 * @param command line arguments.
 * 
 * @returns nothing.
 */

#include "username.h"
int main(int argc, const char * argv[])
{

  // Check the command line arguments.
  if((argc != 1) && (argc !=2)) {
    printf("usage: %s <number> \n", argv[0]);
    return -1;
  }

  if(argc == 1){
    robPrintAscii();
    return 0;
  }

  // Convert the command-line argument to a number.
  int num = atoi(argv[1]);

  robPrintAscii();

  robPrintMessage(num);

  farr16();
  username2();

  return 0;
}
