################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../images/ui_img_race_robot_1280_720_png.c \
../images/ui_img_renesas_logomark_l_png.c 

C_DEPS += \
./images/ui_img_race_robot_1280_720_png.d \
./images/ui_img_renesas_logomark_l_png.d 

OBJS += \
./images/ui_img_race_robot_1280_720_png.o \
./images/ui_img_renesas_logomark_l_png.o 


# Each subdirectory must supply rules for building sources it contributes
images/%.o: ../images/%.c images/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	aarch64-poky-linux-gcc -I"/home/zkmike/eclipse-workspace/cpp/RZV_AI_Demo/rzv2lDemo" -I"/home/zkmike/eclipse-workspace/cpp/RZV_AI_Demo/rzv2lDemo/lvgl" -I"/home/zkmike/eclipse-workspace/cpp/RZV_AI_Demo/rzv2lDemo/lv_drivers" -O0 -g3 -Wall -c -fmessage-length=0 --sysroot=/opt/poky/rzv2l/sysroots/aarch64-poky-linux -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-images

clean-images:
	-$(RM) ./images/ui_img_race_robot_1280_720_png.d ./images/ui_img_race_robot_1280_720_png.o ./images/ui_img_renesas_logomark_l_png.d ./images/ui_img_renesas_logomark_l_png.o

.PHONY: clean-images

