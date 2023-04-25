################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lvgl/src/extra/widgets/imgbtn/lv_imgbtn.c 

C_DEPS += \
./lvgl/src/extra/widgets/imgbtn/lv_imgbtn.d 

OBJS += \
./lvgl/src/extra/widgets/imgbtn/lv_imgbtn.o 


# Each subdirectory must supply rules for building sources it contributes
lvgl/src/extra/widgets/imgbtn/%.o: ../lvgl/src/extra/widgets/imgbtn/%.c lvgl/src/extra/widgets/imgbtn/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	aarch64-poky-linux-gcc -I"/home/zkmike/eclipse-workspace/cpp/RZV_AI_Demo/rzv2lDemo" -I"/home/zkmike/eclipse-workspace/cpp/RZV_AI_Demo/rzv2lDemo/lvgl" -I"/home/zkmike/eclipse-workspace/cpp/RZV_AI_Demo/rzv2lDemo/lv_drivers" -O0 -g3 -Wall -c -fmessage-length=0 --sysroot=/opt/poky/rzv2l/sysroots/aarch64-poky-linux -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-lvgl-2f-src-2f-extra-2f-widgets-2f-imgbtn

clean-lvgl-2f-src-2f-extra-2f-widgets-2f-imgbtn:
	-$(RM) ./lvgl/src/extra/widgets/imgbtn/lv_imgbtn.d ./lvgl/src/extra/widgets/imgbtn/lv_imgbtn.o

.PHONY: clean-lvgl-2f-src-2f-extra-2f-widgets-2f-imgbtn

