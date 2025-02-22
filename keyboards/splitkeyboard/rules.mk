# MCU name
MCU = STM32F103

# Bootloader selection
BOOTLOADER = stm32duino
#stm32-dfu

# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = no      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no        # Console for debug
COMMAND_ENABLE = no        # Commands for debug and configuration
NKRO_ENABLE = no           # Enable N-Key Rollover
#BACKLIGHT_ENABLE = yes       # Enable keyboard backlight functionality
#RGBLIGHT_ENABLE = yes        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
SLEEP_LED_ENABLE = yes

SPLIT_KEYBOARD = yes
SERIAL_DRIVER = usart

ENCODER_ENABLE = yes
# alternative zum testen
ENCODER_MAP_ENABLE = yes
