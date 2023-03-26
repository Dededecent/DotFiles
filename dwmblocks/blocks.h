//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/	 	                            /*Update Interval*/	/*Update Signal*/
//    {"Kernel", "/home/oli/Scripts/dwmblocks-distrotube/scripts/kernel",	 360,		          2},

//	{"Scripts", "/home/oli/Scripts/dwmblocks-distrotube/scripts/upt",		 60,		          2},

	
	{"Mem: ", "/home/oli/Scripts/memory",	 5,		              1},

	{"Updates: ", "/home/oli/Scripts/pacupdate",  360,		          9},

	{"Volume: ", "/home/oli/Scripts/volume",     5,		              10},

	{"Clock: ", "/home/oli/Scripts/clock",	     20,	              0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
