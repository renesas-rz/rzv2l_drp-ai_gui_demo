################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lvgl/src/extra/layouts/flex/lv_flex.c 

C_DEPS += \
./lvgl/src/extra/layouts/flex/lv_flex.d 

OBJS += \
./lvgl/src/extra/layouts/flex/lv_flex.o 


# Each subdirectory must supply rules for building sources it contributes
lvgl/src/extra/layouts/flex/%.o: ../lvgl/src/extra/layouts/flex/%.c lvgl/src/extra/layouts/flex/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	aarch64-poky-linux-gcc -I"/home/zkmike/eclipse-workspace/cpp/RZV2L_AI_Demo/rzv2lDemo" -I"/home/zkmike/eclipse-workspace/cpp/RZV2L_AI_Demo/rzv2lDemo/lvgl" -I"/home/zkmike/eclipse-workspace/cpp/RZV2L_AI_Demo/rzv2lDemo/lv_drivers" -O0 -g3 -Wall -c -fmessage-length=0 --sysroot=/opt/poky/rzv2l/sysroots/aarch64-poky-linux -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-lvgl-2f-src-2f-extra-2f-layouts-2f-flex

clean-lvgl-2f-src-2f-extra-2f-layouts-2f-flex:
	-$(RM) ./lvgl/src/extra/layouts/flex/lv_flex.d ./lvgl/src/extra/layouts/flex/lv_flex.o

.PHONY: clean-lvgl-2f-src-2f-extra-2f-layouts-2f-flex

