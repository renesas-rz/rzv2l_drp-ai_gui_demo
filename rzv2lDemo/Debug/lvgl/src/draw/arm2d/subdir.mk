################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lvgl/src/draw/arm2d/lv_gpu_arm2d.c 

C_DEPS += \
./lvgl/src/draw/arm2d/lv_gpu_arm2d.d 

OBJS += \
./lvgl/src/draw/arm2d/lv_gpu_arm2d.o 


# Each subdirectory must supply rules for building sources it contributes
lvgl/src/draw/arm2d/%.o: ../lvgl/src/draw/arm2d/%.c lvgl/src/draw/arm2d/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	aarch64-poky-linux-gcc -I"/home/zkmike/eclipse-workspace/cpp/RZV_AI_Demo/rzv2lDemo" -I"/home/zkmike/eclipse-workspace/cpp/RZV_AI_Demo/rzv2lDemo/lvgl" -I"/home/zkmike/eclipse-workspace/cpp/RZV_AI_Demo/rzv2lDemo/lv_drivers" -O0 -g3 -Wall -c -fmessage-length=0 --sysroot=/opt/poky/rzv2l/sysroots/aarch64-poky-linux -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-lvgl-2f-src-2f-draw-2f-arm2d

clean-lvgl-2f-src-2f-draw-2f-arm2d:
	-$(RM) ./lvgl/src/draw/arm2d/lv_gpu_arm2d.d ./lvgl/src/draw/arm2d/lv_gpu_arm2d.o

.PHONY: clean-lvgl-2f-src-2f-draw-2f-arm2d

