# Marlin Configuration from scratch
Here are the instructions to configure marlin for Spark E1

Download the **pins_custom.h** from this folder and place it in `Marlin/src/pins` folder

Now make changes in the following files

## platformio.ini
Use
```default_envs = custom```
and add
```
[env:custom]
extends                = env:esp32
```

## configuration.h
Use
```#define MOTHERBOARD BOARD_CUSTOM```
and 
```
#define SERIAL_PORT 0
#define BAUDRATE 115200
#define SERIAL_PORT_2 -1
```

## configuration_adv.h
Uncomment
```#define ESP3D_WIFISUPPORT```
and
```
#define WEBSUPPORT
#define WIFI_CUSTOM_COMMAND
```

These were the configurations needed for the board. Now you can do the confugrations for your machine and you are good to go.
When you upload the firmware, it will create a network "MARLIN_ESP" with password "12345678". You can join this network and enter `192.168.0.1` in the browser to access the webUI. From the webUI, you can also give it the credentials of your WiFi network.
