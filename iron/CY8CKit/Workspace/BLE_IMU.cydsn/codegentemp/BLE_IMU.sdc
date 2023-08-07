# THIS FILE IS AUTOMATICALLY GENERATED
# Project: D:\git\kmc724\CY8CKit\Workspace\BLE_IMU.cydsn\BLE_IMU.cyprj
# Date: Wed, 12 Jul 2023 09:07:18 GMT
#set_units -time ns
create_clock -name {UART_DBG_SCBCLK(FFB)} -period 729.16666666666663 -waveform {0 364.583333333333} [list [get_pins {ClockBlock/ff_div_1}]]
create_clock -name {UART_IMU_SCBCLK(FFB)} -period 729.16666666666663 -waveform {0 364.583333333333} [list [get_pins {ClockBlock/ff_div_2}]]
create_clock -name {CyRouted1} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/dsi_in_0}]]
create_clock -name {CyWCO} -period 30517.578125 -waveform {0 15258.7890625} [list [get_pins {ClockBlock/wco}]]
create_clock -name {CyLFClk} -period 30517.578125 -waveform {0 15258.7890625} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyECO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/eco}]]
create_clock -name {CyIMO} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyHFClk} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/hfclk}]]
create_clock -name {CySysClk} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/sysclk}]]
create_generated_clock -name {UART_DBG_SCBCLK} -source [get_pins {ClockBlock/hfclk}] -edges {1 35 71} [list]
create_generated_clock -name {UART_IMU_SCBCLK} -source [get_pins {ClockBlock/hfclk}] -edges {1 35 71} [list]


# Component constraints for D:\git\kmc724\CY8CKit\Workspace\BLE_IMU.cydsn\TopDesign\TopDesign.cysch
# Project: D:\git\kmc724\CY8CKit\Workspace\BLE_IMU.cydsn\BLE_IMU.cyprj
# Date: Wed, 12 Jul 2023 09:07:16 GMT
