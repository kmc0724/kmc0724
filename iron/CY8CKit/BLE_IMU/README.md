# UART_printf
프로젝트를 열 때, 폴더 명을 `BLE_IMU.cydsn` 으로 변경해주세요.

## Hardware settings
* UART_DBG_TX PIN=P1[5]
* UART_DBG_RX PIN=P1[6]
* UART_IMU_TX PIN=P0[1]
* UART_IMU_RX PIN=P0[0]
* Heap Size=0x400

## UART_DBG settings
* Baud rate=115200
* Data bits=8
* Parity=None
* Stop bits=1

## UART_IMU settings
* Baud rate=115200
* Data bits=8
* Parity=None
* Stop bits=1
* TX, RX Buffer size=128 Bytes

## Project description
0.1초마다 IMU 데이터를 양 단으로 전송함

## Output
* COM30=Central, print Peripheral's IMU data (from COM32)
* COM32=Peripheral, print Central's IMU data (from COM30)
![output](https://github.com/glskmc724/kmc724/assets/90677740/40f6e4ab-2fb7-437e-8466-b273a2ea7663)
