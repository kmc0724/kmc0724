/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.2
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice_trm.h"

/* UART_RX */
#define UART_RX__0__DR CYREG_GPIO_PRT1_DR
#define UART_RX__0__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define UART_RX__0__DR_INV CYREG_GPIO_PRT1_DR_INV
#define UART_RX__0__DR_SET CYREG_GPIO_PRT1_DR_SET
#define UART_RX__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define UART_RX__0__HSIOM_GPIO 0u
#define UART_RX__0__HSIOM_I2C 14u
#define UART_RX__0__HSIOM_I2C_SDA 14u
#define UART_RX__0__HSIOM_MASK 0x000F0000u
#define UART_RX__0__HSIOM_SHIFT 16u
#define UART_RX__0__HSIOM_SPI 15u
#define UART_RX__0__HSIOM_SPI_MOSI 15u
#define UART_RX__0__HSIOM_UART 9u
#define UART_RX__0__HSIOM_UART_RX 9u
#define UART_RX__0__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define UART_RX__0__INTR CYREG_GPIO_PRT1_INTR
#define UART_RX__0__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define UART_RX__0__INTSTAT CYREG_GPIO_PRT1_INTR
#define UART_RX__0__MASK 0x10u
#define UART_RX__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define UART_RX__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define UART_RX__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define UART_RX__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define UART_RX__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define UART_RX__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define UART_RX__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define UART_RX__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define UART_RX__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define UART_RX__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define UART_RX__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define UART_RX__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define UART_RX__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define UART_RX__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define UART_RX__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define UART_RX__0__PC CYREG_GPIO_PRT1_PC
#define UART_RX__0__PC2 CYREG_GPIO_PRT1_PC2
#define UART_RX__0__PORT 1u
#define UART_RX__0__PS CYREG_GPIO_PRT1_PS
#define UART_RX__0__SHIFT 4u
#define UART_RX__DR CYREG_GPIO_PRT1_DR
#define UART_RX__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define UART_RX__DR_INV CYREG_GPIO_PRT1_DR_INV
#define UART_RX__DR_SET CYREG_GPIO_PRT1_DR_SET
#define UART_RX__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define UART_RX__INTR CYREG_GPIO_PRT1_INTR
#define UART_RX__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define UART_RX__INTSTAT CYREG_GPIO_PRT1_INTR
#define UART_RX__MASK 0x10u
#define UART_RX__PA__CFG0 CYREG_UDB_PA1_CFG0
#define UART_RX__PA__CFG1 CYREG_UDB_PA1_CFG1
#define UART_RX__PA__CFG10 CYREG_UDB_PA1_CFG10
#define UART_RX__PA__CFG11 CYREG_UDB_PA1_CFG11
#define UART_RX__PA__CFG12 CYREG_UDB_PA1_CFG12
#define UART_RX__PA__CFG13 CYREG_UDB_PA1_CFG13
#define UART_RX__PA__CFG14 CYREG_UDB_PA1_CFG14
#define UART_RX__PA__CFG2 CYREG_UDB_PA1_CFG2
#define UART_RX__PA__CFG3 CYREG_UDB_PA1_CFG3
#define UART_RX__PA__CFG4 CYREG_UDB_PA1_CFG4
#define UART_RX__PA__CFG5 CYREG_UDB_PA1_CFG5
#define UART_RX__PA__CFG6 CYREG_UDB_PA1_CFG6
#define UART_RX__PA__CFG7 CYREG_UDB_PA1_CFG7
#define UART_RX__PA__CFG8 CYREG_UDB_PA1_CFG8
#define UART_RX__PA__CFG9 CYREG_UDB_PA1_CFG9
#define UART_RX__PC CYREG_GPIO_PRT1_PC
#define UART_RX__PC2 CYREG_GPIO_PRT1_PC2
#define UART_RX__PORT 1u
#define UART_RX__PS CYREG_GPIO_PRT1_PS
#define UART_RX__SHIFT 4u

