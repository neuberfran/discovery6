/*
 * Copyright (c) 2006-2022, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2021-12-10     Meco Man     first version
 */

#include <Arduino.h>
#include <SmartDrive.h>

SmartDrive smd = SmartDrive(SmartDrive_DefaultAddress);

void setup(void)
{
    Serial.begin();
}

void loop(void)
{
   //Serial.print("Motor powered: " + smd.IsMotorPowered(SmartDrive_Motor_ID_1));
   // smd.Run_Seconds(SmartDrive_Motor_ID_1, SmartDrive_Dir_Reverse, 90, 11, true, SmartDrive_Action_Brake);
   smd.Run_Unlimited(SmartDrive_Motor_ID_1, SmartDrive_Dir_Reverse, 90);
   smd.Run_Unlimited(SmartDrive_Motor_ID_2, SmartDrive_Dir_Forward, 90);
   delay(5000);
}
