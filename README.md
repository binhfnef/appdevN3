The application is now available on Linux operating system.

-Table of contents:

1. Configuration instructions

2. Installation instructions

3. Operatin instructions

4. File manifest

5. Copyright and licensing information

6. Contact information

7. Credits and acknowledgements
-----------------------------------------------------------------
1. Configuration instructions 1.1 Create 2 new folders name appdev and public_html.
    1.2 Convert your sound file into a .wav file.
    1.3 Download your sound file into the appdev folder.
    
2.Installation instructions 2.1 Download the source code of the application from https://github.com/binhfnef/appdev . 
    2.1.1 Click to go to the link above.
    2.1.2 Click on the green button.
    2.1.3 Choose the option Download ZIP. 
    2.2 Go to Download folder in This PC of your computer.
    2.3 Copy the ZIP file, whose name is appdev-master, to the appdev folder made previously.
    2.4 Go to appdev folder. 
    2.5 Right click on the ZIP file and choose option Extract here. You should see there are 13 files in total.
    2.6 Move 2 .php files to the the folder public_html. 2.7 Guarantee that the sound file .wav and 11 source code files must be in the same folder, in this case appdev folder.

3.Operating instructions Section to tell the user how to run this application. First compile : Then run:

4. File manifest README.md: this file screen.c: contains screen manipulation functions screen.h: contains screen function declarations and related constants comm.c: contains function for client-server communication comm.h: contains function declaration used in comm.c makefile: contains linking rule, compiling rule, cleaning rule and archiving rule; used to compile .c files into .o files for execution testcurl.c: contains main funtion to implement curl testscreen.c: contains main function to run animation on screen. main.c: sound.c: sound.h: puttysize.php: test.php:

5. Copyright and licensing information

     File manifest README.md this file. screen.c contains screen manipulation functions screen.h contains constant definitions and          function declarations of screen.c comm.c contains function for client-server communication comm.h contains function declaration used    in comm.c makefile contains linking rule, compiling rule, cleaning rule and archiving rule; used to compile .c file into .o files for    execution testcurl.c contains main function to implement curl testscreen.c contains main function to run animation on screen

    Copyright This application follows GPLv2 copyright.
    
6. Contact me via my email: ducbinhnguyen23@gmail.com

7. Credits and acknowledgements Acknowledgements: Gao Chao.
