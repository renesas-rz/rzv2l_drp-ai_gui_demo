################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lvgl/env_support/rt-thread/lv_rt_thread_port.c 

C_DEPS += \
./lvgl/env_support/rt-thread/lv_rt_thread_port.d 

OBJS += \
./lvgl/env_support/rt-thread/lv_rt_thread_port.o 


# Each subdirectory must supply rules for building sources it contributes
lvgl/env_support/rt-thread/%.o: ../lvgl/env_support/rt-thread/%.c lvgl/env_support/rt-thread/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	aarch64-poky-linux-gcc -I"/home/zkmike/eclipse-workspace/cpp/RZV_AI_Demo/rzv2lDemo" -I"/home/zkmike/eclipse-workspace/cpp/RZV_AI_Demo/rzv2lDemo/lvgl" -I"/home/zkmike/eclipse-workspace/cpp/RZV_AI_Demo/rzv2lDemo/lv_drivers" -O0 -g3 -Wall -c -fmessage-length=0 --sysroot=/opt/poky/rzv2l/sysroots/aarch64-poky-linux -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-lvgl-2f-env_support-2f-rt-2d-thread

clean-lvgl-2f-env_support-2f-rt-2d-thread:
	-$(RM) ./lvgl/env_support/rt-thread/lv_rt_thread_port.d ./lvgl/env_support/rt-thread/lv_rt_thread_port.o

.PHONY: clean-lvgl-2f-env_support-2f-rt-2d-thread

