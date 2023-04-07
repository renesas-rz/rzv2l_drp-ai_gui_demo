################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lv_drivers/display/GC9A01.c \
../lv_drivers/display/ILI9341.c \
../lv_drivers/display/R61581.c \
../lv_drivers/display/SHARP_MIP.c \
../lv_drivers/display/SSD1963.c \
../lv_drivers/display/ST7565.c \
../lv_drivers/display/UC1610.c \
../lv_drivers/display/drm.c \
../lv_drivers/display/fbdev.c 

C_DEPS += \
./lv_drivers/display/GC9A01.d \
./lv_drivers/display/ILI9341.d \
./lv_drivers/display/R61581.d \
./lv_drivers/display/SHARP_MIP.d \
./lv_drivers/display/SSD1963.d \
./lv_drivers/display/ST7565.d \
./lv_drivers/display/UC1610.d \
./lv_drivers/display/drm.d \
./lv_drivers/display/fbdev.d 

OBJS += \
./lv_drivers/display/GC9A01.o \
./lv_drivers/display/ILI9341.o \
./lv_drivers/display/R61581.o \
./lv_drivers/display/SHARP_MIP.o \
./lv_drivers/display/SSD1963.o \
./lv_drivers/display/ST7565.o \
./lv_drivers/display/UC1610.o \
./lv_drivers/display/drm.o \
./lv_drivers/display/fbdev.o 


# Each subdirectory must supply rules for building sources it contributes
lv_drivers/display/%.o: ../lv_drivers/display/%.c lv_drivers/display/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	aarch64-poky-linux-gcc -I"/home/zkmike/eclipse-workspace/cpp/RZV2L_AI_Demo/rzv2lDemo" -I"/home/zkmike/eclipse-workspace/cpp/RZV2L_AI_Demo/rzv2lDemo/lvgl" -I"/home/zkmike/eclipse-workspace/cpp/RZV2L_AI_Demo/rzv2lDemo/lv_drivers" -O0 -g3 -Wall -c -fmessage-length=0 --sysroot=/opt/poky/rzv2l/sysroots/aarch64-poky-linux -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-lv_drivers-2f-display

clean-lv_drivers-2f-display:
	-$(RM) ./lv_drivers/display/GC9A01.d ./lv_drivers/display/GC9A01.o ./lv_drivers/display/ILI9341.d ./lv_drivers/display/ILI9341.o ./lv_drivers/display/R61581.d ./lv_drivers/display/R61581.o ./lv_drivers/display/SHARP_MIP.d ./lv_drivers/display/SHARP_MIP.o ./lv_drivers/display/SSD1963.d ./lv_drivers/display/SSD1963.o ./lv_drivers/display/ST7565.d ./lv_drivers/display/ST7565.o ./lv_drivers/display/UC1610.d ./lv_drivers/display/UC1610.o ./lv_drivers/display/drm.d ./lv_drivers/display/drm.o ./lv_drivers/display/fbdev.d ./lv_drivers/display/fbdev.o

.PHONY: clean-lv_drivers-2f-display

