//This file will be used to test functions in screen.c

#include <stdio.h>
#include <unistd.h>
#include "screen.h"
#include "comm.h"
#include "sound.h"


int main(void){
	FILE *fp;
	fp = fopen("test.wav", "r");
	WAVheader h = readwavhdr (fp);
	displayWAVhdr(h);
	clearscreen();
	wavdata(h, fp); //to cal the value and display them as a barchart.
	fclose(fp);	
	getchar();
	
}




