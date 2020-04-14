// usually in a header file we have actualy 2 parts
// 1. Function declarations
// 2. constant definitions
//
// constant definitions
#define ESC 27		// or using hex 0x1B
// Make enumeration for fg colors
enum FG {BLACK=30,RED,GREEN,YELLOW,BLUE,MAGENTA,CYAN,WHITE};
#define bg(c) (c+10)		// This is called macro definition

#define UNICODE		//For conditional combination
#define BAR "\u2590"

#define DEBUG
// The following is the information or cursor position, this information will be
// decoded by an escape sequence ESC [6n, and query reply should be a string consisting
// row and col numbers of the cursor.
typedef struct{
	int row;
	int col;
}Position;
// Making a constant in a name will make your program more meaningful
// Now we can use color names in function setfgcolor()

//function declarations
void setfgcolor(int);
void setbgcolor(int);
void setcolors(int,int);
void resetcolors(void);
void clearscreen(void);
void gotoXY(int, int);
void drawbar(int, int);
Position getscreensize(void);	//This function return a compound data (2 ints)