/* UART_TX */
#define UART_TX__0__DR CYREG_GPIO_PRT1_DR
#define UART_TX__0__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define UART_TX__0__DR_INV CYREG_GPIO_PRT1_DR_INV
#define UART_TX__0__DR_SET CYREG_GPIO_PRT1_DR_SET
#define UART_TX__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define UART_TX__0__HSIOM_GPIO 0u
#define UART_TX__0__HSIOM_I2C 14u
#define UART_TX__0__HSIOM_I2C_SCL 14u
#define UART_TX__0__HSIOM_MASK 0x00F00000u
#define UART_TX__0__HSIOM_SHIFT 20u
#define UART_TX__0__HSIOM_SPI 15u
#define UART_TX__0__HSIOM_SPI_MISO 15u
#define UART_TX__0__HSIOM_UART 9u
#define UART_TX__0__HSIOM_UART_TX 9u
#define UART_TX__0__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define UART_TX__0__INTR CYREG_GPIO_PRT1_INTR
#define UART_TX__0__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define UART_TX__0__INTSTAT CYREG_GPIO_PRT1_INTR
#define UART_TX__0__MASK 0x20u
#define UART_TX__0__OUT_SEL CYREG_UDB_PA1_CFG10
#define UART_TX__0__OUT_SEL_SHIFT 10u
#define UART_TX__0__OUT_SEL_VAL -1u
#define UART_TX__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define UART_TX__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define UART_TX__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define UART_TX__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define UART_TX__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define UART_TX__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define UART_TX__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define UART_TX__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define UART_TX__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define UART_TX__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define UART_TX__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define UART_TX__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define UART_TX__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define UART_TX__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define UART_TX__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define UART_TX__0__PC CYREG_GPIO_PRT1_PC
#define UART_TX__0__PC2 CYREG_GPIO_PRT1_PC2
#define UART_TX__0__PORT 1u
#define UART_TX__0__PS CYREG_GPIO_PRT1_PS
#define UART_TX__0__SHIFT 5u
#define UART_TX__DR CYREG_GPIO_PRT1_DR
#define UART_TX__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define UART_TX__DR_INV CYREG_GPIO_PRT1_DR_INV
#define UART_TX__DR_SET CYREG_GPIO_PRT1_DR_SET
#define UART_TX__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define UART_TX__INTR CYREG_GPIO_PRT1_INTR
#define UART_TX__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define UART_TX__INTSTAT CYREG_GPIO_PRT1_INTR
#define UART_TX__MASK 0x20u
#define UART_TX__PA__CFG0 CYREG_UDB_PA1_CFG0
#define UART_TX__PA__CFG1 CYREG_UDB_PA1_CFG1
#define UART_TX__PA__CFG10 CYREG_UDB_PA1_CFG10
#define UART_TX__PA__CFG11 CYREG_UDB_PA1_CFG11
#define UART_TX__PA__CFG12 CYREG_UDB_PA1_CFG12
#define UART_TX__PA__CFG13 CYREG_UDB_PA1_CFG13
#define UART_TX__PA__CFG14 CYREG_UDB_PA1_CFG14
#define UART_TX__PA__CFG2 CYREG_UDB_PA1_CFG2
#define UART_TX__PA__CFG3 CYREG_UDB_PA1_CFG3
#define UART_TX__PA__CFG4 CYREG_UDB_PA1_CFG4
#define UART_TX__PA__CFG5 CYREG_UDB_PA1_CFG5
#define UART_TX__PA__CFG6 CYREG_UDB_PA1_CFG6
#define UART_TX__PA__CFG7 CYREG_UDB_PA1_CFG7
#define UART_TX__PA__CFG8 CYREG_UDB_PA1_CFG8
#define UART_TX__PA__CFG9 CYREG_UDB_PA1_CFG9
#define UART_TX__PC CYREG_GPIO_PRT1_PC
#define UART_TX__PC2 CYREG_GPIO_PRT1_PC2
#define UART_TX__PORT 1u
#define UART_TX__PS CYREG_GPIO_PRT1_PS
#define UART_TX__SHIFT 5u

