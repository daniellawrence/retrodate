###############################
# retrodate
###############################
CC=gcc
CFALGS=-c -Wall
LDFALGS=
SOURCES=retrodate.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=retrodate
prefix=/usr/local
#

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@
