retrodate
---------

Once you have Makefile and retrodate.c in the same directory run the following command
```sh
  make
```
You should see the following
```sh
make
gcc    -c -o retrodate.o retrodate.c
gcc  retrodate.o -o retrodate
```


Then just run the compiled binary to view to how to...

```sh
./retrodate 
usage: retrodate [-+]days [format]
	-days:	time in the past, 5 days ago would be -5
	+days:	time in the future, this time next week would be +7 or 7
	format:	Use the date format to controll how the retro date is printed
```

See man date for more details on formatting the date

