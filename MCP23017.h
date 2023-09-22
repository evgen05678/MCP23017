/*
 * MCP23017.h
 *
 *  Created on: Sep 22, 2023
 *      Author: User
 */

#ifndef MCP23017_MCP23017_H_
#define MCP23017_MCP23017_H_

#include "main.h"

typedef union {
	struct {
		uint8_t IO7 :1;
		uint8_t IO6 :1;
		uint8_t IO5 :1;
		uint8_t IO4 :1;
		uint8_t IO3 :1;
		uint8_t IO2 :1;
		uint8_t IO1 :1;
		uint8_t IO0 :1;
	}bits;
	uint8_t reg;
}IODIRA_reg_u;

typedef union {
	struct {
		uint8_t IO7 :1;
		uint8_t IO6 :1;
		uint8_t IO5 :1;
		uint8_t IO4 :1;
		uint8_t IO3 :1;
		uint8_t IO2 :1;
		uint8_t IO1 :1;
		uint8_t IO0 :1;
	}bits;
	uint8_t reg;
}IODIRB_reg_u;

typedef union {
	struct {
		uint8_t IP7 :1;
		uint8_t IP6 :1;
		uint8_t IP5 :1;
		uint8_t IP4 :1;
		uint8_t IP3 :1;
		uint8_t IP2 :1;
		uint8_t IP1 :1;
		uint8_t IP0 :1;
	}bits;
	uint8_t reg;
}IPOLA_reg_u;

typedef union {
	struct {
		uint8_t IP7 :1;
		uint8_t IP6 :1;
		uint8_t IP5 :1;
		uint8_t IP4 :1;
		uint8_t IP3 :1;
		uint8_t IP2 :1;
		uint8_t IP1 :1;
		uint8_t IP0 :1;
	}bits;
	uint8_t reg;
}IPOLB_reg_u;


typedef union {
	struct {
		uint8_t GPINT7 :1;
		uint8_t GPINT6 :1;
		uint8_t GPINT5 :1;
		uint8_t GPINT4 :1;
		uint8_t GPINT3 :1;
		uint8_t GPINT2 :1;
		uint8_t GPINT1 :1;
		uint8_t GPINT0 :1;
	}bits;
	uint8_t reg;
}GPINTENA_reg_u;


typedef union {
	struct {
		uint8_t GPINT7 :1;
		uint8_t GPINT6 :1;
		uint8_t GPINT5 :1;
		uint8_t GPINT4 :1;
		uint8_t GPINT3 :1;
		uint8_t GPINT2 :1;
		uint8_t GPINT1 :1;
		uint8_t GPINT0 :1;
	}bits;
	uint8_t reg;
}GPINTENB_reg_u;


typedef union {
	struct {
		uint8_t DEF7 :1;
		uint8_t DEF6 :1;
		uint8_t DEF5 :1;
		uint8_t DEF4 :1;
		uint8_t DEF3 :1;
		uint8_t DEF2 :1;
		uint8_t DEF1 :1;
		uint8_t DEF0 :1;
	}bits;
	uint8_t reg;
}DEFVALA_reg_u;

typedef union {
	struct {
		uint8_t DEF7 :1;
		uint8_t DEF6 :1;
		uint8_t DEF5 :1;
		uint8_t DEF4 :1;
		uint8_t DEF3 :1;
		uint8_t DEF2 :1;
		uint8_t DEF1 :1;
		uint8_t DEF0 :1;
	}bits;
	uint8_t reg;
}DEFVALB_reg_u;

typedef union {
	struct {
		uint8_t IOC7 :1;
		uint8_t IOC6 :1;
		uint8_t IOC5 :1;
		uint8_t IOC4 :1;
		uint8_t IOC3 :1;
		uint8_t IOC2 :1;
		uint8_t IOC1 :1;
		uint8_t IOC0 :1;
	}bits;
	uint8_t reg;
}INTCONA_reg_u;

typedef union {
	struct {
		uint8_t IOC7 :1;
		uint8_t IOC6 :1;
		uint8_t IOC5 :1;
		uint8_t IOC4 :1;
		uint8_t IOC3 :1;
		uint8_t IOC2 :1;
		uint8_t IOC1 :1;
		uint8_t IOC0 :1;
	}bits;
	uint8_t reg;
}INTCONB_reg_u;

typedef union {
	struct {
		uint8_t BANK :1;
		uint8_t MIRROR :1;
		uint8_t SEQOP :1;
		uint8_t DISSLW :1;
		uint8_t HAEN :1;
		uint8_t ODR :1;
		uint8_t INTPOL : 1;
		uint8_t unused :1;
	}bits;
	uint8_t reg;
}IOCONA_reg_u;

typedef union {
	struct {
		uint8_t BANK :1;
		uint8_t MIRROR :1;
		uint8_t SEQOP :1;
		uint8_t DISSLW :1;
		uint8_t HAEN :1;
		uint8_t ODR :1;
		uint8_t INTPOL : 1;
		uint8_t unused :1;
	}bits;
	uint8_t reg;
}IOCONB_reg_u;



typedef union {
	struct {
		uint8_t PU7 :1;
		uint8_t PU6 :1;
		uint8_t PU5 :1;
		uint8_t PU4 :1;
		uint8_t PU3 :1;
		uint8_t PU2 :1;
		uint8_t PU1 :1;
		uint8_t PU0 :1;
	}bits;
	uint8_t reg;
}GPPUA_reg_u;

