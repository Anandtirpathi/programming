/* Author: Anand Tripathi
   Purpose: The program should display as output, the value of the three variables
            which each variable separated by a new line: correct output would be
            if XEROX, GOOGLE, and EBAY variables are printed in that order: 2, 0, 4
                */
#include <stdio.h>
#include <stdlib.h>

int main()
{   //Defining them, I'm saying the company can only be Google, Facebook, Xerox, Yahoo, eBay, Microsoft.
    enum Company { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };

    //Create three variables that had values of Xerox, Google and eBay in them.
    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;

    //displaying output
    printf("The value of xerox is: %d\n ", xerox);
    printf("The value of google is: %d\n", google);
    printf("The value of ebay is: %d\n", ebay);

    return 0;
}
