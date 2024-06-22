/* See LICENSE file for copyright and license details. */
/* Constants */
#define TERMINAL "st"

/* appearance */
static const unsigned int borderpx = 3;		  /* border pixel of windows */
static const unsigned int snap = 32;		  /* snap pixel */
static const unsigned int systraypinning = 0; /* 0: sloppy systray follows selected monitor, >0: pin systray to monitor X */
static const unsigned int systrayspacing = 2; /* systray spacing */
static const int systraypinningfailfirst = 1; /* 1: if pinning fails, display systray on the first monitor, False: display systray on the last monitor*/
static const int showsystray = 1;			  /* 0 means no systray */

static const unsigned int gappih = 20; /* horiz inner gap between windows */
static const unsigned int gappiv = 10; /* vert inner gap between windows */
static const unsigned int gappoh = 10; /* horiz outer gap between windows and screen edge */
static const unsigned int gappov = 30; /* vert outer gap between windows and screen edge */
static const int swallowfloating = 1;  /* 1 means swallow floating windows by default */
static const int smartgaps = 0;		   /* 1 means no outer gap when there is only one window */
static const int showbar = 1;		   /* 0 means no bar */
static const int topbar = 1;		   /* 0 means bottom bar */
static const int user_bh = 27;		   /* 0 means that dwm will calculate bar height, >= 1 means dwm will user_bh as bar height */
// static const char *fonts[]          = { "Ubuntu:size=10", "ubuntu:pixelsize=10:antialias=true:autohint=true"  };
static const char *fonts[] = {"SFProDisplay-Regular:size=11", "JoyPixels:pixelsize=9:antialias=true:autohint=true"};
//
static const char dmenufont[] = "monospace:size=20";

//"-*-Ubuntu-r-*-*-16-*-*-*-*-*-*-*";

static const unsigned int transparency = 1;

// theme
// #include "themes/gruvchad.h"
// #include "themes/orange.h"
// #include "themes/green.h"
// #include "themes/bluegrey.h"
// #include "themes/violet.h"

#include "themes/gruvbox.h"

static char *colors[][3] = {
	// fg           bg           border
	[SchemeNorm] = {normfgcolor, normbgcolor, normbordercolor},
	[SchemeSel] = {selfgcolor, selbgcolor, selbordercolor},

	[SchemeStatus] = {selfgcolor, normbgcolor, selfgcolor},		  // Statusbar right {text,background,not used but cannot be empty}
	[SchemeTagsSel] = {normfgcolor, normbordercolor, selfgcolor}, // Tagbar left selected {text,background,not used but cannot be empty}
	[SchemeTagsNorm] = {selbordercolor, normbgcolor, selfgcolor}, // Tagbar left unselected {text,background,not used but cannot be empty}
	[SchemeInfoSel] = {selfgcolor, selbgcolor, selfgcolor},		  // infobar middle  selected {text,background,not used but cannot be empty}
	[SchemeInfoNorm] = {selbordercolor, normbgcolor, selfgcolor}, // infobar middle  unselected {text,background,not used but cannot be empty}

};

/* commands */
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
static const char *dmenucmd[] = {"dmenu_run", "-b", "-m", dmenumon, "-fn", dmenufont, "-nb", normbgcolor, "-nf", normfgcolor, "-sb", selbgcolor, "-sf", selfgcolor, NULL};
/* commands */
static const char *termcmd[] = {TERMINAL, NULL};
static const char *browsercmd[] = {"firefox", NULL};
static const char *screenshotcmd[] = {"flameshot", "gui", NULL};
static const char *instantswitchcmd[] = {"rofi", "-show", "window", "-kb-row-down", "Alt+Tab,Down", "-kb-row-up", "Alt+Ctrl+Tab,Up", "-kb-accept-entry", "!Alt_L,!Alt+Tab,Return", "-me-select-entry", "", "-me-accept-entry", "MousePrimary", NULL};
static const char *betterlockscreen[] = {"betterlockscreen.sh", NULL};

static const char *rootmenu[] = {"xmenu.sh", NULL};

/* launcher commands (They must be NULL terminated) */
static const char *surf[] = {"surf", "duckduckgo.com", NULL};
static const char *firefox[] = {"firefox-developer-edition", "duckduckgo.com", NULL};
static const char *chromium[] = {"chromium", "duckduckgo.com", NULL};
static const char *kittyterm[] = {"kitty", NULL, NULL};
static const char *xkill[] = {"/bin/sh -c", "xkill", NULL};
// static const char *explorer[] = {"thunar", "/home/javier", NULL};