/* UART_DBG_SCB */
#define UART_DBG_SCB__CTRL CYREG_SCB0_CTRL
#define UART_DBG_SCB__EZ_DATA0 CYREG_SCB0_EZ_DATA0
#define UART_DBG_SCB__EZ_DATA1 CYREG_SCB0_EZ_DATA1
#define UART_DBG_SCB__EZ_DATA10 CYREG_SCB0_EZ_DATA10
#define UART_DBG_SCB__EZ_DATA11 CYREG_SCB0_EZ_DATA11
#define UART_DBG_SCB__EZ_DATA12 CYREG_SCB0_EZ_DATA12
#define UART_DBG_SCB__EZ_DATA13 CYREG_SCB0_EZ_DATA13
#define UART_DBG_SCB__EZ_DATA14 CYREG_SCB0_EZ_DATA14
#define UART_DBG_SCB__EZ_DATA15 CYREG_SCB0_EZ_DATA15
#define UART_DBG_SCB__EZ_DATA16 CYREG_SCB0_EZ_DATA16
#define UART_DBG_SCB__EZ_DATA17 CYREG_SCB0_EZ_DATA17
#define UART_DBG_SCB__EZ_DATA18 CYREG_SCB0_EZ_DATA18
#define UART_DBG_SCB__EZ_DATA19 CYREG_SCB0_EZ_DATA19
#define UART_DBG_SCB__EZ_DATA2 CYREG_SCB0_EZ_DATA2
#define UART_DBG_SCB__EZ_DATA20 CYREG_SCB0_EZ_DATA20
#define UART_DBG_SCB__EZ_DATA21 CYREG_SCB0_EZ_DATA21
#define UART_DBG_SCB__EZ_DATA22 CYREG_SCB0_EZ_DATA22
#define UART_DBG_SCB__EZ_DATA23 CYREG_SCB0_EZ_DATA23
#define UART_DBG_SCB__EZ_DATA24 CYREG_SCB0_EZ_DATA24
#define UART_DBG_SCB__EZ_DATA25 CYREG_SCB0_EZ_DATA25
#define UART_DBG_SCB__EZ_DATA26 CYREG_SCB0_EZ_DATA26
#define UART_DBG_SCB__EZ_DATA27 CYREG_SCB0_EZ_DATA27
#define UART_DBG_SCB__EZ_DATA28 CYREG_SCB0_EZ_DATA28
#define UART_DBG_SCB__EZ_DATA29 CYREG_SCB0_EZ_DATA29
#define UART_DBG_SCB__EZ_DATA3 CYREG_SCB0_EZ_DATA3
#define UART_DBG_SCB__EZ_DATA30 CYREG_SCB0_EZ_DATA30
#define UART_DBG_SCB__EZ_DATA31 CYREG_SCB0_EZ_DATA31
#define UART_DBG_SCB__EZ_DATA4 CYREG_SCB0_EZ_DATA4
#define UART_DBG_SCB__EZ_DATA5 CYREG_SCB0_EZ_DATA5
#define UART_DBG_SCB__EZ_DATA6 CYREG_SCB0_EZ_DATA6
#define UART_DBG_SCB__EZ_DATA7 CYREG_SCB0_EZ_DATA7
#define UART_DBG_SCB__EZ_DATA8 CYREG_SCB0_EZ_DATA8
#define UART_DBG_SCB__EZ_DATA9 CYREG_SCB0_EZ_DATA9
#define UART_DBG_SCB__I2C_CFG CYREG_SCB0_I2C_CFG
#define UART_DBG_SCB__I2C_CTRL CYREG_SCB0_I2C_CTRL
#define UART_DBG_SCB__I2C_M_CMD CYREG_SCB0_I2C_M_CMD
#define UART_DBG_SCB__I2C_S_CMD CYREG_SCB0_I2C_S_CMD
#define UART_DBG_SCB__I2C_STATUS CYREG_SCB0_I2C_STATUS
#define UART_DBG_SCB__INTR_CAUSE CYREG_SCB0_INTR_CAUSE
#define UART_DBG_SCB__INTR_I2C_EC CYREG_SCB0_INTR_I2C_EC
#define UART_DBG_SCB__INTR_I2C_EC_MASK CYREG_SCB0_INTR_I2C_EC_MASK
#define UART_DBG_SCB__INTR_I2C_EC_MASKED CYREG_SCB0_INTR_I2C_EC_MASKED
#define UART_DBG_SCB__INTR_M CYREG_SCB0_INTR_M
#define UART_DBG_SCB__INTR_M_MASK CYREG_SCB0_INTR_M_MASK
#define UART_DBG_SCB__INTR_M_MASKED CYREG_SCB0_INTR_M_MASKED
#define UART_DBG_SCB__INTR_M_SET CYREG_SCB0_INTR_M_SET
#define UART_DBG_SCB__INTR_RX CYREG_SCB0_INTR_RX
#define UART_DBG_SCB__INTR_RX_MASK CYREG_SCB0_INTR_RX_MASK
#define UART_DBG_SCB__INTR_RX_MASKED CYREG_SCB0_INTR_RX_MASKED
#define UART_DBG_SCB__INTR_RX_SET CYREG_SCB0_INTR_RX_SET
#define UART_DBG_SCB__INTR_S CYREG_SCB0_INTR_S
#define UART_DBG_SCB__INTR_S_MASK CYREG_SCB0_INTR_S_MASK
#define UART_DBG_SCB__INTR_S_MASKED CYREG_SCB0_INTR_S_MASKED
#define UART_DBG_SCB__INTR_S_SET CYREG_SCB0_INTR_S_SET
#define UART_DBG_SCB__INTR_SPI_EC CYREG_SCB0_INTR_SPI_EC
#define UART_DBG_SCB__INTR_SPI_EC_MASK CYREG_SCB0_INTR_SPI_EC_MASK
#define UART_DBG_SCB__INTR_SPI_EC_MASKED CYREG_SCB0_INTR_SPI_EC_MASKED
#define UART_DBG_SCB__INTR_TX CYREG_SCB0_INTR_TX
#define UART_DBG_SCB__INTR_TX_MASK CYREG_SCB0_INTR_TX_MASK
#define UART_DBG_SCB__INTR_TX_MASKED CYREG_SCB0_INTR_TX_MASKED
#define UART_DBG_SCB__INTR_TX_SET CYREG_SCB0_INTR_TX_SET
#define UART_DBG_SCB__RX_CTRL CYREG_SCB0_RX_CTRL
#define UART_DBG_SCB__RX_FIFO_CTRL CYREG_SCB0_RX_FIFO_CTRL
#define UART_DBG_SCB__RX_FIFO_RD CYREG_SCB0_RX_FIFO_RD
#define UART_DBG_SCB__RX_FIFO_RD_SILENT CYREG_SCB0_RX_FIFO_RD_SILENT
#define UART_DBG_SCB__RX_FIFO_STATUS CYREG_SCB0_RX_FIFO_STATUS
#define UART_DBG_SCB__RX_MATCH CYREG_SCB0_RX_MATCH
#define UART_DBG_SCB__SPI_CTRL CYREG_SCB0_SPI_CTRL
#define UART_DBG_SCB__SPI_STATUS CYREG_SCB0_SPI_STATUS
#define UART_DBG_SCB__SS0_POSISTION 0u
#define UART_DBG_SCB__SS1_POSISTION 1u
#define UART_DBG_SCB__SS2_POSISTION 2u
#define UART_DBG_SCB__SS3_POSISTION 3u
#define UART_DBG_SCB__STATUS CYREG_SCB0_STATUS
#define UART_DBG_SCB__TX_CTRL CYREG_SCB0_TX_CTRL
#define UART_DBG_SCB__TX_FIFO_CTRL CYREG_SCB0_TX_FIFO_CTRL
#define UART_DBG_SCB__TX_FIFO_STATUS CYREG_SCB0_TX_FIFO_STATUS
#define UART_DBG_SCB__TX_FIFO_WR CYREG_SCB0_TX_FIFO_WR
#define UART_DBG_SCB__UART_CTRL CYREG_SCB0_UART_CTRL
#define UART_DBG_SCB__UART_FLOW_CTRL CYREG_SCB0_UART_FLOW_CTRL
#define UART_DBG_SCB__UART_RX_CTRL CYREG_SCB0_UART_RX_CTRL
#define UART_DBG_SCB__UART_RX_STATUS CYREG_SCB0_UART_RX_STATUS
#define UART_DBG_SCB__UART_TX_CTRL CYREG_SCB0_UART_TX_CTRL

