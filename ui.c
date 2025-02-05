// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Image1;
lv_obj_t * ui_Panel1;
void ui_event_Arc4(lv_event_t * e);
lv_obj_t * ui_Arc4;
void ui_event_Arc1(lv_event_t * e);
lv_obj_t * ui_Arc1;
lv_obj_t * ui_Label3;
lv_obj_t * ui_Label5;
void ui_event_Arc3(lv_event_t * e);
lv_obj_t * ui_Arc3;
lv_obj_t * ui_Label6;
lv_obj_t * ui_Label4;
lv_obj_t * ui_Label2;
lv_obj_t * ui_Label1;
lv_obj_t * ui_Image2;
lv_obj_t * ui_Label7;


// SCREEN: ui_Screen2
void ui_Screen2_screen_init(void);
lv_obj_t * ui_Screen2;
lv_obj_t * ui_Image3;
void ui_event_Panel2(lv_event_t * e);
lv_obj_t * ui_Panel2;
lv_obj_t * ui_Label8;
lv_obj_t * ui____initial_actions0;
const lv_img_dsc_t * ui_imgset_157937629[1] = {&ui_img_45962382};
const lv_img_dsc_t * ui_imgset_1575171073[1] = {&ui_img_441806990};
const lv_img_dsc_t * ui_imgset_636452636[1] = {&ui_img_89729788};
const lv_img_dsc_t * ui_imgset_1972762860[1] = {&ui_img_1277231463};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_Arc4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_arc_set_text_value(ui_Label2, target, "", "%");
    }
}
void ui_event_Arc1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_arc_set_text_value(ui_Label5, target, "", "/min");
    }
}
void ui_event_Arc3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_arc_set_text_value(ui_Label6, target, "", "/m");
    }
}
void ui_event_Panel2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Screen1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Screen1_screen_init);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui_Screen2_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_Screen1);
}
