/* 
print retro time.

Takes an offset and a date format then prints out the current date + the offset
In the requested fromat.

Author: Danny Lawrence (daniel@daniescottlawrence.com)
*/
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// One Day is 60 seconds * 60 minutes * 24 hours
#define  ONEDAY 60*60*24

main(int argc, char **argv)
{
        time_t  theTime;
	char	results[100];

	/* If we dont have any arguments the exit with the help message. */
	if ( argc == 1 ){
		printf("usage: retrodate [-+]days [format]\n");
		printf("\t-days:	time in the past, 5 days ago would be -5\n");
		printf("\t+days:	time in the future, this time next week would be +7 or 7\n");
		printf("\tformat:	Use the date format to controll how the retro date is printed\n\n");
		printf("See man date for more details on formatting the date\n");
		exit(1);
	}

	/* If we have a date, then override the default of 0 */
        int offset = argc>1 ? atoi(argv[1]) : 0;
	
	/* if we have a date format, then override the default of printing epoch seconds */
	char *format = argc>2 ? argv[2] : "%s\n";
	
	/* Get the curret time */
        theTime = time((time_t *) NULL);
	/* Change the date by the offset */
        theTime += (long) (offset * ONEDAY);

	/* Format */
	strftime(results, 100, format, localtime(&theTime));
	printf("%s\n",results);

	/* Exit */
	exit(0);
}
