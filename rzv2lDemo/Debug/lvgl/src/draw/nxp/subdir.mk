################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lvgl/src/draw/nxp/lv_gpu_nxp.c 

C_DEPS += \
./lvgl/src/draw/nxp/lv_gpu_nxp.d 

OBJS += \
./lvgl/src/draw/nxp/lv_gpu_nxp.o 


# Each subdirectory must supply rules for building sources it contributes
lvgl/src/draw/nxp/%.o: ../lvgl/src/draw/nxp/%.c lvgl/src/draw/nxp/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	aarch64-poky-linux-gcc -I"/home/zkmike/eclipse-workspace/cpp/RZV_AI_Demo/rzv2lDemo" -I"/home/zkmike/eclipse-workspace/cpp/RZV_AI_Demo/rzv2lDemo/lvgl" -I"/home/zkmike/eclipse-workspace/cpp/RZV_AI_Demo/rzv2lDemo/lv_drivers" -O0 -g3 -Wall -c -fmessage-length=0 --sysroot=/opt/poky/rzv2l/sysroots/aarch64-poky-linux -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-lvgl-2f-src-2f-draw-2f-nxp

clean-lvgl-2f-src-2f-draw-2f-nxp:
	-$(RM) ./lvgl/src/draw/nxp/lv_gpu_nxp.d ./lvgl/src/draw/nxp/lv_gpu_nxp.o

.PHONY: clean-lvgl-2f-src-2f-draw-2f-nxp

