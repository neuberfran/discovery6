// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: discovery6

#ifndef _DISCOVERY6_UI_H
#define _DISCOVERY6_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if __has_include("lvgl.h")
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_runM01R;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_runM02R;
extern lv_obj_t * ui_Label3;
extern lv_obj_t * ui_stop;
extern lv_obj_t * ui_Label1;
extern lv_obj_t * ui_runM01L;
extern lv_obj_t * ui_Label4;
extern lv_obj_t * ui_runM02L;
extern lv_obj_t * ui_Label5;

void run01right(lv_event_t * e);
void stopmotor(lv_event_t * e);





void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
