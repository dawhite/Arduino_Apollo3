/* 
// This file is subject to the terms and conditions defined in
// file 'LICENSE.md', which is part of this source code package.
*/

#ifndef _VARIANT_H_
#define _VARIANT_H_

#include "Arduino.h"

#include "config/pins.h"

#define VARIANT_SPI_INTFCS  3
#define VARIANT_WIRE_INTFCS 1

// SPI
#define VARIANT_SPI_SDI     SPI_SDI
#define VARIANT_SPI_SDO     SPI_SDO
#define VARIANT_SPI_CLK     SPI_CLK

#define VARIANT_SPI1_SDI     D25
#define VARIANT_SPI1_SDO     D28
#define VARIANT_SPI1_CLK     D27

#define VARIANT_SPI2_SDI     D43
#define VARIANT_SPI2_SDO     D38
#define VARIANT_SPI2_CLK     D42

// Wire
#define VARIANT_Wire_SDA    I2C_SDA
#define VARIANT_Wire_SCL    I2C_SCL

#endif // _VARIANT_H_
