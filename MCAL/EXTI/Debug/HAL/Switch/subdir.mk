################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/Switch/Swirch_prog.c \
../HAL/Switch/Switch_config.c 

OBJS += \
./HAL/Switch/Swirch_prog.o \
./HAL/Switch/Switch_config.o 

C_DEPS += \
./HAL/Switch/Swirch_prog.d \
./HAL/Switch/Switch_config.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/Switch/%.o: ../HAL/Switch/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


