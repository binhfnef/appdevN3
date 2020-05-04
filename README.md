The application is now available on Linux operating system.

Table of contents:

Configuration instructions

Installation instructions

Operatin instructions

File manifest

Copyright and licensing information

Contact information

Credits and acknowledgements

Configuration instructions 1.1 Create 2 new folders name appdev and public_html.
  1.2 Convert your sound file into a .wav file.
  1.3 Download your sound file into the appdev folder.

  Installation instructions 2.1 Download the source code of the application from https://github.com/binhfnef/appdev . 
  2.1.1 Click to go to the link above.
  2.1.2 Click on the green button.
  2.1.3 Choose the option Download ZIP. 
  2.2 Go to Download folder in This PC of your computer.
  2.3 Copy the ZIP file, whose name is appdev-master, to the appdev folder made previously.
  2.4 Go to appdev folder. 
  2.5 Right click on the ZIP file and choose option Extract here. You should see there are 13 files in total.
  2.6 Move 2 .php files to the the folder public_html. 2.7 Guarantee that the sound file .wav and 11 source code files must be in the same folder, in this case appdev folder.

Operating Instructions 3rd party library needed: <stdio.h>; <unistd.h>; <i386-linux-gnu/curl/curl.h>; <math.h> 3.1 Open command window. 3.2 Go to the application file, using command line cd appdev. 3.3 Listing all files in this folder, using command line ls -l. (There should be 12 files including 1 .wav file, 6 .c files, 3 .h files, 1 .md file and 1 makefile) 3.4 Compile all the .c files into .o files for execution, using command line make. 3.5 You should see 5 new-made files, including 4 .o files and 1 file name sound. 3.6 Excute the application, using command line ./sound. 3.7 The pictorial interpretation of the sound waves is displayed with its data on the top of the screen.

File manifest README.md: this file screen.c: contains screen manipulation functions screen.h: contains screen function declarations and related constants comm.c: contains function for client-server communication comm.h: contains function declaration used in comm.c makefile: contains linking rule, compiling rule, cleaning rule and archiving rule; used to compile .c files into .o files for execution testcurl.c: contains main funtion to implement curl testscreen.c: contains main function to run animation on screen. main.c: sound.c: sound.h: puttysize.php: test.php:

Copyright and licensing information

Configuration instructions
Installation instructions
Operating instructions
File manifest
Copyright and Licensing information
Contact information
Credits and acknowledgements
Configuration instructions In this section we should give users information of how to configure the operating system, software enviroment, libraries, etc. to run this application.

Installation instructions In this section we should give users information of how to install this application, what files not included in this package should be added. What command/operation should be used to install this application.

Operating instructions In this section we should give users information of how to run this application, e.g., what command-line argument can be given and what do they mean.

File manifest README.md this file. screen.c contains screen manipulation functions screen.h contains constant definitions and function declarations of screen.c comm.c contains function for client-server communication comm.h contains function declaration used in comm.c makefile contains linking rule, compiling rule, cleaning rule and archiving rule; used to compile .c file into .o files for execution testcurl.c contains main function to implement curl testscreen.c contains main function to run animation on screen

Copyright This application follows GPLv2 copyright.

Contact me via my email: ducbinhnguyen23@gmail.com
