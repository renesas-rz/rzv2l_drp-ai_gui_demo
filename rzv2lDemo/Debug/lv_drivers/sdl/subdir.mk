################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lv_drivers/sdl/sdl.c \
../lv_drivers/sdl/sdl_gpu.c 

C_DEPS += \
./lv_drivers/sdl/sdl.d \
./lv_drivers/sdl/sdl_gpu.d 

OBJS += \
./lv_drivers/sdl/sdl.o \
./lv_drivers/sdl/sdl_gpu.o 


# Each subdirectory must supply rules for building sources it contributes
lv_drivers/sdl/%.o: ../lv_drivers/sdl/%.c lv_drivers/sdl/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	aarch64-poky-linux-gcc -I"/home/zkmike/eclipse-workspace/cpp/RZV_AI_Demo/rzv2lDemo" -I"/home/zkmike/eclipse-workspace/cpp/RZV_AI_Demo/rzv2lDemo/lvgl" -I"/home/zkmike/eclipse-workspace/cpp/RZV_AI_Demo/rzv2lDemo/lv_drivers" -O0 -g3 -Wall -c -fmessage-length=0 --sysroot=/opt/poky/rzv2l/sysroots/aarch64-poky-linux -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-lv_drivers-2f-sdl

clean-lv_drivers-2f-sdl:
	-$(RM) ./lv_drivers/sdl/sdl.d ./lv_drivers/sdl/sdl.o ./lv_drivers/sdl/sdl_gpu.d ./lv_drivers/sdl/sdl_gpu.o

.PHONY: clean-lv_drivers-2f-sdl

