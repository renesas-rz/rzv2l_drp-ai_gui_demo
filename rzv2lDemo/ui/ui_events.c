// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.3.4
// PROJECT: rzv2l_drp_demos

#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <time.h>
#include "ui.h"
#include "mouse_event.h"


#define SYSTEM_YOLOV5 "cd ./ObjectDetection && ./sample_app_yolov5_cam"
#define SYSTEM_YOLOVX "cd ./ObjectDetection && ./sample_app_yolovX_cam"
#define SYSTEM_YOLOV3 "cd ./ObjectDetection && ./sample_app_yolov3_cam"
#define SYSTEM_YOLOV2 "cd ./ObjectDetection && ./sample_app_yolov2_cam"
#define SYSTEM_TINYYOLOV3 "cd ./ObjectDetection && ./sample_app_tinyyolov3_cam"
#define SYSTEM_TINYYOLOV2 "cd ./ObjectDetection && ./sample_app_tinyyolov2_cam"

#define SYSTEM_HRNET "cd ./PoseEstimation && ./sample_app_hrnet_cam"
#define SYSTEM_MMPOSE "cd ./sample_Yolov2 && ./sample_app_yolov2_cam"
#define SYSTEM_DEEPPOSE "cd ./sample_Yolov2 && ./sample_app_yolov2_cam"

#define SYSTEM_HEADCNT "cd ./AIDemos/Head_count_cam && ./head_count_cam_app"
#define SYSTEM_LINECROSSING "cd ./AIDemos/Line_Crossing && ./Line_crossing_object_counting 640 0 640 720"
#define SYSTEM_FALLDETECT "cd ./AIDemos/Elderly_fall_detection && ./Elderly_fall_detection 0 300 1280 300"
#define SYSTEM_SAFETYHELMENTDET "cd ./AIDemos/Safety_helmet_vest_cam && ./Safety_helmet_vest_cam_app"
#define SYSTEM_AGEGENDERDET "cd ./AIDemos/ && ./"
#define SYSTEM_SAFETYHELMENTDET "cd ./AIDemos/ && ./"
#define SYSTEM_FACERECOG "cd ./AIDemos/ && ./"



void runYoloV5(lv_event_t * e)
{
	pid_t child;

    child = fork();
    if ( child == 0 ) {

   	 system(SYSTEM_YOLOV5);

    }

    mouse_int();
    while (mouse_getClickevent() == 0 );
    mouse_close();


#if 0
    kill(child+1, 9);
#endif
}

void runYoloVX(lv_event_t * e)
{
	pid_t child;

    child = fork();
    if ( child == 0 ) {

   	 system(SYSTEM_YOLOVX);

    }

    mouse_int();
    while (mouse_getClickevent() == 0 );
    mouse_close();


#if 0
    kill(child+1, 9);
#endif
}

void runtYoloV3(lv_event_t * e)
{
	pid_t child;

    child = fork();
    if ( child == 0 ) {

   	 system(SYSTEM_YOLOV3);

    }

    mouse_int();
    while (mouse_getClickevent() == 0 );
    mouse_close();


#if 0
    kill(child+1, 9);
#endif
}

void runTinyYoloV3(lv_event_t * e)
{
	pid_t child;

    child = fork();
    if ( child == 0 ) {

   	 system(SYSTEM_TINYYOLOV3);

    }

    mouse_int();
    while (mouse_getClickevent() == 0 );
    mouse_close();


#if 0
    kill(child+1, 9);
#endif
}

void runYoloV2(lv_event_t * e)
{
	pid_t child;

    child = fork();
    if ( child == 0 ) {

   	 system(SYSTEM_YOLOV2);

    }

    mouse_int();
    while (mouse_getClickevent() == 0 );
    mouse_close();

#if 0
    kill(child+1, 9);
#endif

}

void runTinyYoloV2(lv_event_t * e)
{
	pid_t child;

    child = fork();
    if ( child == 0 ) {

		system(SYSTEM_TINYYOLOV2);
    }

    mouse_int();
    while (mouse_getClickevent() == 0 );
    mouse_close();

    mouse_int();
    while (mouse_getClickevent() == 0 );
    mouse_close();

#if 0
    kill(child+1, 9);
#endif
;
}

void runHRNet(lv_event_t * e)
{
	pid_t child;

    child = fork();
    if ( child == 0 ) {

		system(SYSTEM_HRNET);
    }

    mouse_int();
    while (mouse_getClickevent() == 0 );
    mouse_close();

#if 0
    kill(child+1, 9);
#endif

}
void runMMPose(lv_event_t * e)
{
	pid_t child;

    child = fork();
    if ( child == 0 ) {

		system(SYSTEM_MMPOSE);
    }

    mouse_int();
    while (mouse_getClickevent() == 0 );
    mouse_close();


    kill(child+1, 9);
}
void runDeepPose(lv_event_t * e)
{
	pid_t child;

    child = fork();
    if ( child == 0 ) {

		system(SYSTEM_DEEPPOSE);
    }

    mouse_int();
    while (mouse_getClickevent() == 0 );
    mouse_close();


    kill(child+1, 9);
}

void runPeopleCount(lv_event_t * e)
{
	pid_t child;

    child = fork();
    if ( child == 0 ) {

		system(SYSTEM_HEADCNT);
    }

    mouse_int();
    while (mouse_getClickevent() == 0 );
    mouse_close();


    kill(child+1, 9);
}

void runLineCrossing(lv_event_t * e)
{
	pid_t child;

    child = fork();
    if ( child == 0 ) {

		system(SYSTEM_LINECROSSING);
    }

    mouse_int();
    while (mouse_getClickevent() == 0 );
    mouse_close();


    kill(child+1, 9);
}

void runFallDetection(lv_event_t * e)
{
	pid_t child;

    child = fork();
    if ( child == 0 ) {

		system(SYSTEM_FALLDETECT);
    }

    mouse_int();
    while (mouse_getClickevent() == 0 );
    mouse_close();


    kill(child+1, 9);
}

void runSafetyHelmetDetection(lv_event_t * e)
{
	pid_t child;

    child = fork();
    if ( child == 0 ) {

		system(SYSTEM_FACERECOG);
    }

    mouse_int();
    while (mouse_getClickevent() == 0 );
    mouse_close();


    kill(child+1, 9);
}

void runAgeGenderDetection(lv_event_t * e)
{
	pid_t child;

    child = fork();
    if ( child == 0 ) {

		system(SYSTEM_AGEGENDERDET);
    }

    mouse_int();
    while (mouse_getClickevent() == 0 );
    mouse_close();


    kill(child+1, 9);
}

void runFaceRecognition(lv_event_t * e)
{
	pid_t child;

    child = fork();
    if ( child == 0 ) {

		system(SYSTEM_AGEGENDERDET);
    }

    mouse_int();
    while (mouse_getClickevent() == 0 );
    mouse_close();


    kill(child+1, 9);
}
