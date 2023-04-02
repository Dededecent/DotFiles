//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/	 	                            /*Update Interval*/	/*Update Signal*/
//    {"Kernel", "$HOME/Scripts/dwmblocks-distrotube/scripts/kernel",	 360,		          2},

//	{"Scripts", "$HOME/Scripts/dwmblocks-distrotube/scripts/upt",		 60,		          2},

	
	{"",	"$HOME/Scripts/MusicMain",	3,	0},
	{"", "$HOME/Scripts/memory",	 5,		              1},

	{" Updates: ", "$HOME/Scripts/pacupdate",  360,		          9},

	{"", "$HOME/Scripts/volume",     5,		              10},

	{"", "$HOME/Scripts/clock",	     20,	              0},



};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
