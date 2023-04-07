################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lvgl/src/draw/sdl/lv_draw_sdl.c \
../lvgl/src/draw/sdl/lv_draw_sdl_arc.c \
../lvgl/src/draw/sdl/lv_draw_sdl_bg.c \
../lvgl/src/draw/sdl/lv_draw_sdl_composite.c \
../lvgl/src/draw/sdl/lv_draw_sdl_img.c \
../lvgl/src/draw/sdl/lv_draw_sdl_label.c \
../lvgl/src/draw/sdl/lv_draw_sdl_layer.c \
../lvgl/src/draw/sdl/lv_draw_sdl_line.c \
../lvgl/src/draw/sdl/lv_draw_sdl_mask.c \
../lvgl/src/draw/sdl/lv_draw_sdl_polygon.c \
../lvgl/src/draw/sdl/lv_draw_sdl_rect.c \
../lvgl/src/draw/sdl/lv_draw_sdl_stack_blur.c \
../lvgl/src/draw/sdl/lv_draw_sdl_texture_cache.c \
../lvgl/src/draw/sdl/lv_draw_sdl_utils.c 

C_DEPS += \
./lvgl/src/draw/sdl/lv_draw_sdl.d \
./lvgl/src/draw/sdl/lv_draw_sdl_arc.d \
./lvgl/src/draw/sdl/lv_draw_sdl_bg.d \
./lvgl/src/draw/sdl/lv_draw_sdl_composite.d \
./lvgl/src/draw/sdl/lv_draw_sdl_img.d \
./lvgl/src/draw/sdl/lv_draw_sdl_label.d \
./lvgl/src/draw/sdl/lv_draw_sdl_layer.d \
./lvgl/src/draw/sdl/lv_draw_sdl_line.d \
./lvgl/src/draw/sdl/lv_draw_sdl_mask.d \
./lvgl/src/draw/sdl/lv_draw_sdl_polygon.d \
./lvgl/src/draw/sdl/lv_draw_sdl_rect.d \
./lvgl/src/draw/sdl/lv_draw_sdl_stack_blur.d \
./lvgl/src/draw/sdl/lv_draw_sdl_texture_cache.d \
./lvgl/src/draw/sdl/lv_draw_sdl_utils.d 

OBJS += \
./lvgl/src/draw/sdl/lv_draw_sdl.o \
./lvgl/src/draw/sdl/lv_draw_sdl_arc.o \
./lvgl/src/draw/sdl/lv_draw_sdl_bg.o \
./lvgl/src/draw/sdl/lv_draw_sdl_composite.o \
./lvgl/src/draw/sdl/lv_draw_sdl_img.o \
./lvgl/src/draw/sdl/lv_draw_sdl_label.o \
./lvgl/src/draw/sdl/lv_draw_sdl_layer.o \
./lvgl/src/draw/sdl/lv_draw_sdl_line.o \
./lvgl/src/draw/sdl/lv_draw_sdl_mask.o \
./lvgl/src/draw/sdl/lv_draw_sdl_polygon.o \
./lvgl/src/draw/sdl/lv_draw_sdl_rect.o \
./lvgl/src/draw/sdl/lv_draw_sdl_stack_blur.o \
./lvgl/src/draw/sdl/lv_draw_sdl_texture_cache.o \
./lvgl/src/draw/sdl/lv_draw_sdl_utils.o 


# Each subdirectory must supply rules for building sources it contributes
lvgl/src/draw/sdl/%.o: ../lvgl/src/draw/sdl/%.c lvgl/src/draw/sdl/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	aarch64-poky-linux-gcc -I"/home/zkmike/eclipse-workspace/cpp/RZV2L_AI_Demo/rzv2lDemo" -I"/home/zkmike/eclipse-workspace/cpp/RZV2L_AI_Demo/rzv2lDemo/lvgl" -I"/home/zkmike/eclipse-workspace/cpp/RZV2L_AI_Demo/rzv2lDemo/lv_drivers" -O0 -g3 -Wall -c -fmessage-length=0 --sysroot=/opt/poky/rzv2l/sysroots/aarch64-poky-linux -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-lvgl-2f-src-2f-draw-2f-sdl

clean-lvgl-2f-src-2f-draw-2f-sdl:
	-$(RM) ./lvgl/src/draw/sdl/lv_draw_sdl.d ./lvgl/src/draw/sdl/lv_draw_sdl.o ./lvgl/src/draw/sdl/lv_draw_sdl_arc.d ./lvgl/src/draw/sdl/lv_draw_sdl_arc.o ./lvgl/src/draw/sdl/lv_draw_sdl_bg.d ./lvgl/src/draw/sdl/lv_draw_sdl_bg.o ./lvgl/src/draw/sdl/lv_draw_sdl_composite.d ./lvgl/src/draw/sdl/lv_draw_sdl_composite.o ./lvgl/src/draw/sdl/lv_draw_sdl_img.d ./lvgl/src/draw/sdl/lv_draw_sdl_img.o ./lvgl/src/draw/sdl/lv_draw_sdl_label.d ./lvgl/src/draw/sdl/lv_draw_sdl_label.o ./lvgl/src/draw/sdl/lv_draw_sdl_layer.d ./lvgl/src/draw/sdl/lv_draw_sdl_layer.o ./lvgl/src/draw/sdl/lv_draw_sdl_line.d ./lvgl/src/draw/sdl/lv_draw_sdl_line.o ./lvgl/src/draw/sdl/lv_draw_sdl_mask.d ./lvgl/src/draw/sdl/lv_draw_sdl_mask.o ./lvgl/src/draw/sdl/lv_draw_sdl_polygon.d ./lvgl/src/draw/sdl/lv_draw_sdl_polygon.o ./lvgl/src/draw/sdl/lv_draw_sdl_rect.d ./lvgl/src/draw/sdl/lv_draw_sdl_rect.o ./lvgl/src/draw/sdl/lv_draw_sdl_stack_blur.d ./lvgl/src/draw/sdl/lv_draw_sdl_stack_blur.o ./lvgl/src/draw/sdl/lv_draw_sdl_texture_cache.d ./lvgl/src/draw/sdl/lv_draw_sdl_texture_cache.o ./lvgl/src/draw/sdl/lv_draw_sdl_utils.d ./lvgl/src/draw/sdl/lv_draw_sdl_utils.o

.PHONY: clean-lvgl-2f-src-2f-draw-2f-sdl