typedef union {
	struct {
		uint8_t PU7 :1;
		uint8_t PU6 :1;
		uint8_t PU5 :1;
		uint8_t PU4 :1;
		uint8_t PU3 :1;
		uint8_t PU2 :1;
		uint8_t PU1 :1;
		uint8_t PU0 :1;
	}bits;
	uint8_t reg;
}GPPUB_reg_u;

typedef union {
	struct {
		uint8_t INT7 :1;
		uint8_t INT6 :1;
		uint8_t INT5 :1;
		uint8_t INT4 :1;
		uint8_t INT3 :1;
		uint8_t INT2 :1;
		uint8_t INT1 :1;
		uint8_t INT0 :1;
	}bits;
	uint8_t reg;
}INTFA_reg_u;

typedef union {
	struct {
		uint8_t INT7 :1;
		uint8_t INT6 :1;
		uint8_t INT5 :1;
		uint8_t INT4 :1;
		uint8_t INT3 :1;
		uint8_t INT2 :1;
		uint8_t INT1 :1;
		uint8_t INT0 :1;
	}bits;
	uint8_t reg;
}INTFB_reg_u;

typedef union {
	struct {
		uint8_t ICP7 :1;
		uint8_t ICP6 :1;
		uint8_t ICP5 :1;
		uint8_t ICP4 :1;
		uint8_t ICP3 :1;
		uint8_t ICP2 :1;
		uint8_t ICP1 :1;
		uint8_t ICP0 :1;
	}bits;
	uint8_t reg;
}INTCAPA_reg_u;

typedef union {
	struct {
		uint8_t ICP7 :1;
		uint8_t ICP6 :1;
		uint8_t ICP5 :1;
		uint8_t ICP4 :1;
		uint8_t ICP3 :1;
		uint8_t ICP2 :1;
		uint8_t ICP1 :1;
		uint8_t ICP0 :1;
	}bits;
	uint8_t reg;
}INTCAPB_reg_u;

typedef union {
	struct {
		uint8_t GP7 :1;
		uint8_t GP6 :1;
		uint8_t GP5 :1;
		uint8_t GP4 :1;
		uint8_t GP3 :1;
		uint8_t GP2 :1;
		uint8_t GP1 :1;
		uint8_t GP0 :1;
	}bits;
	uint8_t reg;
}GPIOA_reg_u;

typedef union {
	struct {
		uint8_t GP7 :1;
		uint8_t GP6 :1;
		uint8_t GP5 :1;
		uint8_t GP4 :1;
		uint8_t GP3 :1;
		uint8_t GP2 :1;
		uint8_t GP1 :1;
		uint8_t GP0 :1;
	}bits;
	uint8_t reg;
}GPIOB_reg_u;

typedef union {
	struct {
		uint8_t OL7 :1;
		uint8_t OL6 :1;
		uint8_t OL5 :1;
		uint8_t OL4 :1;
		uint8_t OL3 :1;
		uint8_t OL2 :1;
		uint8_t OL1 :1;
		uint8_t OL0 :1;
	}bits;
	uint8_t reg;
}OLATA_reg_u;

typedef union {
	struct {
		uint8_t OL7 :1;
		uint8_t OL6 :1;
		uint8_t OL5 :1;
		uint8_t OL4 :1;
		uint8_t OL3 :1;
		uint8_t OL2 :1;
		uint8_t OL1 :1;
		uint8_t OL0 :1;
	}bits;
	uint8_t reg;
}OLATB_reg_u;

typedef struct {
	IODIRA_reg_u IODIRA;
	IODIRB_reg_u IODIRB;
	IPOLA_reg_u  IOPOLA;
	IPOLB_reg_u  IOPOLB;
	GPINTENA_reg_u GPINTENA;
	GPINTENB_reg_u GPINTENB;
	DEFVALA_reg_u DEFVALA;
	DEFVALB_reg_u DEFVALB;
	INTCONA_reg_u INTCONA;
	INTCONB_reg_u INTCONB;
	IOCONA_reg_u  IOCONA;
	IOCONB_reg_u  IOCONB;
	GPPUA_reg_u		GPPUA;
	GPPUB_reg_u		GPPUB;
	INTFA_reg_u		INTFA;
	INTFB_reg_u		INTFB;
	INTCAPA_reg_u   INTCAPA;
	INTCAPB_reg_u   INTCAPB;
	GPIOA_reg_u		_GPIOA;
	GPIOB_reg_u		_GPIOB;
	OLATA_reg_u		OLATA;
	OLATB_reg_u		OLATB;
}mcp23017_RegisterMap_s;

typedef struct {
	I2C_HandleTypeDef *i2c_port;
	uint8_t DevAddr;
	mcp23017_RegisterMap_s regMap;

#ifdef USE_FREERTOS
	SemaphoreHandle_t *mutex;
#elif USE_THREADX
	TX_MUTEX *mutex;
#endif
}MCP23017_dev_s;


typedef enum {
	OUTPUT,
	INPUT
}pin_type;

typedef enum {
	IRQ_Disable,
	IRQ_Enable
}IRQ_Pin_State;

void MCP23017_Init(MCP23017_dev_s *dev);
void MCP23017_WriteRegister(MCP23017_dev_s *dev, uint8_t regAddr, uint8_t regValue);
void MCP23017_WritePin(MCP23017_dev_s *dev, uint8_t regAddr, uint8_t pinValue);
#endif /* MCP23017_MCP23017_H_ */
