################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ascii.cpp \
../src/box.cpp \
../src/camera.cpp \
../src/centroidtracker.cpp \
../src/image.cpp \
../src/mouse.cpp \
../src/sample_app_tinyyolov2_cam.cpp \
../src/wayland.cpp 

CPP_DEPS += \
./src/ascii.d \
./src/box.d \
./src/camera.d \
./src/centroidtracker.d \
./src/image.d \
./src/mouse.d \
./src/sample_app_tinyyolov2_cam.d \
./src/wayland.d 

OBJS += \
./src/ascii.o \
./src/box.o \
./src/camera.o \
./src/centroidtracker.o \
./src/image.o \
./src/mouse.o \
./src/sample_app_tinyyolov2_cam.o \
./src/wayland.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	aarch64-poky-linux-g++ -I/opt/poky/rzv2l/sysroots/aarch64-poky-linux/usr/include/opencv4 -O0 -g3 -Wall -c -fmessage-length=0 --sysroot=/opt/poky/rzv2l/sysroots/aarch64-poky-linux -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/ascii.d ./src/ascii.o ./src/box.d ./src/box.o ./src/camera.d ./src/camera.o ./src/centroidtracker.d ./src/centroidtracker.o ./src/image.d ./src/image.o ./src/mouse.d ./src/mouse.o ./src/sample_app_tinyyolov2_cam.d ./src/sample_app_tinyyolov2_cam.o ./src/wayland.d ./src/wayland.o

.PHONY: clean-src

