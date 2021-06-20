#include "portscan.h"

/*
 * Implementation file for basic portscanner.
 * Function outlines are in the header file.
 * Technical details are stored in here.
 */


struct Port{
    short unsigned int port_number;
    char status[5];
};

struct Args{
    char ip[39];
    unsigned int *ports[]; //@TODO how to create an array out of input without
    unsigned short int timeout; // memory fuckery and great pain.

};

struct Port pScan(char ip[39], unsigned int port, unsigned short int timeout){
    






};

int parsePorts(int *input_array, int *output_array){


};

int parseArgs(int argc, char *argv[]){

    int i;

    for(i=1; i < argc; i++){
    // ^ I=1 because main considers itself the first argument, and we want to
    // skip it.
        printf("%s\n", argv[i]);
    };


};


int main(int argc, char *argv[]){
    parseArgs(argc, argv);


};








