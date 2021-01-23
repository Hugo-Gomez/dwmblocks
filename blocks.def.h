//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/					/*Update Interval*/	/*Update Signal*/	
	{"", 		"mic_status",					0,			20},
	{"", 		"wifi_status",					30,			0},
	{"", 		"eth_status",					30,			0},
	{"", 		"volume_status",				0,			10},
	/*{"", 		"free -h | grep Mem | awk '{ print \" \"$3\"/\"$2\" f:\"$7}'",				10,			0},*/
	{" ", 		"df -h | grep /dev/sda3 | awk '{ print $3\"/\"$2}'",					60,			0},
	{"", 		"battery_status", 				30,			0},
	{"", 		"date '+(%a) %d/%m %k:%M'",			5,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "   |   ";
static unsigned int delimLen = 7;
