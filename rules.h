//
// Created by javier on 24/7/20.
//

#ifndef DWM_LUKESMITH_RULES_H
#define DWM_LUKESMITH_RULES_H

static const Rule rules[] = {
    /* xprop(1):
     *	WM_CLASS(STRING) = instance, class
     *	WM_NAME(STRING) = title
     */
    /* class    instance   title tags mask iscentered isfloating ñññisterminal  noswallow  monitor */

    {"pcmanfm", NULL, NULL, 1 << 2, 0, 1, 0, 0, -1},

    {"joplin", NULL, NULL, 1 << 2, 0, 1, 0, 0, -1},
    {"Joplin", NULL, NULL, 1 << 2, 0, 1, 0, 0, -1},

    {"Firefox Developer Edition", NULL, NULL, 1 << 1, 0, 0, 0, 0, -1},
    {"Navigator", NULL, NULL, 1 << 1, 0, 0, 0, 0, -1},

    {"brave-browser", NULL, NULL, 1 << 2, 1, 0, 0, 0, -1},
    {"Brave-browser", NULL, NULL, 1 << 2, 1, 0, 0, 0, -1},

    {"microsoft-edge", NULL, NULL, 1 << 4, 1, 0, 0, 0, -1},
    {"Microsoft-edge", NULL, NULL, 1 << 4, 1, 0, 0, 0, -1},

    {"chromium", NULL, NULL, 1 << 3, 1, 0, 0, 0, -1},
    {"Chromium", NULL, NULL, 1 << 3, 1, 0, 0, 0, -1},

    {"jetbrains-clion", NULL, NULL, 1 << 6, 1, 0, 0, 0, -1},
    {"jetbrains-phpstorm", NULL, NULL, 1 << 7, 1, 0, 0, 0, -1},
    {"Eclipse", NULL, NULL, 1 << 7, 1, 0, 0, 0, -1},
    {"jetbrains-idea", NULL, NULL, 1 << 6, 1, 0, 0, 0, -1},

    {"subl3", NULL, NULL, 1 << 5, 0, 0, 0, 0, -1},
    {"Subl3", NULL, NULL, 1 << 5, 0, 0, 0, 0, -1},

    {"bcompare", NULL, NULL, 1 << 5, 0, 0, 0, 0, -1},
    {"Bcompare", NULL, NULL, 1 << 5, 0, 0, 0, 0, -1},

    {"code", NULL, NULL, 1 << 6, 0, 0, 0, 0, -1},
    {"Code", NULL, NULL, 1 << 6, 0, 0, 0, 0, -1},

    {"telegram-desktop", NULL, NULL, 1 << 5, 0, 0, 0, 0, -1},
    {"TelegramDesktop", NULL, NULL, 1 << 5, 0, 0, 0, 0, -1},

    {"VNC Viewer", NULL, NULL, 1 << 7, 1, 0, 0, 0, -1},
    {"realvnc-vncviewer", NULL, NULL, 1 << 8, 1, 0, 0, 0, -1},
    {"remmina", NULL, NULL, 1 << 8, 1, 0, 0, 0, -1},
    {"spotify", NULL, NULL, 1 << 10, 1, 0, 0, 0, -1},

    {"Gimp", NULL, NULL, 1 << 8, 0, 1, 0, 0, -1},
    {"Glimpse", NULL, NULL, 1 << 8, 1, 0, 0, 0, -1},

    {"urxvt", NULL, NULL, 0, 1, 0, 0, 0, -1},
    {"st", NULL, NULL, 0, 1, 0, 0, 0, -1},
    {"kitty", NULL, NULL, 0, 1, 0, 0, 0, -1},

    {NULL, NULL, "Event Tester", 0, 0, 0, 0, 1, -1},
    {NULL, "spterm", NULL, SPTAG(0), 1, 1, 0, -1},
    {NULL, "spcalc", NULL, SPTAG(1), 1, 1, 0, -1},

    {"copyq", NULL, NULL, 0, 1, 1, 0, 0, -1},
    {"megasync", NULL, NULL, 0, 1, 1, 0, 0, -1},

    {"orage", NULL, NULL, 1, 1, 0, 0, -1},
    {"Orage", NULL, NULL, 1, 1, 0, 0, -1},

    {"pamac-manager", NULL, NULL, 1 << 8, 0, 1, 0, 0, -1},

    {"floating", NULL, NULL, 0, 1, 1, 0, -1},

    {"qutebrowser", "qutebrowser", NULL, 1 << 1, 0, 0, -1},
    {"qutebrowser", "quickbrowse", NULL, 0, 1, 1, -1},
    {NULL, "qute-editor", NULL, 1 << 1, 1, 1, -1},
    {"keepassxc", NULL, NULL, 0, 1, 1, -1},
    {NULL, NULL, "Event Tester", 0, 0, 1, -1},
    {"feh", NULL, NULL, 0, 1, 1, -1},
    {"mpv", NULL, NULL, 0, 1, 1, -1},
    {"retroarch", NULL, NULL, 0, 1, 1, -1},
    {"transmission", NULL, NULL, 0, 1, 1, -1},
    {"Nm-connection-editor", NULL, NULL, 0, 1, 1, -1},
    {NULL, "fmenu", NULL, 0, 1, 1, -1},
    {"Pavucontrol", NULL, NULL, 0, 1, 1, -1},
    {NULL, "guake", NULL, SPTAG(0), 1, 1, 0, -1},
    {"Tilda", NULL, NULL, 0, True, -1},

   // {"discord", NULL, NULL, 0, True, -1},
   // {"Discord", NULL, NULL, 0, True, -1},
     
    {"discord", NULL, NULL, 1 << 8, 0, 1, 0, 0, -1},
    {"Discord", NULL, NULL, 1 << 8, 0, 1, 0, 0, -1},

};

#endif // DWM_LUKESMITH_RULES_H
