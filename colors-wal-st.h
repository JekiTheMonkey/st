static const char *colorname[] = {

  	/* 8 normal colors */
	[0] = "#131313", /* black   */ /* idk */
	[1] = "#2C344A", /* */
	[2] = "#2D3761", /* */
	[3] = "#553C55", /* */
	[4] = "#54396F", /* purple */
	[5] = "#364B58", /* */
	[6] = "#354F5F", /* */
	[7] = "#989AA0", /* */

  	/* 8 bright colors */
	[8]  = "#EEEEEE", /* white   */ /* some vim elements, text, number lines */
	[9]  = "#ED1C24", /* red     */ /* errors */
	[10] = "#2D3761", /* dark blue */
	[11] = "#54396F", /* purple */ /* ncmpcpp artist */
	[12] = "#54396F", /* purple */
	[13] = "#3D3761", /* */
	[14] = "#54396F", /* purple */
	[15] = "#2D3761", /* */

  	/* special colors */
	[256] = "#131313", /* background */ /* idk */
	[257] = "#EEEEEE", /* foreground */ /* regular text */
	[258] = "#69696F", /* cursor */ /* cursor */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
 unsigned int background = 0;
