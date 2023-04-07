// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.3.4
// PROJECT: rzv2l_drp_demos

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void ui_event_DRPAIDemos(lv_event_t * e);
lv_obj_t * ui_DRPAIDemos;
lv_obj_t * ui_Background;
lv_obj_t * ui_ScreenLayout;
lv_obj_t * ui_Titles;
lv_obj_t * ui_RenesasLogo;
lv_obj_t * ui_RZVTitle;
lv_obj_t * ui_Buttons;
lv_obj_t * ui_ButtonRow1;
void ui_event_Button1(lv_event_t * e);
lv_obj_t * ui_Button1;
lv_obj_t * ui_Label1;
void ui_event_Button2(lv_event_t * e);
lv_obj_t * ui_Button2;
lv_obj_t * ui_Label2;
lv_obj_t * ui_ButtonRow2;
void ui_event_Button3(lv_event_t * e);
lv_obj_t * ui_Button3;
lv_obj_t * ui_Label3;
void ui_event_Button4(lv_event_t * e);
lv_obj_t * ui_Button4;
lv_obj_t * ui_Label4;
lv_obj_t * ui_ButtonRow3;
void ui_event_Button5(lv_event_t * e);
lv_obj_t * ui_Button5;
lv_obj_t * ui_Label5;
void ui_event_Button6(lv_event_t * e);
lv_obj_t * ui_Button6;
lv_obj_t * ui_Label6;
void ui_event_DRPAIDemos1(lv_event_t * e);
lv_obj_t * ui_DRPAIDemos1;
lv_obj_t * ui_Background1;
lv_obj_t * ui_ScreenLayout1;
lv_obj_t * ui_Titles1;
lv_obj_t * ui_RenesasLogo1;
lv_obj_t * ui_RZVTitle1;
lv_obj_t * ui_Buttons1;
lv_obj_t * ui_ButtonRow4;
void ui_event_Button7(lv_event_t * e);
lv_obj_t * ui_Button7;
lv_obj_t * ui_Label7;
void ui_event_Button8(lv_event_t * e);
lv_obj_t * ui_Button8;
lv_obj_t * ui_Label8;
lv_obj_t * ui_ButtonRow5;
void ui_event_Button9(lv_event_t * e);
lv_obj_t * ui_Button9;
lv_obj_t * ui_Label9;
lv_obj_t * ui_Button10;
lv_obj_t * ui_Label10;
lv_obj_t * ui_ButtonRow6;
lv_obj_t * ui_Button11;
lv_obj_t * ui_Label11;
lv_obj_t * ui_Button12;
lv_obj_t * ui_Label12;
void ui_event_DRPAIDemos2(lv_event_t * e);
lv_obj_t * ui_DRPAIDemos2;
lv_obj_t * ui_Background2;
lv_obj_t * ui_ScreenLayout2;
lv_obj_t * ui_Titles2;
lv_obj_t * ui_RenesasLogo2;
lv_obj_t * ui_RZVTitle2;
lv_obj_t * ui_Buttons2;
lv_obj_t * ui_ButtonRow7;
void ui_event_Button13(lv_event_t * e);
lv_obj_t * ui_Button13;
lv_obj_t * ui_Label13;
void ui_event_Button14(lv_event_t * e);
lv_obj_t * ui_Button14;
lv_obj_t * ui_Label14;
lv_obj_t * ui_ButtonRow8;
void ui_event_Button15(lv_event_t * e);
lv_obj_t * ui_Button15;
lv_obj_t * ui_Label15;
void ui_event_Button16(lv_event_t * e);
lv_obj_t * ui_Button16;
lv_obj_t * ui_Label16;
lv_obj_t * ui_ButtonRow9;
void ui_event_Button17(lv_event_t * e);
lv_obj_t * ui_Button17;
lv_obj_t * ui_Label17;
void ui_event_Button18(lv_event_t * e);
lv_obj_t * ui_Button18;
lv_obj_t * ui_Label18;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 32
    #error "LV_COLOR_DEPTH should be 32bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_DRPAIDemos(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_DRPAIDemos1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_Button1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        runYoloV5(e);
    }
}
void ui_event_Button2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        runYoloVX(e);
    }
}
void ui_event_Button3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        runtYoloV3(e);
    }
}
void ui_event_Button4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        runTinyYoloV3(e);
    }
}
void ui_event_Button5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        runYoloV2(e);
    }
}
void ui_event_Button6(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        runTinyYoloV2(e);
    }
}
void ui_event_DRPAIDemos1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_DRPAIDemos2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_Button7(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        runMMPose(e);
    }
}
void ui_event_Button8(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        runHRNet(e);
    }
}
void ui_event_Button9(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        runDeepPose(e);
    }
}
void ui_event_DRPAIDemos2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_DRPAIDemos, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_Button13(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        runPeopleCount(e);
    }
}
void ui_event_Button14(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        runLineCrossing(e);
    }
}
void ui_event_Button15(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        runFallDetection(e);
    }
}
void ui_event_Button16(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        runSafetyHelmetDetection(e);
    }
}
void ui_event_Button17(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        runAgeGenderDetection(e);
    }
}
void ui_event_Button18(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        runFaceRecognition(e);
    }
}

