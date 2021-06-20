#ifndef PORTSCAN_H
#define PORTSCAN_H

/*
 * Header file for basic portscanner. Prototype 1.
 * Will simply contain portscanning function using sockets,
 * and potentially an input parsing function for the creation
 * of the array which contains which ports should be scanned.
 */

#include<sys/socket.h> //For actually connecting to sockets, duh.
#include<string.h> //String class for easy readability.
#include<stdio.h> //Input/output for printing output to terminal.

struct Args;

/*
 * IP Address (size 39 character array)
 * Port numbers (Array of integers representing ports)
 * Timeout (short unsigned integer)
 */

struct Port;

/*
 * Port Number:
 * Open or Closed
 * @TODO Time on return
 * @TODO far more in prototype 2.
 */

struct Port pScan(char ip[39], unsigned int port, unsigned short int timeout);

/*
 * Takes in an IP address (Allows for IPV4 or IPV6, max size is 39+1(/0)
 * Takes in a port and a timeout.
 * Attempts to open a socket with the port to test whether or not the port
 * is open. If there is a response, return a struct with the following:
 */

int parsePorts(int *input_array, int *output_array);

/*
 * Takes in a pointer to a list of variable size (list of ports).
 * Takes in a pointer of size 65,535, fills [0] with filler (so that 
 * we can use the index to determine what to scan).
 *
 * Fills all output_array entries to be scanned with a 1 
 * if they are denoted in the input array. If they are not to be scanned,
 * adds in a 0.
 *  *@TODO Multithread???
 */

int parseArgs(int argc, char *argv[]);

/*
 * Takes in the count and list of args.
 * Splits args into IP, timeout and ports.
 * Passes ports to parsePorts. Converts IP and timeout to a readable
 * format for the socket library.
 *
 * Keeps an eye out for a -h, --help, or help input to display the
 * the help page.
 */

// @TODO ^^^ Might be a decent idea to write an argument parsing library
// separately in the future to both clean this code up and make future
// programs a bit easier to develop. For now though, we can write a simple
// function to do it here and build off of the logic in a separate project.





#endif
