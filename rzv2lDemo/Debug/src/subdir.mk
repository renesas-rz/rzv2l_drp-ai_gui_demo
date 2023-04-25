################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/app_button.c \
../src/app_events.c \
../src/app_panel.c \
../src/app_screen.c \
../src/rzv2l_Demo.c 

C_DEPS += \
./src/app_button.d \
./src/app_events.d \
./src/app_panel.d \
./src/app_screen.d \
./src/rzv2l_Demo.d 

OBJS += \
./src/app_button.o \
./src/app_events.o \
./src/app_panel.o \
./src/app_screen.o \
./src/rzv2l_Demo.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	aarch64-poky-linux-gcc -I"/home/zkmike/eclipse-workspace/cpp/RZV_AI_Demo/rzv2lDemo" -I"/home/zkmike/eclipse-workspace/cpp/RZV_AI_Demo/rzv2lDemo/lvgl" -I"/home/zkmike/eclipse-workspace/cpp/RZV_AI_Demo/rzv2lDemo/lv_drivers" -O0 -g3 -Wall -c -fmessage-length=0 --sysroot=/opt/poky/rzv2l/sysroots/aarch64-poky-linux -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/app_button.d ./src/app_button.o ./src/app_events.d ./src/app_events.o ./src/app_panel.d ./src/app_panel.o ./src/app_screen.d ./src/app_screen.o ./src/rzv2l_Demo.d ./src/rzv2l_Demo.o

.PHONY: clean-src

