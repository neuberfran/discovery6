# MVP - Open Close Window - Contest RT-THREAD/LVGL with STM32F469 DISCOVERY KIT

 ***Note:*** 
 1) My board only arrived on 2022-07-23. I managed to MVP just my Open Close Window project. I hope to continue.
 
 2) As per photo/github, I already have the project running on Android 12 (App OCW). Of course, the board will need to have an internet connection for calls/responses to/from the backend/firebase:
 https://github.com/neuberfran/OpenCloseWindow

## Video

<a href="http://www.youtube.com/watch?feature=player_embedded&v=JVIMWJRtwyE
" target="_blank"><img src="http://img.youtube.com/vi/JVIMWJRtwyE/0.jpg" 
alt="IMAGE ALT TEXT HERE" width="240" height="180" border="10" /></a>

## Hardware Used

STM32F469 DISCOVERY KIT

i2c - External Driver named SmartDrive:
https://github.com/neuberfran/SmartDrive/blob/master/imgSmartDrive.png

Two used car windshield motors

Power Supply 12V 20A

Breadboard & wire jumpers

## Software Used

RT-Thread OS 4.1.1 build Aug 15 2022 

Lib in C++ Using Wire.h (Arduino Platform)
https://github.com/neuberfran/SmartDriveEmC

RTduino (by RT-Thread) to use in RT-Thread OS to communicate with Lib above

LVGL - v8.3.0

RT-Thread Studio - v2.2.5

FT6236 touch driver package


## Images:

![Test Image 2](https://github.com/neuberfran/discovery6/blob/main/Screen.jpg)

![Test Image 3](https://github.com/neuberfran/discovery6/blob/main/OCW.jpg)

![Test Image 4](https://github.com/neuberfran/discovery6/blob/main/OcwInAndroid12.jpg)


