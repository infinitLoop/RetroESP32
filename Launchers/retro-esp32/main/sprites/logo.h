const uint16_t logo[18][128] = {
	{0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,0,0,0,0,0},
	{0,0,0,0,65535,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,0,0,0,0},
	{0,0,0,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,0,65535,0,0,0},
	{0,0,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,65535,0,0},
	{0,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,65535,0},
	{0,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,65535,65535,0,0,0,0,0,0,65535,65535,65535,0,0,0,0,0,65535,65535,0,0,0,0,0,0,65535,65535,65535,65535,0,0,0,0,0,65535,65535,65535,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,65535,0},
	{65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,65535,0,0,65535,65535,65535,0,0,0,0,0,0,0,0,0,0,0,65535,65535,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,65535,65535,65535,0,0,65535,65535,65535,65535,65535,65535,0,0,65535,65535,65535,0,0,65535,0,0,65535,65535,65535,0,0,65535,65535,0,0,65535,65535,65535,0,0,65535,0,0,65535,65535,65535,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,65535},
	{65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,65535,0,0,65535,65535,65535,0,0,0,0,0,0,0,0,0,0,65535,65535,65535,65535,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,65535,65535,65535,0,0,65535,65535,65535,65535,65535,65535,0,0,65535,65535,65535,0,0,65535,0,0,65535,65535,65535,0,0,65535,65535,0,0,65535,65535,65535,0,0,65535,0,0,65535,65535,65535,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,65535},
	{65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,65535,0,0,65535,65535,65535,0,0,0,65535,65535,65535,65535,65535,0,0,0,65535,65535,65535,0,0,0,65535,65535,65535,65535,65535,65535,0,0,65535,65535,65535,65535,65535,0,0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,0,0,0,0,0,65535,65535,65535,65535,0,0,0,65535,65535,65535,65535,0,0,65535,65535,65535,0,0,65535,65535,65535,65535,65535,0,0,0,65535,65535,65535,65535,65535,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,65535},
	{65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,0,0,0,65535,65535,65535,0,65535,65535,65535,0,0,65535,65535,65535,0,0,0,65535,65535,65535,65535,0,0,0,65535,65535,65535,0,65535,65535,65535,0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,0,0,65535,65535,0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,0,0,65535,65535,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,65535},
	{65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,65535,0,0,65535,65535,65535,0,0,65535,65535,65535,65535,65535,65535,65535,0,0,65535,65535,65535,65535,0,0,65535,65535,65535,0,0,0,0,65535,65535,65535,0,0,65535,65535,65535,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,0,0,65535,65535,65535,65535,65535,65535,0,0,65535,65535,65535,0,0,65535,0,0,65535,65535,65535,65535,65535,65535,65535,0,0,65535,65535,65535,0,0,65535,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,65535},
	{65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,65535,0,0,65535,65535,65535,0,0,65535,65535,65535,0,0,0,0,0,0,65535,65535,65535,0,0,0,65535,65535,65535,0,0,0,0,65535,65535,65535,0,65535,65535,65535,0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,0,0,65535,65535,65535,65535,65535,65535,0,0,65535,65535,65535,0,0,65535,0,0,65535,65535,65535,65535,65535,65535,65535,0,0,65535,65535,65535,0,0,65535,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,65535},
	{0,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,65535,0,0,65535,65535,65535,0,0,0,65535,65535,65535,65535,65535,65535,0,0,65535,65535,65535,0,0,0,65535,65535,65535,0,0,0,0,0,65535,65535,65535,65535,65535,0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,0,0,0,0,0,0,65535,65535,65535,0,0,0,0,0,65535,65535,0,0,65535,65535,65535,65535,65535,65535,65535,65535,0,0,0,0,0,65535,65535,0,0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,65535,0},
	{0,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,65535,0},
	{0,0,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,65535,0,0},
	{0,0,0,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,0,65535,0,0,0},
	{0,0,0,0,65535,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,0,0,0,0},
	{0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,0,0,0,0,0},

};