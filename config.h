/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = { "SF Mono:style=Bold:size=12", "fontawesome:size=12" };

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

//static const char col_fg_nor[]       = "#000000"; /* Unselected foreground */
//static const char col_bg_nor[]       = "#000000"; /* Unselected background */
//static const char col_fg_sel[]       = "#000000"; /* Selected foreground */
//static const char col_bg_sel[]       = "#000000"; /* Selected background */
static const char *colors[SchemeLast][2] = {
	/*     		  fg         bg       */
	//[SchemeNorm] = { col_fg_nor, col_bg_nor },
	//[SchemeSel]  = { col_fg_sel, col_bg_sel },
	[SchemeNorm] = { "#000000", "#000000"},
	[SchemeSel]  = { "#000000", "#000000"},
	[SchemeOut]  = { "#000000",   "#000000"},
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
