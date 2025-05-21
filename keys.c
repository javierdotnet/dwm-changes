static Key keys[] = {
	/* modifier                     key        function        argument */
	STACKKEYS(MODKEY, focus)
		STACKKEYS(MODKEY | ShiftMask, push)

	/* { MODKEY|ShiftMask,		XK_Escape,	spawn,	SHCMD("") }, */
	{MODKEY, XK_grave, spawn, SHCMD("dmenuunicode")},
	/* { MODKEY|ShiftMask,		XK_grave,	togglescratch,	SHCMD("") }, */
	TAGKEYS(XK_1, 0)
		TAGKEYS(XK_2, 1)
			TAGKEYS(XK_3, 2)
				TAGKEYS(XK_4, 3)
					TAGKEYS(XK_5, 4)
						TAGKEYS(XK_6, 5)
							TAGKEYS(XK_7, 6)
								TAGKEYS(XK_8, 7)
									TAGKEYS(XK_9, 8){MODKEY, XK_0, view, {.ui = ~0}},
	{MODKEY | ShiftMask, XK_0, tag, {.ui = ~0}},
	{MODKEY, XK_minus, spawn, SHCMD("pamixer -d 5; kill -44 $(pidof dwmblocks)")},
	{MODKEY | ShiftMask, XK_minus, spawn, SHCMD("pamixer -i 15; kill -44 $(pidof dwmblocks)")},
	{MODKEY, XK_equal, spawn, SHCMD("pamixer --allow-boost -i 5; kill -44 $(pidof dwmblocks)")},
	{MODKEY | ShiftMask, XK_equal, spawn, SHCMD("pamixer --allow-boost -i 15; kill -44 $(pidof dwmblocks)")},
	{MODKEY, XK_BackSpace, spawn, SHCMD("sysact")},
	{MODKEY | ShiftMask, XK_BackSpace, spawn, SHCMD("sysact")},

	/* { MODKEY|ShiftMask,		XK_Tab,		spawn,		SHCMD("") }, */
	{MODKEY, XK_q, killclient, {0}},
	{MODKEY | ShiftMask, XK_q, spawn, SHCMD("xkill")},
	{Mod1Mask, XK_F4, killclient, {0}},

	{MODKEY, XK_Escape, spawn, {.v = rootmenu}},

	//{ MODKEY|ShiftMask,		XK_q,		spawn,		SHCMD("sysact") },
	// { MODKEY,			XK_w,		spawn,		SHCMD("$BROWSER") },
	{MODKEY, XK_w, spawn, {.v = browsercmd}},
	//{ MODKEY|ShiftMask,		XK_w,		spawn,		SHCMD("urxvt -e sudo nmtui") },
	//{ MODKEY,			XK_e,		spawn,		SHCMD("urxvt -e neomutt ; pkill -RTMIN+12 dwmblocks; rmdir ~/.abook") },
	//{ MODKEY|ShiftMask,		XK_e,		spawn,		SHCMD("urxvt -e abook -C ~/.config/abook/abookrc --datafile ~/.config/abook/addressbook") },
	//{ MODKEY,			XK_r,		spawn,		SHCMD("urxvt -e lf") },

	{MODKEY, XK_n, spawn, SHCMD("pcmanfm")},
	{MODKEY | ShiftMask, XK_n, spawn, SHCMD("thunar")},

	{MODKEY, XK_t, setlayout, {.v = &layouts[0]}},			   /* tile */
	{MODKEY | ShiftMask, XK_t, setlayout, {.v = &layouts[1]}}, /* bstack */
	{MODKEY, XK_y, setlayout, {.v = &layouts[2]}},			   /* spiral */
	{MODKEY | ShiftMask, XK_y, setlayout, {.v = &layouts[3]}}, /* dwindle */
	{MODKEY, XK_u, setlayout, {.v = &layouts[4]}},			   /* deck */
	{MODKEY | ShiftMask, XK_u, setlayout, {.v = &layouts[5]}}, /* monocle */
	{MODKEY, XK_i, setlayout, {.v = &layouts[6]}},			   /* centeredmaster */
	{MODKEY | ShiftMask, XK_i, setlayout, {.v = &layouts[7]}}, /* centeredfloatingmaster */
	{MODKEY, XK_o, incnmaster, {.i = +1}},
	{MODKEY | ShiftMask, XK_o, incnmaster, {.i = -1}},
	/*
	{ MODKEY,			XK_p,			spawn,		SHCMD("mpcb toggle") },
	{ MODKEY|ShiftMask,		XK_p,			spawn,		SHCMD("mpc pause ; pauseallmpv") },
	{ MODKEY,			XK_bracketleft,		spawn,		SHCMD("mpc seek -10") },
	{ MODKEY|ShiftMask,		XK_bracketleft,		spawn,		SHCMD("mpc seek -60") },
	{ MODKEY,			XK_bracketright,	spawn,		SHCMD("mpc seek +10") },
	{ MODKEY|ShiftMask,		XK_bracketright,	spawn,		SHCMD("mpc seek +60") },
	{ MODKEY,			XK_backslash,		view,		{0} },

	*/

	/* { MODKEY|ShiftMask,		XK_backslash,		spawn,		SHCMD("") }, */

	{MODKEY, XK_a, togglegaps, {0}},
	{MODKEY | ShiftMask, XK_a, defaultgaps, {0}},
	{MODKEY, XK_s, togglesticky, {0}},
	/* { MODKEY|ShiftMask,		XK_s,		spawn,		SHCMD("") }, */

	/* { MODKEY,			XK_d,		spawn,		SHCMD("") } }, */
	{MODKEY, XK_f, togglefullscr, {0}},
	{MODKEY | ShiftMask, XK_f, setlayout, {.v = &layouts[8]}},
	{MODKEY, XK_g, shiftview, {.i = -1}},
	{MODKEY | ShiftMask, XK_g, shifttag, {.i = -1}},
	/* J and K are automatically bound above in STACKEYS */
	{MODKEY, XK_h, setmfact, {.f = -0.05}},
	{MODKEY, XK_l, setmfact, {.f = +0.05}},

	{MODKEY | ShiftMask, XK_l, spawn, {.v = betterlockscreen}},

	{MODKEY, XK_semicolon, shiftview, {.i = 1}},
	{MODKEY | ShiftMask, XK_semicolon, shifttag, {.i = 1}},
	{MODKEY, XK_apostrophe, togglescratch, {.ui = 1}},
	/* { MODKEY|ShiftMask,		XK_apostrophe,	spawn,		SHCMD("") }, */
	{MODKEY, XK_Return, spawn, {.v = termcmd}},
	{MODKEY | ShiftMask, XK_Return, spawn, {.v = floattermcmd}},
	// SHCMD("urxvt -e ranger")},

	{MODKEY, XK_z, incrgaps, {.i = +3}},
	/* { MODKEY|ShiftMask,		XK_z,		spawn,		SHCMD("") }, */
	{MODKEY | ShiftMask, XK_z, incrgaps, {.i = -3}},

	{MODKEY, XK_x, spawn, {.v = instantswitchcmd}},

	/* { MODKEY|ShiftMask,		XK_x,		spawn,		SHCMD("") }, */
	/* { MODKEY,			XK_c,		spawn,		SHCMD("") }, */
	/* { MODKEY|ShiftMask,		XK_c,		spawn,		SHCMD("") }, */
	/* V is automatically bound above in STACKKEYS */
	{MODKEY, XK_b, togglebar, {0}},
	/* { MODKEY|ShiftMask,		XK_b,		spawn,		SHCMD("") }, */
	//{ MODKEY,			XK_n,		spawn,		SHCMD("urxvt -e nvim -c VimwikiIndex") },

	{MODKEY, XK_m, setlayout, {.v = &layouts[5]}},

	//{ MODKEY,			XK_up,		spawn,		SHCMD("urxvt -e nvim -c VimwikiIndex") },

	/*
	{ MODKEY|ShiftMask,		XK_n,		spawn,		SHCMD("urxvt -e newsboat; pkill -RTMIN+6 dwmblocks") },
	{ MODKEY,			XK_m,		spawn,		SHCMD("urxvt -e ncmpcpp") },
	{ MODKEY|ShiftMask,		XK_m,		spawn,		SHCMD("pamixer -t; kill -44 $(pidof dwmblocks)") },
	{ MODKEY,			XK_comma,	spawn,		SHCMD("mpc prev") },
	{ MODKEY|ShiftMask,		XK_comma,	spawn,		SHCMD("mpc seek 0%") },
	{ MODKEY,			XK_period,	spawn,		SHCMD("mpc next") },
	{ MODKEY|ShiftMask,		XK_period,	spawn,		SHCMD("mpc repeat") },
	*/

	{MODKEY, XK_p, spawn, SHCMD("playerctl -a play")},
	{MODKEY | ShiftMask, XK_p, spawn, SHCMD("playerctl -a pause")},

	{MODKEY, XK_period, spawn, {.v = playernext}},
	{MODKEY | ShiftMask, XK_period, spawn, {.v = playerprevious}},

	{MODKEY | ShiftMask, XK_comma, spawn, SHCMD("transset --min 0.1 -p --dec 0.1")},
	{MODKEY, XK_comma, spawn, SHCMD("transset -p --inc 0.1")},

	/*
	{MODKEY2, XK_Left, focusmon, {.i = -1}},
	{MODKEY2 | ShiftMask, XK_Left, tagmon, {.i = -1}},
	{MODKEY2, XK_Right, focusmon, {.i = +1}},
	{MODKEY2 | ShiftMask, XK_Right, tagmon, {.i = +1}},
	*/

	{MODKEY, XK_Page_Up, shiftview, {.i = -1}},
	{MODKEY, XK_Page_Down, shiftview, {.i = +1}},
	{MODKEY | ShiftMask, XK_Page_Down, shifttag, {.i = +1}},
	{MODKEY | ShiftMask, XK_Page_Up, shifttag, {.i = -1}},

	{MODKEY, XK_Insert, spawn, SHCMD("notify-send \"📋 Clipboard contents:\" \"$(xclip -o -selection clipboard)\"")},

	{MODKEY, XK_F6, spawn, SHCMD("setxkbmap es")},
	{MODKEY | ShiftMask, XK_F6, spawn, SHCMD("setxkbmap us")},

	//{ MODKEY,			XK_F2,		spawn,		SHCMD("tutorialvids") },
	{MODKEY | ShiftMask, XK_F2, spawn, SHCMD("urxvt -e nmtui")},
	{MODKEY | ShiftMask, XK_F3, spawn, SHCMD("displayselect")},
	{MODKEY | ShiftMask, XK_F4, spawn, SHCMD("urxvt -e pulsemixer; kill -44 $(pidof dwmblocks)")},
	{MODKEY, XK_F5, xrdb, {.v = NULL}},

	//{ MODKEY,			XK_F6,		spawn,		SHCMD("torwrap") },
	{MODKEY, XK_F1, spawn, SHCMD("$HOME/.screenlayout/1920x1080.sh")},
	{MODKEY, XK_F2, spawn, SHCMD("$HOME/.screenlayout/1600x900.sh")},
	{MODKEY, XK_F3, spawn, SHCMD("$HOME/.screenlayout/1368x768.sh")},
	{MODKEY, XK_F4, spawn, SHCMD("$HOME/.screenlayout/1920x1080_hdmi-1.sh")},
	//{MODKEY, XK_F7, spawn, SHCMD("td-toggle")},
	{MODKEY, XK_F7, spawn, SHCMD("akbl --on")},
	{MODKEY | ShiftMask, XK_F7, spawn, SHCMD("akbl --off")},
	//{MODKEY, XK_F8, spawn, SHCMD("mailsync")},

	{MODKEY, XK_F9, spawn, SHCMD("dmenumount")},
	{MODKEY | ShiftMask, XK_F9, spawn, SHCMD("dmenuumount")},

	{MODKEY, XK_F11, spawn, SHCMD("mpv --no-cache --no-osc --no-input-default-bindings --input-conf=/dev/null --title=webcam $(ls /dev/video[0,2,4,6,8] | tail -n 1)")},
	//	{ MODKEY,			XK_F12,		xrdb,		{.v = NULL } },
	{MODKEY, XK_r, zoom, {0}},
	{MODKEY, XK_d, spawn, SHCMD("rofi-launch.sh")},
	{MODKEY | ShiftMask, XK_d, spawn, {.v = dmenucmd}},
	{MODKEY, XK_space, togglefloating, {0}},

	//{ 0,       			XK_Alt_L,   start_alt_tab,  {0} },

	{MODKEY, XK_Tab, shiftview, {.i = +1}},
	{MODKEY | ShiftMask, XK_Tab, shiftview, {.i = -1}},

	// { MODKEY,			XK_Tab,		view,		{0} },

	{Mod1Mask, XK_Tab, alt_tab, {0}},
	{Mod1Mask | ShiftMask, XK_Tab, alt_tab, {-1}},

	//{ 0,				XK_Print,	spawn,		SHCMD("maim pic-full-$(date '+%y%m%d-%H%M-%S').png") },
	//{ 0,				XK_Print,	spawn,		SHCMD("flameshot gui") },
	{MODKEY | ShiftMask, XK_s, spawn, {.v = screenshotcmd}},
	{ShiftMask, XK_Print, spawn, SHCMD("maimpick")},
	{MODKEY, XK_Print, spawn, SHCMD("dmenurecord")},
	{MODKEY | ShiftMask, XK_Print, spawn, SHCMD("dmenurecord kill")},
	{MODKEY, XK_Delete, spawn, SHCMD("dmenurecord kill")},
	{MODKEY, XK_Scroll_Lock, spawn, SHCMD("killall screenkey || screenkey &")},

	{MODKEY | ControlMask, XK_comma, cyclelayout, {.i = -1}},
	{Mod1Mask, XK_space, cyclelayout, {.i = +1}},

	{0, XF86XK_AudioMute, spawn, SHCMD("pamixer -t; kill -44 $(pidof dwmblocks)")},
	{0, XF86XK_AudioRaiseVolume, spawn, SHCMD("pamixer --allow-boost -i 3; kill -44 $(pidof dwmblocks)")},
	{0, XF86XK_AudioLowerVolume, spawn, SHCMD("pamixer --allow-boost -d 3; kill -44 $(pidof dwmblocks)")},
	/*
	{ 0, XF86XK_AudioPrev,		spawn,		SHCMD("mpc prev") },
	{ 0, XF86XK_AudioNext,		spawn,		SHCMD("mpc next") },
	{ 0, XF86XK_AudioPause,		spawn,		SHCMD("mpc pause") },
	{ 0, XF86XK_AudioPlay,		spawn,		SHCMD("mpc play") },
	{ 0, XF86XK_AudioStop,		spawn,		SHCMD("mpc stop") },
	{ 0, XF86XK_AudioRewind,	spawn,		SHCMD("mpc seek -10") },
	{ 0, XF86XK_AudioForward,	spawn,		SHCMD("mpc seek +10") },
	*/

	{0, XF86XK_AudioPlay, spawn, {.v = playerpause}},
	{0, XF86XK_AudioNext, spawn, {.v = playernext}},
	{0, XF86XK_AudioPrev, spawn, {.v = playerprevious}},

	{0, XF86XK_AudioMedia, spawn, SHCMD("urxvt -e ncmpcpp")},
	{0, XF86XK_PowerOff, spawn, SHCMD("sysact")},
	{0, XF86XK_Calculator, spawn, SHCMD("urxvt -e bc -l")},
	{0, XF86XK_Sleep, spawn, SHCMD("sudo -A zzz")},
	{0, XF86XK_WWW, spawn, SHCMD("$BROWSER")},
	{0, XF86XK_DOS, spawn, SHCMD("urxvt")},
	{0, XF86XK_ScreenSaver, spawn, SHCMD("slock & xset dpms force off; mpc pause; pauseallmpv")},
	{0, XF86XK_TaskPane, spawn, SHCMD("urxvt -e htop")},
	{0, XF86XK_Mail, spawn, SHCMD("urxvt -e neomutt ; pkill -RTMIN+12 dwmblocks")},
	{0, XF86XK_MyComputer, spawn, SHCMD("urxvt -e lf /")},
	/* { 0, XF86XK_Battery,		spawn,		SHCMD("") }, */
	{0, XF86XK_Launch1, spawn, SHCMD("xset dpms force off")},
	{0, XF86XK_TouchpadToggle, spawn, SHCMD("(synclient | grep 'TouchpadOff.*1' && synclient TouchpadOff=0) || synclient TouchpadOff=1")},
	{0, XF86XK_TouchpadOff, spawn, SHCMD("synclient TouchpadOff=1")},
	{0, XF86XK_TouchpadOn, spawn, SHCMD("synclient TouchpadOff=0")},
	{0, XF86XK_MonBrightnessUp, spawn, SHCMD("xbacklight -inc 15")},
	{0, XF86XK_MonBrightnessDown, spawn, SHCMD("xbacklight -dec 15")},

	/* { MODKEY|Mod4Mask,              XK_h,      incrgaps,       {.i = +1 } }, */
	/* { MODKEY|Mod4Mask,              XK_l,      incrgaps,       {.i = -1 } }, */
	/* { MODKEY|Mod4Mask|ShiftMask,    XK_h,      incrogaps,      {.i = +1 } }, */
	/* { MODKEY|Mod4Mask|ShiftMask,    XK_l,      incrogaps,      {.i = -1 } }, */
	/* { MODKEY|Mod4Mask|ControlMask,  XK_h,      incrigaps,      {.i = +1 } }, */
	/* { MODKEY|Mod4Mask|ControlMask,  XK_l,      incrigaps,      {.i = -1 } }, */
	/* { MODKEY|Mod4Mask|ShiftMask,    XK_0,      defaultgaps,   SSS {0} }, */
	/* { MODKEY,                       XK_y,      incrihgaps,     {.i = +1 } }, */
	/* { MODKEY,                       XK_o,      incrihgaps,     {.i = -1 } }, */
	/* { MODKEY|ControlMask,           XK_y,      incrivgaps,     {.i = +1 } }, */
	/* { MODKEY|ControlMask,           XK_o,      incrivgaps,     {.i = -1 } }, */
	/* { MODKEY|Mod4Mask,              XK_y,      incrohgaps,     {.i = +1 } }, */
	/* { MODKEY|Mod4Mask,              XK_o,      incrohgaps,     {.i = -1 } }, */
	/* { MODKEY|ShiftMask,             XK_y,      incrovgaps,     {.i = +1 } }, */
	/* { MODKEY|ShiftMask,             XK_o,      incrovgaps,     {.i = -1 } }, */
	//

	{MODKEY2 | ControlMask, XK_m, togglemaximize, {0}},

	{MODKEY, XK_Down, moveresize, {.v = "0x 25y 0w 0h"}},
	{MODKEY, XK_Up, moveresize, {.v = "0x -25y 0w 0h"}},
	{MODKEY, XK_Right, moveresize, {.v = "25x 0y 0w 0h"}},
	{MODKEY, XK_Left, moveresize, {.v = "-25x 0y 0w 0h"}},
	{MODKEY | ShiftMask, XK_Down, moveresize, {.v = "0x 0y 0w 25h"}},
	{MODKEY | ShiftMask, XK_Up, moveresize, {.v = "0x 0y 0w -25h"}},
	{MODKEY | ShiftMask, XK_Right, moveresize, {.v = "0x 0y 25w 0h"}},
	{MODKEY | ShiftMask, XK_Left, moveresize, {.v = "0x 0y -25w 0h"}},
	{MODKEY | ControlMask, XK_Up, moveresizeedge, {.v = "t"}},
	{MODKEY | ControlMask, XK_Down, moveresizeedge, {.v = "b"}},
	{MODKEY | ControlMask, XK_Left, moveresizeedge, {.v = "l"}},
	{MODKEY | ControlMask, XK_Right, moveresizeedge, {.v = "r"}},
	{MODKEY | ControlMask | ShiftMask, XK_Up, moveresizeedge, {.v = "T"}},
	{MODKEY | ControlMask | ShiftMask, XK_Down, moveresizeedge, {.v = "B"}},
	{MODKEY | ControlMask | ShiftMask, XK_Left, moveresizeedge, {.v = "L"}},
	{MODKEY | ControlMask | ShiftMask, XK_Right, moveresizeedge, {.v = "R"}},

	{MODKEY | Mod1Mask, XK_s, spawn, SHCMD("tabbed -r 2 surf -pe x 'www.google.es'")},

	{MODKEY | Mod1Mask, XK_Return, spawn, {.v = tabtermcmd}}

};