///////////////////// SCREENS ////////////////////
void ui_DRPAIDemos_screen_init(void)
{
    ui_DRPAIDemos = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_DRPAIDemos, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Background = lv_img_create(ui_DRPAIDemos);
    lv_img_set_src(ui_Background, &ui_img_race_robot_1280_720_png);
    lv_obj_set_width(ui_Background, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Background, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Background, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Background, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Background, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ScreenLayout = lv_obj_create(ui_DRPAIDemos);
    lv_obj_set_width(ui_ScreenLayout, 871);
    lv_obj_set_height(ui_ScreenLayout, 630);
    lv_obj_set_x(ui_ScreenLayout, -202);
    lv_obj_set_y(ui_ScreenLayout, -41);
    lv_obj_set_align(ui_ScreenLayout, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_ScreenLayout, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_ScreenLayout, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_ScreenLayout, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScreenLayout, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenLayout, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ScreenLayout, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ScreenLayout, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Titles = lv_obj_create(ui_ScreenLayout);
    lv_obj_set_width(ui_Titles, 882);
    lv_obj_set_height(ui_Titles, 233);
    lv_obj_set_x(ui_Titles, -94);
    lv_obj_set_y(ui_Titles, -216);
    lv_obj_set_align(ui_Titles, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Titles, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Titles, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_Titles, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Titles, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Titles, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Titles, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Titles, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RenesasLogo = lv_img_create(ui_Titles);
    lv_img_set_src(ui_RenesasLogo, &ui_img_497822574);
    lv_obj_set_width(ui_RenesasLogo, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_RenesasLogo, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_RenesasLogo, -192);
    lv_obj_set_y(ui_RenesasLogo, -245);
    lv_obj_set_align(ui_RenesasLogo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_RenesasLogo, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_RenesasLogo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_RZVTitle = lv_label_create(ui_Titles);
    lv_obj_set_width(ui_RZVTitle, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_RZVTitle, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_RZVTitle, -335);
    lv_obj_set_y(ui_RZVTitle, -146);
    lv_obj_set_align(ui_RZVTitle, LV_ALIGN_CENTER);
    lv_label_set_text(ui_RZVTitle, "RZV2L \nDRP-AI Object Detection");
    lv_obj_set_style_text_color(ui_RZVTitle, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_RZVTitle, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_RZVTitle, &lv_font_montserrat_36, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Buttons = lv_obj_create(ui_ScreenLayout);
    lv_obj_set_width(ui_Buttons, 524);
    lv_obj_set_height(ui_Buttons, 314);
    lv_obj_set_x(ui_Buttons, -323);
    lv_obj_set_y(ui_Buttons, 75);
    lv_obj_set_align(ui_Buttons, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Buttons, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Buttons, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Buttons, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Buttons, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Buttons, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Buttons, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Buttons, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonRow1 = lv_obj_create(ui_Buttons);
    lv_obj_set_width(ui_ButtonRow1, 457);
    lv_obj_set_height(ui_ButtonRow1, 105);
    lv_obj_set_x(ui_ButtonRow1, -284);
    lv_obj_set_y(ui_ButtonRow1, -63);
    lv_obj_set_align(ui_ButtonRow1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_ButtonRow1, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_ButtonRow1, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ButtonRow1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonRow1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonRow1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ButtonRow1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ButtonRow1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_ButtonRow1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button1 = lv_btn_create(ui_ButtonRow1);
    lv_obj_set_width(ui_Button1, 194);
    lv_obj_set_height(ui_Button1, 55);
    lv_obj_set_x(ui_Button1, -273);
    lv_obj_set_y(ui_Button1, -9);
    lv_obj_set_align(ui_Button1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Button1, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Button1, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);
    lv_obj_add_flag(ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button1, lv_color_hex(0x212223), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_Button1);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label1, -51);
    lv_obj_set_y(ui_Label1, 11);
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Label1, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Label1, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_label_set_text(ui_Label1, "YoloV5");
    lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0x0034FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button2 = lv_btn_create(ui_ButtonRow1);
    lv_obj_set_width(ui_Button2, 194);
    lv_obj_set_height(ui_Button2, 55);
    lv_obj_set_x(ui_Button2, -273);
    lv_obj_set_y(ui_Button2, -9);
    lv_obj_set_align(ui_Button2, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Button2, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Button2, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);
    lv_obj_add_flag(ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button2, lv_color_hex(0x212223), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_Button2);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, -51);
    lv_obj_set_y(ui_Label2, 11);
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Label2, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Label2, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_label_set_text(ui_Label2, "YoloVX");
    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0x0034FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonRow2 = lv_obj_create(ui_Buttons);
    lv_obj_set_width(ui_ButtonRow2, 457);
    lv_obj_set_height(ui_ButtonRow2, 105);
    lv_obj_set_x(ui_ButtonRow2, -284);
    lv_obj_set_y(ui_ButtonRow2, -63);
    lv_obj_set_align(ui_ButtonRow2, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_ButtonRow2, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_ButtonRow2, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ButtonRow2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonRow2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonRow2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ButtonRow2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ButtonRow2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_ButtonRow2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button3 = lv_btn_create(ui_ButtonRow2);
    lv_obj_set_width(ui_Button3, 194);
    lv_obj_set_height(ui_Button3, 55);
    lv_obj_set_x(ui_Button3, -273);
    lv_obj_set_y(ui_Button3, -9);
    lv_obj_set_align(ui_Button3, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Button3, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Button3, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);
    lv_obj_add_flag(ui_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button3, lv_color_hex(0x212223), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label3 = lv_label_create(ui_Button3);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label3, -51);
    lv_obj_set_y(ui_Label3, 11);
    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Label3, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Label3, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_label_set_text(ui_Label3, "YoloV3");
    lv_obj_set_style_text_color(ui_Label3, lv_color_hex(0x0034FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label3, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button4 = lv_btn_create(ui_ButtonRow2);
    lv_obj_set_width(ui_Button4, 194);
    lv_obj_set_height(ui_Button4, 55);
    lv_obj_set_x(ui_Button4, -273);
    lv_obj_set_y(ui_Button4, -9);
    lv_obj_set_align(ui_Button4, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Button4, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Button4, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);
    lv_obj_add_flag(ui_Button4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button4, lv_color_hex(0x212223), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label4 = lv_label_create(ui_Button4);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label4, -51);
    lv_obj_set_y(ui_Label4, 11);
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Label4, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Label4, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_label_set_text(ui_Label4, "TinyYoloV3");
    lv_obj_set_style_text_color(ui_Label4, lv_color_hex(0x0034FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label4, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonRow3 = lv_obj_create(ui_Buttons);
    lv_obj_set_width(ui_ButtonRow3, 457);
    lv_obj_set_height(ui_ButtonRow3, 105);
    lv_obj_set_x(ui_ButtonRow3, -284);
    lv_obj_set_y(ui_ButtonRow3, -63);
    lv_obj_set_align(ui_ButtonRow3, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_ButtonRow3, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_ButtonRow3, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ButtonRow3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonRow3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonRow3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ButtonRow3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ButtonRow3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_ButtonRow3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button5 = lv_btn_create(ui_ButtonRow3);
    lv_obj_set_width(ui_Button5, 194);
    lv_obj_set_height(ui_Button5, 55);
    lv_obj_set_x(ui_Button5, -273);
    lv_obj_set_y(ui_Button5, -9);
    lv_obj_set_align(ui_Button5, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Button5, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Button5, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);
    lv_obj_add_flag(ui_Button5, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button5, lv_color_hex(0x212223), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label5 = lv_label_create(ui_Button5);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label5, -51);
    lv_obj_set_y(ui_Label5, 11);
    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Label5, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Label5, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_label_set_text(ui_Label5, "YoloV2");
    lv_obj_set_style_text_color(ui_Label5, lv_color_hex(0x0034FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label5, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button6 = lv_btn_create(ui_ButtonRow3);
    lv_obj_set_width(ui_Button6, 194);
    lv_obj_set_height(ui_Button6, 55);
    lv_obj_set_x(ui_Button6, -273);
    lv_obj_set_y(ui_Button6, -9);
    lv_obj_set_align(ui_Button6, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Button6, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Button6, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);
    lv_obj_add_flag(ui_Button6, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button6, lv_color_hex(0x212223), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label6 = lv_label_create(ui_Button6);
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label6, -51);
    lv_obj_set_y(ui_Label6, 11);
    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Label6, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Label6, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_label_set_text(ui_Label6, "TinyYoloV2");
    lv_obj_set_style_text_color(ui_Label6, lv_color_hex(0x0034FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label6, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button2, ui_event_Button2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button3, ui_event_Button3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button4, ui_event_Button4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button5, ui_event_Button5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button6, ui_event_Button6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_DRPAIDemos, ui_event_DRPAIDemos, LV_EVENT_ALL, NULL);

}
void ui_DRPAIDemos1_screen_init(void)
{
    ui_DRPAIDemos1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_DRPAIDemos1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Background1 = lv_img_create(ui_DRPAIDemos1);
    lv_img_set_src(ui_Background1, &ui_img_race_robot_1280_720_png);
    lv_obj_set_width(ui_Background1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Background1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Background1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Background1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Background1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ScreenLayout1 = lv_obj_create(ui_DRPAIDemos1);
    lv_obj_set_width(ui_ScreenLayout1, 871);
    lv_obj_set_height(ui_ScreenLayout1, 630);
    lv_obj_set_x(ui_ScreenLayout1, -202);
    lv_obj_set_y(ui_ScreenLayout1, -41);
    lv_obj_set_align(ui_ScreenLayout1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_ScreenLayout1, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_ScreenLayout1, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_ScreenLayout1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScreenLayout1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenLayout1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ScreenLayout1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ScreenLayout1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Titles1 = lv_obj_create(ui_ScreenLayout1);
    lv_obj_set_width(ui_Titles1, 882);
    lv_obj_set_height(ui_Titles1, 233);
    lv_obj_set_x(ui_Titles1, -94);
    lv_obj_set_y(ui_Titles1, -216);
    lv_obj_set_align(ui_Titles1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Titles1, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Titles1, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_Titles1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Titles1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Titles1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Titles1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Titles1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RenesasLogo1 = lv_img_create(ui_Titles1);
    lv_img_set_src(ui_RenesasLogo1, &ui_img_497822574);
    lv_obj_set_width(ui_RenesasLogo1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_RenesasLogo1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_RenesasLogo1, -192);
    lv_obj_set_y(ui_RenesasLogo1, -245);
    lv_obj_set_align(ui_RenesasLogo1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_RenesasLogo1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_RenesasLogo1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_RZVTitle1 = lv_label_create(ui_Titles1);
    lv_obj_set_width(ui_RZVTitle1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_RZVTitle1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_RZVTitle1, -335);
    lv_obj_set_y(ui_RZVTitle1, -146);
    lv_obj_set_align(ui_RZVTitle1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_RZVTitle1, "RZV2L \nDRP-AI Pose Estimation");
    lv_obj_set_style_text_color(ui_RZVTitle1, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_RZVTitle1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_RZVTitle1, &lv_font_montserrat_36, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Buttons1 = lv_obj_create(ui_ScreenLayout1);
    lv_obj_set_width(ui_Buttons1, 524);
    lv_obj_set_height(ui_Buttons1, 314);
    lv_obj_set_x(ui_Buttons1, -323);
    lv_obj_set_y(ui_Buttons1, 75);
    lv_obj_set_align(ui_Buttons1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Buttons1, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Buttons1, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Buttons1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Buttons1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Buttons1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Buttons1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Buttons1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonRow4 = lv_obj_create(ui_Buttons1);
    lv_obj_set_width(ui_ButtonRow4, 457);
    lv_obj_set_height(ui_ButtonRow4, 105);
    lv_obj_set_x(ui_ButtonRow4, -284);
    lv_obj_set_y(ui_ButtonRow4, -63);
    lv_obj_set_align(ui_ButtonRow4, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_ButtonRow4, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_ButtonRow4, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ButtonRow4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonRow4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonRow4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ButtonRow4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ButtonRow4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_ButtonRow4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button7 = lv_btn_create(ui_ButtonRow4);
    lv_obj_set_width(ui_Button7, 194);
    lv_obj_set_height(ui_Button7, 55);
    lv_obj_set_x(ui_Button7, -273);
    lv_obj_set_y(ui_Button7, -9);
    lv_obj_set_align(ui_Button7, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Button7, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Button7, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);
    lv_obj_add_flag(ui_Button7, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button7, lv_color_hex(0x212223), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label7 = lv_label_create(ui_Button7);
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label7, -51);
    lv_obj_set_y(ui_Label7, 11);
    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Label7, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Label7, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_label_set_text(ui_Label7, "MPose");
    lv_obj_set_style_text_color(ui_Label7, lv_color_hex(0x0034FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label7, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button8 = lv_btn_create(ui_ButtonRow4);
    lv_obj_set_width(ui_Button8, 194);
    lv_obj_set_height(ui_Button8, 55);
    lv_obj_set_x(ui_Button8, -273);
    lv_obj_set_y(ui_Button8, -9);
    lv_obj_set_align(ui_Button8, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Button8, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Button8, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);
    lv_obj_add_flag(ui_Button8, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button8, lv_color_hex(0x212223), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label8 = lv_label_create(ui_Button8);
    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label8, -51);
    lv_obj_set_y(ui_Label8, 11);
    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Label8, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Label8, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_label_set_text(ui_Label8, "HRNet");
    lv_obj_set_style_text_color(ui_Label8, lv_color_hex(0x0034FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label8, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonRow5 = lv_obj_create(ui_Buttons1);
    lv_obj_set_width(ui_ButtonRow5, 457);
    lv_obj_set_height(ui_ButtonRow5, 105);
    lv_obj_set_x(ui_ButtonRow5, -284);
    lv_obj_set_y(ui_ButtonRow5, -63);
    lv_obj_set_align(ui_ButtonRow5, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_ButtonRow5, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_ButtonRow5, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ButtonRow5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonRow5, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonRow5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ButtonRow5, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ButtonRow5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_ButtonRow5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button9 = lv_btn_create(ui_ButtonRow5);
    lv_obj_set_width(ui_Button9, 194);
    lv_obj_set_height(ui_Button9, 55);
    lv_obj_set_x(ui_Button9, -273);
    lv_obj_set_y(ui_Button9, -9);
    lv_obj_set_align(ui_Button9, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Button9, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Button9, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);
    lv_obj_add_flag(ui_Button9, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button9, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button9, lv_color_hex(0x212223), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label9 = lv_label_create(ui_Button9);
    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label9, -51);
    lv_obj_set_y(ui_Label9, 11);
    lv_obj_set_align(ui_Label9, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Label9, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Label9, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_label_set_text(ui_Label9, "DeepPose");
    lv_obj_set_style_text_color(ui_Label9, lv_color_hex(0x0034FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label9, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button10 = lv_btn_create(ui_ButtonRow5);
    lv_obj_set_width(ui_Button10, 194);
    lv_obj_set_height(ui_Button10, 55);
    lv_obj_set_x(ui_Button10, -273);
    lv_obj_set_y(ui_Button10, -9);
    lv_obj_set_align(ui_Button10, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Button10, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Button10, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);
    lv_obj_add_flag(ui_Button10, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button10, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button10, lv_color_hex(0x212223), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button10, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Button10, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Button10, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label10 = lv_label_create(ui_Button10);
    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label10, -51);
    lv_obj_set_y(ui_Label10, 11);
    lv_obj_set_align(ui_Label10, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Label10, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Label10, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_label_set_text(ui_Label10, "");
    lv_obj_set_style_text_color(ui_Label10, lv_color_hex(0x0034FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label10, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonRow6 = lv_obj_create(ui_Buttons1);
    lv_obj_set_width(ui_ButtonRow6, 457);
    lv_obj_set_height(ui_ButtonRow6, 105);
    lv_obj_set_x(ui_ButtonRow6, -284);
    lv_obj_set_y(ui_ButtonRow6, -63);
    lv_obj_set_align(ui_ButtonRow6, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_ButtonRow6, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_ButtonRow6, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ButtonRow6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonRow6, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonRow6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ButtonRow6, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ButtonRow6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_ButtonRow6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button11 = lv_btn_create(ui_ButtonRow6);
    lv_obj_set_width(ui_Button11, 194);
    lv_obj_set_height(ui_Button11, 55);
    lv_obj_set_x(ui_Button11, -273);
    lv_obj_set_y(ui_Button11, -9);
    lv_obj_set_align(ui_Button11, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Button11, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Button11, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);
    lv_obj_add_flag(ui_Button11, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button11, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button11, lv_color_hex(0x212223), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button11, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Button11, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Button11, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label11 = lv_label_create(ui_Button11);
    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label11, -51);
    lv_obj_set_y(ui_Label11, 11);
    lv_obj_set_align(ui_Label11, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Label11, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Label11, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_label_set_text(ui_Label11, "");
    lv_obj_set_style_text_color(ui_Label11, lv_color_hex(0x0034FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label11, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button12 = lv_btn_create(ui_ButtonRow6);
    lv_obj_set_width(ui_Button12, 194);
    lv_obj_set_height(ui_Button12, 55);
    lv_obj_set_x(ui_Button12, -273);
    lv_obj_set_y(ui_Button12, -9);
    lv_obj_set_align(ui_Button12, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Button12, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Button12, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);
    lv_obj_add_flag(ui_Button12, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button12, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button12, lv_color_hex(0x212223), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button12, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Button12, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Button12, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label12 = lv_label_create(ui_Button12);
    lv_obj_set_width(ui_Label12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label12, -51);
    lv_obj_set_y(ui_Label12, 11);
    lv_obj_set_align(ui_Label12, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Label12, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Label12, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_label_set_text(ui_Label12, "");
    lv_obj_set_style_text_color(ui_Label12, lv_color_hex(0x0034FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label12, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Button7, ui_event_Button7, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button8, ui_event_Button8, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button9, ui_event_Button9, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_DRPAIDemos1, ui_event_DRPAIDemos1, LV_EVENT_ALL, NULL);

}
void ui_DRPAIDemos2_screen_init(void)
{
    ui_DRPAIDemos2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_DRPAIDemos2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Background2 = lv_img_create(ui_DRPAIDemos2);
    lv_img_set_src(ui_Background2, &ui_img_race_robot_1280_720_png);
    lv_obj_set_width(ui_Background2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Background2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Background2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Background2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Background2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ScreenLayout2 = lv_obj_create(ui_DRPAIDemos2);
    lv_obj_set_width(ui_ScreenLayout2, 871);
    lv_obj_set_height(ui_ScreenLayout2, 630);
    lv_obj_set_x(ui_ScreenLayout2, -202);
    lv_obj_set_y(ui_ScreenLayout2, -41);
    lv_obj_set_align(ui_ScreenLayout2, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_ScreenLayout2, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_ScreenLayout2, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_ScreenLayout2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScreenLayout2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenLayout2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ScreenLayout2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ScreenLayout2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Titles2 = lv_obj_create(ui_ScreenLayout2);
    lv_obj_set_width(ui_Titles2, 882);
    lv_obj_set_height(ui_Titles2, 233);
    lv_obj_set_x(ui_Titles2, -94);
    lv_obj_set_y(ui_Titles2, -216);
    lv_obj_set_align(ui_Titles2, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Titles2, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Titles2, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_Titles2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Titles2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Titles2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Titles2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Titles2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RenesasLogo2 = lv_img_create(ui_Titles2);
    lv_img_set_src(ui_RenesasLogo2, &ui_img_497822574);
    lv_obj_set_width(ui_RenesasLogo2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_RenesasLogo2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_RenesasLogo2, -192);
    lv_obj_set_y(ui_RenesasLogo2, -245);
    lv_obj_set_align(ui_RenesasLogo2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_RenesasLogo2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_RenesasLogo2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_RZVTitle2 = lv_label_create(ui_Titles2);
    lv_obj_set_width(ui_RZVTitle2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_RZVTitle2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_RZVTitle2, -335);
    lv_obj_set_y(ui_RZVTitle2, -146);
    lv_obj_set_align(ui_RZVTitle2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_RZVTitle2, "RZV2L \nDRP-AI Demos");
    lv_obj_set_style_text_color(ui_RZVTitle2, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_RZVTitle2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_RZVTitle2, &lv_font_montserrat_36, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Buttons2 = lv_obj_create(ui_ScreenLayout2);
    lv_obj_set_width(ui_Buttons2, 524);
    lv_obj_set_height(ui_Buttons2, 314);
    lv_obj_set_x(ui_Buttons2, -323);
    lv_obj_set_y(ui_Buttons2, 75);
    lv_obj_set_align(ui_Buttons2, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Buttons2, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Buttons2, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Buttons2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Buttons2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Buttons2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Buttons2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Buttons2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonRow7 = lv_obj_create(ui_Buttons2);
    lv_obj_set_width(ui_ButtonRow7, 457);
    lv_obj_set_height(ui_ButtonRow7, 105);
    lv_obj_set_x(ui_ButtonRow7, -284);
    lv_obj_set_y(ui_ButtonRow7, -63);
    lv_obj_set_align(ui_ButtonRow7, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_ButtonRow7, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_ButtonRow7, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ButtonRow7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonRow7, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonRow7, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ButtonRow7, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ButtonRow7, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_ButtonRow7, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button13 = lv_btn_create(ui_ButtonRow7);
    lv_obj_set_width(ui_Button13, 194);
    lv_obj_set_height(ui_Button13, 55);
    lv_obj_set_x(ui_Button13, -273);
    lv_obj_set_y(ui_Button13, -9);
    lv_obj_set_align(ui_Button13, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Button13, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Button13, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button13, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button13, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button13, lv_color_hex(0x212223), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label13 = lv_label_create(ui_Button13);
    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label13, -51);
    lv_obj_set_y(ui_Label13, 11);
    lv_obj_set_align(ui_Label13, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Label13, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Label13, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_label_set_text(ui_Label13, " People\nCounter");
    lv_obj_set_style_text_color(ui_Label13, lv_color_hex(0x0034FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label13, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button14 = lv_btn_create(ui_ButtonRow7);
    lv_obj_set_width(ui_Button14, 194);
    lv_obj_set_height(ui_Button14, 55);
    lv_obj_set_x(ui_Button14, -273);
    lv_obj_set_y(ui_Button14, -9);
    lv_obj_set_align(ui_Button14, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Button14, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Button14, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button14, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button14, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button14, lv_color_hex(0x212223), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label14 = lv_label_create(ui_Button14);
    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label14, -49);
    lv_obj_set_y(ui_Label14, 4);
    lv_obj_set_align(ui_Label14, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label14, "    Line\nCrossing");
    lv_obj_set_style_text_color(ui_Label14, lv_color_hex(0x0034FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label14, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonRow8 = lv_obj_create(ui_Buttons2);
    lv_obj_set_width(ui_ButtonRow8, 457);
    lv_obj_set_height(ui_ButtonRow8, 105);
    lv_obj_set_x(ui_ButtonRow8, -284);
    lv_obj_set_y(ui_ButtonRow8, -63);
    lv_obj_set_align(ui_ButtonRow8, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_ButtonRow8, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_ButtonRow8, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ButtonRow8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonRow8, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonRow8, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ButtonRow8, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ButtonRow8, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_ButtonRow8, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button15 = lv_btn_create(ui_ButtonRow8);
    lv_obj_set_width(ui_Button15, 194);
    lv_obj_set_height(ui_Button15, 55);
    lv_obj_set_x(ui_Button15, -273);
    lv_obj_set_y(ui_Button15, -9);
    lv_obj_set_align(ui_Button15, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Button15, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Button15, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button15, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button15, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button15, lv_color_hex(0x212223), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button15, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label15 = lv_label_create(ui_Button15);
    lv_obj_set_width(ui_Label15, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label15, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label15, -51);
    lv_obj_set_y(ui_Label15, 11);
    lv_obj_set_align(ui_Label15, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Label15, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Label15, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_label_set_text(ui_Label15, "       Fall\nDetection");
    lv_obj_set_style_text_color(ui_Label15, lv_color_hex(0x0034FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label15, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label15, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button16 = lv_btn_create(ui_ButtonRow8);
    lv_obj_set_width(ui_Button16, 194);
    lv_obj_set_height(ui_Button16, 55);
    lv_obj_set_x(ui_Button16, -273);
    lv_obj_set_y(ui_Button16, -9);
    lv_obj_set_align(ui_Button16, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Button16, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Button16, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button16, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button16, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button16, lv_color_hex(0x212223), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button16, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label16 = lv_label_create(ui_Button16);
    lv_obj_set_width(ui_Label16, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label16, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label16, -51);
    lv_obj_set_y(ui_Label16, 11);
    lv_obj_set_align(ui_Label16, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Label16, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Label16, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_label_set_text(ui_Label16, "     Safety\nHelmet Det");
    lv_obj_set_style_text_color(ui_Label16, lv_color_hex(0x0034FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label16, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label16, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonRow9 = lv_obj_create(ui_Buttons2);
    lv_obj_set_width(ui_ButtonRow9, 457);
    lv_obj_set_height(ui_ButtonRow9, 105);
    lv_obj_set_x(ui_ButtonRow9, -284);
    lv_obj_set_y(ui_ButtonRow9, -63);
    lv_obj_set_align(ui_ButtonRow9, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_ButtonRow9, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_ButtonRow9, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ButtonRow9, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonRow9, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonRow9, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ButtonRow9, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ButtonRow9, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_ButtonRow9, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button17 = lv_btn_create(ui_ButtonRow9);
    lv_obj_set_width(ui_Button17, 194);
    lv_obj_set_height(ui_Button17, 55);
    lv_obj_set_x(ui_Button17, -273);
    lv_obj_set_y(ui_Button17, -9);
    lv_obj_set_align(ui_Button17, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Button17, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Button17, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button17, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button17, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button17, lv_color_hex(0x212223), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button17, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label17 = lv_label_create(ui_Button17);
    lv_obj_set_width(ui_Label17, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label17, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label17, -51);
    lv_obj_set_y(ui_Label17, 11);
    lv_obj_set_align(ui_Label17, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Label17, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Label17, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_label_set_text(ui_Label17, "    Age\nGender");
    lv_obj_set_style_text_color(ui_Label17, lv_color_hex(0x0034FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label17, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label17, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button18 = lv_btn_create(ui_ButtonRow9);
    lv_obj_set_width(ui_Button18, 194);
    lv_obj_set_height(ui_Button18, 55);
    lv_obj_set_x(ui_Button18, -273);
    lv_obj_set_y(ui_Button18, -9);
    lv_obj_set_align(ui_Button18, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Button18, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Button18, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button18, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button18, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button18, lv_color_hex(0x212223), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button18, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label18 = lv_label_create(ui_Button18);
    lv_obj_set_width(ui_Label18, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label18, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label18, -51);
    lv_obj_set_y(ui_Label18, 11);
    lv_obj_set_align(ui_Label18, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label18, "        Face\nRecognition");
    lv_obj_set_style_text_color(ui_Label18, lv_color_hex(0x0034FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label18, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label18, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Button13, ui_event_Button13, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button14, ui_event_Button14, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button15, ui_event_Button15, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button16, ui_event_Button16, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button17, ui_event_Button17, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button18, ui_event_Button18, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_DRPAIDemos2, ui_event_DRPAIDemos2, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_DRPAIDemos_screen_init();
    ui_DRPAIDemos1_screen_init();
    ui_DRPAIDemos2_screen_init();
    lv_disp_load_scr(ui_DRPAIDemos);
}
