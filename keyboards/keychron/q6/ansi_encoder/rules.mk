# MCU name
MCU = STM32L432

# Bootloader selection
BOOTLOADER = stm32-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable USB N-key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
ENCODER_ENABLE = yes        # Enable Encoder (Separate Volume switch on the keyboard)
DIP_SWITCH_ENABLE = yes
RGB_MATRIX_ENABLE = yes     # RGB LED under each key
RGB_MATRIX_DRIVER = CKLED2001
LTO_ENABLE = yes            # Link Time Enable (Create smaller binary)
EEPROM_DRIVER = wear_leveling
WEAR_LEVELING_DRIVER = embedded_flash

LEADER_ENABLE = yes         # Enable the Leader Key functionality of QMK

# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

# custom matrix setup
CUSTOM_MATRIX = lite

SRC += matrix.c
