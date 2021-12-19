cmake_minimum_required(VERSION 3.21)
project(dwm_changes C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(themes)

add_executable(dwm_changes
        themes/bluegrey.h
        themes/green.h
        themes/gruvchad.h
        themes/orange.h
        themes/otro.h
        themes/violet.h
        buttons.c
        config.h
        drw.c
        drw.h
        dwm.c
        keys.c
        maximize.c
        rules.h
        shiftview.c
        transient.c
        util.c
        util.h
        vanitygaps.c)
