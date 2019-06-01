/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

//s_add new sensor driver here
//export funtions
/*GC*/
UINT32 GC5025_MIPI_RAW_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 GC2355_MIPI_RAW_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 GC2235_RAW_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 GC2145MIPI_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 GC2035_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 GC0330_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 GC0329_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 GC0313MIPI_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 GC0310_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);


//! Add Sensor Init function here
//! Note:
//! 1. Add by the resolution from ""large to small"", due to large sensor
//!    will be possible to be main sensor.
//!    This can avoid I2C error during searching sensor.
//! 2. This file should be the same as mediatek\custom\common\hal\imgsensor\src\sensorlist.cpp
ACDK_KD_SENSOR_INIT_FUNCTION_STRUCT kdSensorList[MAX_NUM_OF_SUPPORT_SENSOR+1] =
{
/*GC*/
#if defined(GC5025_MIPI_RAW)
    {GC5025_SENSOR_ID, SENSOR_DRVNAME_GC5025_MIPI_RAW, GC5025_MIPI_RAW_SensorInit},
#endif
#if defined(GC2355_MIPI_RAW)
    {GC2355_SENSOR_ID, SENSOR_DRVNAME_GC2355_MIPI_RAW,GC2355_MIPI_RAW_SensorInit},
#endif
#if defined(GC2235_RAW)
    {GC2235_SENSOR_ID, SENSOR_DRVNAME_GC2235_RAW, GC2235_RAW_SensorInit},
#endif
#if defined(GC2145_MIPI_YUV)
    {GC2145_SENSOR_ID, SENSOR_DRVNAME_GC2145_MIPI_YUV, GC2145MIPI_YUV_SensorInit},
#endif
#if defined(GC2035_YUV)
    {GC2035_SENSOR_ID, SENSOR_DRVNAME_GC2035_YUV, GC2035_YUV_SensorInit},
#endif
#if defined(GC0330_YUV)
    {GC0330_SENSOR_ID, SENSOR_DRVNAME_GC0330_YUV, GC0330_YUV_SensorInit},
#endif
#if defined(GC0329_YUV)
    {GC0329_SENSOR_ID, SENSOR_DRVNAME_GC0329_YUV, GC0329_YUV_SensorInit},
#endif
#if defined(GC0313_MIPI_YUV)
    {GC0313MIPI_YUV_SENSOR_ID, SENSOR_DRVNAME_GC0313MIPI_YUV, GC0313MIPI_YUV_SensorInit},
#endif
#if defined(GC0310_MIPI_YUV)
    {GC0310_SENSOR_ID, SENSOR_DRVNAME_GC0310_MIPI_YUV,GC0310_YUV_SensorInit},
#endif
#if defined(GC0310_YUV)
    {GC0310_SENSOR_ID, SENSOR_DRVNAME_GC0310_YUV,GC0310_YUV_SensorInit},
#endif
/*  ADD sensor driver before this line */
    {0,{0},NULL}, //end of list
};
//e_add new sensor driver here

