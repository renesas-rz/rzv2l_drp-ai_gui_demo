PROJECT_ROOT = $(dir $(abspath $(lastword $(MAKEFILE_LIST))))

ifeq ($(BUILD_MODE),debug)
	CFLAGS += -g
else ifeq ($(BUILD_MODE),run)
	CFLAGS += -O2
else ifeq ($(BUILD_MODE),linuxtools)
	CFLAGS += -g -pg -fprofile-arcs -ftest-coverage
	LDFLAGS += -pg -fprofile-arcs -ftest-coverage
	EXTRA_CLEAN += test.gcda test.gcno $(PROJECT_ROOT)gmon.out
	EXTRA_CMDS = rm -rf test.gcda
else
    $(error Build mode $(BUILD_MODE) not supported by this Makefile)
endif

OPENCV_LINK = -isystem ${SDKTARGETSYSROOT}/usr/include/opencv4 \
			  -lopencv_imgcodecs -lopencv_imgproc -lopencv_core -lopencv_highgui

BSP_SDK_FLAG = \
			  -ljpeg -lwebp -ltiff -lz -ltbb -lgtk-3 -lpng16 -lgdk-3 -lcairo  \
			  -llzma -lrt -lcairo-gobject \
			  -lxkbcommon -lwayland-cursor -lwayland-egl -lwayland-client -lepoxy \
			  -lfribidi -lharfbuzz -lfontconfig \
			  -lglib-2.0 -lgobject-2.0 -lgdk_pixbuf-2.0 -lgmodule-2.0 -lpangocairo-1.0 \
			  -latk-1.0 -lgio-2.0 -lpango-1.0 -lfreetype -lpixman-1 -luuid -lpcre \
			  -lmount -lresolv -lexpat -lpangoft2-1.0 -lblkid \

all: tinyyolov2

tinyyolov2: sample_app_tinyyolov2_cam.cpp
	${CXX} -std=c++14 sample_app_tinyyolov2_cam.cpp camera.cpp image.cpp wayland.cpp ascii.cpp box.cpp \
	${OPENCV_LINK} ${BSP_SDK_FLAG} \
	-lpthread -O2 -ldl ${LDFLAGS} -o sample_app_tinyyolov2_cam

clean:
	rm -rf *.o sample_app_tinyyolov2_cam
