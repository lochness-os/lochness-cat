//
// file: program.cpp
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include "program.hpp"
#include <cstdio> 
#include <cstdlib>
#include <cstring>
#include <cerrno>
#include <vector>

//
// Greet the user
//
const char * greet(void)
{
    return "Hello, C++ Developer.";
} // end of functions greet

//
// foundation of the program and related
// application logic must be implemented
// in the foundation.
//
int foundation(int argc, char **argv)
{
    std::vector<FILE*> files;
    if(argc < 2)
    {
        files.push_back(stdin);
    } // end if
    else
    {
        for(int i = 1; i < argc; i++)
        {
            if(strcmp(argv[i], "-") == 0)
            {
                files.push_back(stdin);
                continue;
            } // end if

            FILE* f = fopen(argv[i], "r");
            if(!f)
            {
                fprintf(stderr, "%s: %s: %s\n", argv[0], argv[i], strerror(errno));
                continue;
            } // end if

            files.push_back(f);
        } // end for

    } // end else

    for (FILE *&f : files)
    {
        while (char c = fgetc(f))
        {
            if (feof(f))
            {
                break;
            } // end if

            fputc(c, stdout);
        } // end while

    } // end for
    return EXIT_SUCCESS;
} // end of function foundation
