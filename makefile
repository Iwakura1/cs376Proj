# This is a makefile for ~/robots
# Author: Tanya L. Crenshaw
CC=gcc

<<<<<<< HEAD

robots.out:	main.c robot.o robot.h username.o username.h 
	$(CC) -o robots.out main.c robot.o username.o

robot.o:	robot.c robot.h
	$(CC) -c robot.c
username.o:
	gcc -c username.c username.h
=======
robots.out:	main.c robot.o robot.h farr16.h
	$(CC) -o robots.out main.c robot.o farr16.o

robot.o:	robot.c robot.h
	$(CC) -c robot.c

farr16.o:	farr16.c farr16.h
	$(CC) -c farr16.c
>>>>>>> ce58093d154faf5df8bba27fbc9151f1b50ac34d
