################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ui/ui.c \
../ui/ui_events.c \
../ui/ui_helpers.c \
../ui/ui_img_497822574.c \
../ui/ui_img_race_robot_1280_720_png.c 

C_DEPS += \
./ui/ui.d \
./ui/ui_events.d \
./ui/ui_helpers.d \
./ui/ui_img_497822574.d \
./ui/ui_img_race_robot_1280_720_png.d 

OBJS += \
./ui/ui.o \
./ui/ui_events.o \
./ui/ui_helpers.o \
./ui/ui_img_497822574.o \
./ui/ui_img_race_robot_1280_720_png.o 


# Each subdirectory must supply rules for building sources it contributes
ui/%.o: ../ui/%.c ui/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	aarch64-poky-linux-gcc -I"/home/zkmike/eclipse-workspace/cpp/RZV2L_AI_Demo/rzv2lDemo" -I"/home/zkmike/eclipse-workspace/cpp/RZV2L_AI_Demo/rzv2lDemo/lvgl" -I"/home/zkmike/eclipse-workspace/cpp/RZV2L_AI_Demo/rzv2lDemo/lv_drivers" -O0 -g3 -Wall -c -fmessage-length=0 --sysroot=/opt/poky/rzv2l/sysroots/aarch64-poky-linux -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-ui

clean-ui:
	-$(RM) ./ui/ui.d ./ui/ui.o ./ui/ui_events.d ./ui/ui_events.o ./ui/ui_helpers.d ./ui/ui_helpers.o ./ui/ui_img_497822574.d ./ui/ui_img_497822574.o ./ui/ui_img_race_robot_1280_720_png.d ./ui/ui_img_race_robot_1280_720_png.o

.PHONY: clean-ui

