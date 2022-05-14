/*
 * MPU9250_Config.h
 *
 *  Created on: Feb 28, 2019
 *      Author: Desert
 */

#ifndef UTIL_MPU9250_CONFIG_H_
#define UTIL_MPU9250_CONFIG_H_

//#define USE_SPI 				1

#ifdef USE_SPI
	#include "spi.h"
	#define MPU9250_SPI		hspi1
	#define	MPU9250_CS_GPIO		MPU9250_CS_GPIO_Port
	#define	MPU9250_CS_PIN		MPU9250_CS_Pin
#else
	#include "i2c.h"
	#define _MPU9250_I2C		hi2c2
	#define DEVICE_ADD		208
#endif
#endif /* UTIL_MPU9250_CONFIG_H_ */