static const char *explorer[] = {"pcmanfm", "/home/javier", NULL};

static const char *playernext[] = {"playerctl", "next", NULL};
static const char *playerprevious[] = {"playerctl", "previous", NULL};
static const char *playerpause[] = {"playerctl", "play-pause", NULL};

static const Launcher launchers[] = {
	/* command       name to display */
	/*
	{ chromium,    "" },
	{ firefox,     "" },
	{ kittyterm ,  "﮸"},
	{ xkill ,   ""},
		 { firefox,     "" },
	*/

	{explorer, ""},
	{xkill, ""},
	{kittyterm, "﮸"}};

const char *spcmd1[] = {"st", "-n", "spterm", "-g", "120x34", NULL};
const char *spcmd2[] = {"st", "-n", "spcalc", "-f", "monospace:size=16", "-g", "50x20", "-e", "bc", "-lq", NULL};
static const char *floattermcmd[] = {"st", "-c", "floating", "-g", "100x34", "-f", "monospace:size=13", NULL};
static const char *tabtermcmd[] = {"tabbed", "-r", "2", "st", "-w", "''", NULL};

typedef struct
{
	const char *name;
	const void *cmd;
} Sp;

static Sp scratchpads[] = {
	/* name          cmd  */
	{"spterm", spcmd1},
	{"spranger", spcmd2},
};

/* tagging */
static const char *tags[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
// static const char *tags[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9","10","11","12","13" };
// static const char *tags[] = { "1:web", "2:term", "3:dev", "4:misc" };
// static const char *tags[] = { "main", "web", "mail", "docs", "media", "rss", "social", "code", "misc" };
// static const char *tags[] = { "1:", "2:", "3:", "4:", "5:", "6:", "7:", "8:", "9:" };

/* layout(s) */
static const float mfact = 0.50;  /* factor of master area size [0.05..0.95] */
static const int nmaster = 1;	  /* number of clients in master area */
static const int resizehints = 1; /* 1 means respect size hints in tiled resizals */
#define FORCE_VSPLIT 1			  /* nrowgrid layout: force two clients to always split vertically */
#include "vanitygaps.c"
static const Layout layouts[] = {
	/* symbol     arrange function */
	{"[]=", tile},	 /* Default: Master on left, slaves on right */
	{"TTT", bstack}, /* Master on top, slaves on bottom */

	{"[@]", spiral},   /* Fibonacci spiral */
	{"[\\]", dwindle}, /* Decreasing in size right and leftward */

	{"H[]", deck},	  /* Master on left, slaves in monocle-like mode on right */
	{"[M]", monocle}, /* All windows on top of eachother */

	{"|M|", centeredmaster},		 /* Master in middle, slaves on sides */
	{">M>", centeredfloatingmaster}, /* Same but master floats */

	{"><>", NULL}, /* no layout function means floating behavior */
	{NULL, NULL},
};

/*
	key definitions
	Mod4Mask windows key
	Mod1Mask alt key
*/
#define MODKEY Mod4Mask
#define MODKEY2 Mod1Mask

#define TAGKEYS(KEY, TAG)                                          \
	{MODKEY, KEY, view, {.ui = 1 << TAG}},                         \
		{MODKEY | ControlMask, KEY, toggleview, {.ui = 1 << TAG}}, \
		{MODKEY | ShiftMask, KEY, tag, {.ui = 1 << TAG}},          \
		{MODKEY | ControlMask | ShiftMask, KEY, toggletag, {.ui = 1 << TAG}},
#define STACKKEYS(MOD, ACTION)                      \
	{MOD, XK_j, ACTION##stack, {.i = INC(+1)}},     \
		{MOD, XK_k, ACTION##stack, {.i = INC(-1)}}, \
		{MOD, XK_v, ACTION##stack, {.i = 0}}, /* { MOD, XK_grave, ACTION##stack, {.i = PREVSEL } }, \ */
											  /* { MOD, XK_a,     ACTION##stack, {.i = 1 } }, \ */
											  /* { MOD, XK_z,     ACTION##stack, {.i = 2 } }, \ */
											  /* { MOD, XK_x,     ACTION##stack, {.i = -1 } }, */

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd)                                           \
	{                                                        \
		.v = (const char *[]) { "/bin/sh", "-c", cmd, NULL } \
	}

#include "rules.h"
#include "maximize.c"
#include <X11/XF86keysym.h>
#include "shiftview.c"
#include "keys.c"
#include "buttons.c"
