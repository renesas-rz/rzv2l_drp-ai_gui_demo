################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lv_drivers/win32drv/win32drv.c 

C_DEPS += \
./lv_drivers/win32drv/win32drv.d 

OBJS += \
./lv_drivers/win32drv/win32drv.o 


# Each subdirectory must supply rules for building sources it contributes
lv_drivers/win32drv/%.o: ../lv_drivers/win32drv/%.c lv_drivers/win32drv/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	aarch64-poky-linux-gcc -I"/home/zkmike/eclipse-workspace/cpp/RZV_AI_Demo/rzv2lDemo" -I"/home/zkmike/eclipse-workspace/cpp/RZV_AI_Demo/rzv2lDemo/lvgl" -I"/home/zkmike/eclipse-workspace/cpp/RZV_AI_Demo/rzv2lDemo/lv_drivers" -O0 -g3 -Wall -c -fmessage-length=0 --sysroot=/opt/poky/rzv2l/sysroots/aarch64-poky-linux -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-lv_drivers-2f-win32drv

clean-lv_drivers-2f-win32drv:
	-$(RM) ./lv_drivers/win32drv/win32drv.d ./lv_drivers/win32drv/win32drv.o

.PHONY: clean-lv_drivers-2f-win32drv

