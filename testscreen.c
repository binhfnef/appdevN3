//This file will be used to test functions in screen.c

#include <stdio.h>
#include <unistd.h>
#include "screen.h"
#include "comm.h"

int main(void){
	Position cur = getscreensize();
	char poststr[100];
	sprintf(poststr, "row-%d&col-&d", cur.row, cur.col);
	senddata(poststr, URL);
	gotoXY (1,1);
	printf("Screen size, ROW=%d, COL=%d\n", cur.row, cur.col);
    printf("HTTP post is sent to %s\n", URL);
    getchar();       //wait for the user to press the key
	getchar();
    for (int i=0; i<cur.row; i++){
        setcolors(RED, GREEN);
        clearscreen();
		float step =(float) cur.col/cur.row;
        gotoXY (i+1, step*i+1);
        printf("HELLO\n");
        usleep(250000);
}

    gotoXY(14, 35);
    setfgcolor(BLUE);
    printf("e1901100\n");
    getchar (); // wait for the user to pres a key
    drawbar(30, 30);
    drawbar(50, 30);

    getchar();
    resetcolors();
    printf("This line is back to default color\n");
}




