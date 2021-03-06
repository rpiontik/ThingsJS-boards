/*
 * hw_consts.h
 *
 *  Created on: 5 февр. 2019 г.
 *      Author: rpiontik
 */

#ifndef MAIN_LIBS_INTERFACES_I_CONSTS_H_
#define MAIN_LIBS_INTERFACES_I_CONSTS_H_

#include <stddef.h>
#include <stdbool.h>
#include "driver/gpio.h"

//Hardware id
extern const char BOARD_ID[];
extern const char BOARD_VERSION[];

#define RES_LIMIT_UNAVAILABLE   0
#define RES_LIMIT_INFINITY      -1

//PINS
//		name			id
#define VIN				1004
#define GND1			1003
#define GPIO13			13
#define GPIO12			12
#define GPIO14			14
#define GPIO27			27
#define GPIO26			26
#define GPIO25			25
#define GPIO33			33
#define GPIO32			32
#define GPIO35			35
#define GPIO34			34
#define GPIO39			39
#define GPIO36			36
#define EN				1003

#define V3V3			1002
#define GND2			1001
#define GPIO15			15
#define GPIO2			2
#define GPIO0			0
#define GPIO4			4
#define GPIO16			16
#define GPIO17			17
#define GPIO5			5
#define GPIO18			18
#define GPIO19			19
#define GPIO21			21
#define GPIO3			3
#define GPIO1			1
#define GPIO22			22
#define GPIO23			23

//Core resource
#define RES_LEDC_0		5001
#define RES_LEDC_1		5002

//UARTs
#define RES_UART_0		6000
#define RES_UART_1		6001
#define RES_UART_2		6002

//Virtual resources
#define RES_VIRTUAL		10000


//Number of pins that available for using
#define BOARD_TOTAL_NUMBER_OF_PINS	37

//Definition of pin on board
struct board_pin {
	int id;				//Internal Id of pin
	long limit;         //Limit count of bind 0 - unavailable, (-1) - infinity
	char * name;		//Human name of pin
};


//Hardware map of pins
extern const struct board_pin BOARD_PINS_MAP[BOARD_TOTAL_NUMBER_OF_PINS];

#endif /* MAIN_LIBS_INTERFACES_I_CONSTS_H_ */
