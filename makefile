# This is a makefile for ~/robots
# Author: Tanya L. Crenshaw
CC=gcc

robots.out:	main.c robot.o robot.h username.o username.h farr16.h farr16.o 
	$(CC) -o robots.out main.c robot.o username.o farr16.o

robot.o:	robot.c robot.h
	$(CC) -c robot.c
username.o:	username.c username.h
	gcc -c username.c

farr16.o:	farr16.c farr16.h
	$(CC) -c farr16.c
