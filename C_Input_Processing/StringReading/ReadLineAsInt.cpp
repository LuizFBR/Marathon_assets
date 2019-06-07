// Reference: http://sekrit.de/webdocs/c/beginners-guide-away-from-scanf.html

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

using namespace std;

int main(){

    long your_number;
    char entry[40];
    
    do{
        while(fgets(entry, 40, stdin) == NULL){
            printf("failed to read line/n");
        }
        char *endptr;
        errno = 0;
        your_number = strtol( entry, &endptr, 10); //base 10
        
        if ( errno == ERANGE ){//if value is too small or too large
            cout << "Value inputted is too small or too large! Try another number!\n";
        }
        else if ( endptr == entry ){//if no character was read;
            cout << "No intenger could be read! Chars representing intengers have to come BEFORE any other char\n";
        }
        else if(endptr == NULL && *endptr == '\n' ){ // endptr is neither end of string nor newline character
            cout << "The whole input was not read, therefore your container han't enough space!\n";
        }
        else{
            cout << "success!\n";
            break;
        }
    }while(1);

    cout << your_number << endl;
    
    return 0;
}    