/* UART_DBG_SCBCLK */
#define UART_DBG_SCBCLK__CTRL_REGISTER CYREG_PERI_PCLK_CTL1
#define UART_DBG_SCBCLK__DIV_ID 0x00000040u
#define UART_DBG_SCBCLK__DIV_REGISTER CYREG_PERI_DIV_16_CTL0
#define UART_DBG_SCBCLK__PA_DIV_ID 0x000000FFu

/* Miscellaneous */
#define CY_PROJECT_NAME "UART_printf"
#define CY_VERSION "PSoC Creator  4.2"
#define CYDEV_BANDGAP_VOLTAGE 1.024
#define CYDEV_BCLK__HFCLK__HZ 48000000U
#define CYDEV_BCLK__HFCLK__KHZ 48000U
#define CYDEV_BCLK__HFCLK__MHZ 48U
#define CYDEV_BCLK__SYSCLK__HZ 48000000U
#define CYDEV_BCLK__SYSCLK__KHZ 48000U
#define CYDEV_BCLK__SYSCLK__MHZ 48U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 18u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x1A1711AAu
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 18u
#define CYDEV_CHIP_MEMBER_4D 13u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 19u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 17u
#define CYDEV_CHIP_MEMBER_4I 23u
#define CYDEV_CHIP_MEMBER_4J 14u
#define CYDEV_CHIP_MEMBER_4K 15u
#define CYDEV_CHIP_MEMBER_4L 22u
#define CYDEV_CHIP_MEMBER_4M 21u
#define CYDEV_CHIP_MEMBER_4N 10u
#define CYDEV_CHIP_MEMBER_4O 7u
#define CYDEV_CHIP_MEMBER_4P 20u
#define CYDEV_CHIP_MEMBER_4Q 12u
#define CYDEV_CHIP_MEMBER_4R 8u
#define CYDEV_CHIP_MEMBER_4S 11u
#define CYDEV_CHIP_MEMBER_4T 9u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 16u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 24u
#define CYDEV_CHIP_MEMBER_FM3 28u
#define CYDEV_CHIP_MEMBER_FM4 29u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 25u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 26u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 27u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4F
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_Disallowed
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DFT_SELECT_CLK0 10u
#define CYDEV_DFT_SELECT_CLK1 11u
#define CYDEV_DMA_CHANNELS_AVAILABLE 8
#define CYDEV_HEAP_SIZE 0x400
#define CYDEV_IMO_TRIMMED_BY_USB 0u
#define CYDEV_IMO_TRIMMED_BY_WCO 0u
#define CYDEV_INTR_NUMBER_DMA 21u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDDA 3.3
#define CYDEV_VDDA_MV 3300
#define CYDEV_VDDD 3.3
#define CYDEV_VDDD_MV 3300
#define CYDEV_VDDR 3.3
#define CYDEV_VDDR_MV 3300
#define CYDEV_WDT_GENERATE_ISR 1u
#define CYIPBLOCK_m0s8bless_VERSION 2
#define CYIPBLOCK_m0s8cpussv2_VERSION 1
#define CYIPBLOCK_m0s8csd_VERSION 1
#define CYIPBLOCK_m0s8ioss_VERSION 1
#define CYIPBLOCK_m0s8lcd_VERSION 2
#define CYIPBLOCK_m0s8lpcomp_VERSION 2
#define CYIPBLOCK_m0s8peri_VERSION 1
#define CYIPBLOCK_m0s8scb_VERSION 2
#define CYIPBLOCK_m0s8srssv2_VERSION 1
#define CYIPBLOCK_m0s8tcpwm_VERSION 2
#define CYIPBLOCK_m0s8udbif_VERSION 1
#define CYIPBLOCK_s8pass4al_VERSION 1
#define DMA_CHANNELS_USED__MASK 0u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
