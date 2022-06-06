#include "bin_dump.h"

int main()
{
    char* buff = "abcdefg1234567ABCDEFG";

    // output on stdout without title
    dump( NULL, buff, 100, NULL);

    // output on stdout with title
   dump( NULL, buff, 100, "this is a normal title");

   // output on stderr without title
   dump( stderr, buff, 100, NULL);

   // output on stdout with title
   dump( stderr, buff, 100, "this is an error title");

    return 0;
}
