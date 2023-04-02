//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/	 	                            /*Update Interval*/	/*Update Signal*/
//    {"Kernel", "/home/oli/Scripts/dwmblocks-distrotube/scripts/kernel",	 360,		          2},

//	{"Scripts", "/home/oli/Scripts/dwmblocks-distrotube/scripts/upt",		 60,		          2},

	
<<<<<<< HEAD
	{"",	"/home/oli/Scripts/MusicMain",	3,	0},
	{"", "/home/oli/Scripts/memory",	 5,		              1},

	{" Updates: ", "/home/oli/Scripts/pacupdate",  360,		          9},

	{"", "/home/oli/Scripts/volume",     5,		              10},

	{"", "/home/oli/Scripts/clock",	     20,	              0},
=======
	{" Mem: ", "/home/oli/Scripts/memory",	 5,		              1},

	{" Updates: ", "/home/oli/Scripts/pacupdate",  360,		          9},

	{" Volume: ", "/home/oli/Scripts/volume",     5,		              10},

	{" Clock: ", "/home/oli/Scripts/clock",	     20,	              0},
>>>>>>> 480dec5f0ba0cb288e55dabf26281f6f412a43ee
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
