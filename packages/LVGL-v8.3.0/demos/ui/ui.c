// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: discovery6

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_runM01R;
lv_obj_t * ui_Label2;
lv_obj_t * ui_runM02R;
lv_obj_t * ui_Label3;
lv_obj_t * ui_stop;
lv_obj_t * ui_Label1;
lv_obj_t * ui_runM01L;
lv_obj_t * ui_Label4;
lv_obj_t * ui_runM02L;
lv_obj_t * ui_Label5;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 32
    #error "LV_COLOR_DEPTH should be 32bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "#error LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
static void ui_event_runM01R(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        run01right(e);
    }
}
static void ui_event_stop(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        stopmotor(e);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{

    // ui_Screen1

    ui_Screen1 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);

    // ui_runM01R

    ui_runM01R = lv_btn_create(ui_Screen1);

    lv_obj_set_width(ui_runM01R, 100);
    lv_obj_set_height(ui_runM01R, 50);

    lv_obj_set_x(ui_runM01R, -127);
    lv_obj_set_y(ui_runM01R, -84);

    lv_obj_set_align(ui_runM01R, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_runM01R, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_runM01R, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_runM01R, ui_event_runM01R, LV_EVENT_ALL, NULL);

    // ui_Label2

    ui_Label2 = lv_label_create(ui_runM01R);

    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label2, 0);
    lv_obj_set_y(ui_Label2, 0);

    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label2, "Run M 01 R");

    // ui_runM02R

    ui_runM02R = lv_btn_create(ui_Screen1);

    lv_obj_set_width(ui_runM02R, 100);
    lv_obj_set_height(ui_runM02R, 50);

    lv_obj_set_x(ui_runM02R, 105);
    lv_obj_set_y(ui_runM02R, -83);

    lv_obj_set_align(ui_runM02R, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_runM02R, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_runM02R, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Label3

    ui_Label3 = lv_label_create(ui_runM02R);

    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label3, 0);
    lv_obj_set_y(ui_Label3, 0);

    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label3, "Run M 02 R");

    // ui_stop

    ui_stop = lv_btn_create(ui_Screen1);

    lv_obj_set_width(ui_stop, 100);
    lv_obj_set_height(ui_stop, 50);

    lv_obj_set_x(ui_stop, -6);
    lv_obj_set_y(ui_stop, -4);

    lv_obj_set_align(ui_stop, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_stop, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_stop, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_stop, ui_event_stop, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_stop, lv_color_hex(0xFF3410), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_stop, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_stop, lv_color_hex(0xFF3410), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_stop, 180, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label1

    ui_Label1 = lv_label_create(ui_stop);

    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label1, 1);
    lv_obj_set_y(ui_Label1, -1);

    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label1, "STOP");

    // ui_runM01L

    ui_runM01L = lv_btn_create(ui_Screen1);

    lv_obj_set_width(ui_runM01L, 100);
    lv_obj_set_height(ui_runM01L, 50);

    lv_obj_set_x(ui_runM01L, -124);
    lv_obj_set_y(ui_runM01L, 76);

    lv_obj_set_align(ui_runM01L, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_runM01L, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_runM01L, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Label4

    ui_Label4 = lv_label_create(ui_runM01L);

    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label4, 0);
    lv_obj_set_y(ui_Label4, 0);

    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label4, "Run M 01 L");

    // ui_runM02L

    ui_runM02L = lv_btn_create(ui_Screen1);

    lv_obj_set_width(ui_runM02L, 100);
    lv_obj_set_height(ui_runM02L, 50);

    lv_obj_set_x(ui_runM02L, 103);
    lv_obj_set_y(ui_runM02L, 81);

    lv_obj_set_align(ui_runM02L, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_runM02L, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_runM02L, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Label5

    ui_Label5 = lv_label_create(ui_runM02L);

    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label5, 0);
    lv_obj_set_y(ui_Label5, 0);

    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label5, "Run M 02 L");

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    lv_disp_load_scr(ui_Screen1);
}

