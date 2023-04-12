# MVP - Open Close Window - Contest RT-THREAD/LVGL with STM32F469 DISCOVERY KIT

 ***Note:*** 
 1) My board only arrived on 2022-07-23. I managed to MVP just my Open Close Window project. I hope to continue.
 
 2) As per photo/github, I already have the project running on Android 12 (App OCW). Of course, the board will need to have an internet connection for calls/responses to/from the backend/firebase:
 https://github.com/neuberfran/OpenCloseWindow
 
 3) In day 2022-08-21. https://github.com/neuberfran/discovery7 When I create File ui_events.cpp And I made the call and event functions for the OCW project

## Video

<a href="http://www.youtube.com/watch?feature=player_embedded&v=JVIMWJRtwyE
" target="_blank"><img src="http://img.youtube.com/vi/JVIMWJRtwyE/0.jpg" 
alt="IMAGE ALT TEXT HERE" width="240" height="180" border="10" /></a>

<a href="http://www.youtube.com/watch?feature=player_embedded&v=MAr3F34bJsk
" target="_blank"><img src="http://img.youtube.com/vi/MAr3F34bJsk/0.jpg"
alt="IMAGE ALT TEXT HERE" width="240" height="180" border="10" /></a>

<a href="http://www.youtube.com/watch?feature=player_embedded&v=IEpiTdXtcsw
" target="_blank"><img src="http://img.youtube.com/vi/IEpiTdXtcsw/0.jpg"
alt="IMAGE ALT TEXT HERE" width="240" height="180" border="10" /></a>



# Hardware Used

STM32F469 DISCOVERY KIT (***)

i2c - External Driver named SmartDrive (Based on IC VNH2SP30):

Link do buy: http://www.mindsensors.com/rpi/76-smartdrive-high-current-motor-controller
https://github.com/neuberfran/SmartDrive/blob/master/imgSmartDrive.png

Two used car windshield motors (***)

Power Supply 12V 20A (***)

Breadboard & wire jumpers (*** Look to SDA, SCL Connections)

(***) = photos below

# Software Used

RT-Thread OS 4.1.1 build Aug 15 2022 

Lib in C++ Using Wire.h (Arduino Platform)
https://github.com/neuberfran/SmartDriveEmC

RTduino (by RT-Thread) to use in RT-Thread OS to communicate with Lib above

LVGL - v8.3.0

RT-Thread Studio - v2.2.5

FT6236 touch driver package


# Images:

![Test Image 1](https://github.com/neuberfran/discovery6/blob/main/photo101.jpg)

![Test Image 2](https://github.com/neuberfran/discovery6/blob/main/photo99.jpg)

![Test Image 3](https://github.com/neuberfran/discovery6/blob/main/PHOTO01.jpg)

![Test Image 4](https://github.com/neuberfran/discovery6/blob/main/photo100.jpg)

![Test Image 5](https://github.com/neuberfran/discovery6/blob/main/PHOTO02.jpg)

![Test Image 6](https://github.com/neuberfran/discovery6/blob/main/PHOTO03.jpg)

![Test Image 7](https://github.com/neuberfran/discovery6/blob/main/OCW.jpg)

![Test Image 8](https://github.com/neuberfran/discovery6/blob/main/OcwInAndroid12.jpg)


