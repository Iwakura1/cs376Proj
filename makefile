# This is a makefile for ~/robots
# Author: Tanya L. Crenshaw
CC=gcc

robots.out:	main.c robot.o robot.h farr16.h
	$(CC) -o robots.out main.c robot.o farr16.o

robot.o:	robot.c robot.h
	$(CC) -c robot.c

farr16.o:	farr16.c farr16.h
	$(CC) -c farr16.c
