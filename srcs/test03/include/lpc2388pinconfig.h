// lpc2388pinconfig.h -- PINSELx and PINMODEx setup for evLPC2388 by yasunoxx▼Julia

#ifdef NEWWIRING
#define VAL_PINSEL0 0b10000000101001010101010101011010
#else
#define VAL_PINSEL0 0b10000000101000000000000001011010
#endif
/*
    0b10 << 30 |   // P0.15    SCK0
    0b00 << 28 |   // P0.14    (N.C./USB_CON2)
#ifdef NEWWIRING
    0b00 << 26 |   // P0.13    (LCD_RS)
    0b00 << 24 |   // P0.12    (LCD_E)
#endif
    0b10 << 22 |   // P0.11    SCL2
    0b10 << 20 |   // P0.10    SDA2
#ifdef NEWWIRING
    0b01 << 18 |   // P0.9     I2STX_SDA
    0b01 << 16 |   // P0.8     I2STX_WS
    0b01 << 14 |   // P0.7     I2STX_CLK
    0b01 << 12 |   // P0.6     I2SRX_SDA
    0b01 << 10 |   // P0.5     I2SRX_WS
    0b01 <<  8 |   // P0.4     I2SRX_CLK
#else
    0b00 << 18 |   // P0.9     (LCD_RS)
    0b00 << 16 |   // P0.8     (LCD_E)
    0b00 << 14 |   // P0.7     (LCD_D7)
    0b00 << 12 |   // P0.6     (LCD_D6)
    0b00 << 10 |   // P0.5     (LCD_D5)
    0b00 <<  8 |   // P0.4     (LCD_D4)
#endif
    0b01 <<  6 |   // P0.3     RxD0
    0b01 <<  4 |   // P0.2     TxD0
    0b10 <<  2 |   // P0.1     RxD3
    0b10           // P0.0     TxD3
*/

#define VAL_PINSEL1 0b00000000000000000001010101010000
/*
    0b00 << 30 |   // P0.31    (J3/Enet)
    0b00 << 28 |   // P0.30    (N.C./USB_DP2)
    0b00 << 26 |   // P0.29    (N.C./USB_DM1)
    0b00 << 24 |   // P0.28    PHY_INT(J3/Enet)
    0b00 << 22 |   // P0.27    (XINT*)
#ifdef NEWWIRING // don't care
    0b00 << 20 |   // P0.26    (LCD_D7)
    0b00 << 18 |   // P0.25    (LCD_D6)
    0b00 << 16 |   // P0.24    (LCD_D5)
    0b00 << 14 |   // P0.23    (LCD_D4)
#endif
    0b01 << 12 |   // P0.22    MCIDAT0
    0b01 << 10 |   // P0.21    MCI_CD
    0b01 <<  8 |   // P0.20    MCICMD
    0b01 <<  6 |   // P0.19    MCICLK
    0b01 <<  4 |   // P0.18    MCI_WP
    0b00 <<  2 |   // P0.17    (SPIA1)
    0b00           // P0.16    (SPIA0)
*/

#define VAL_PINSEL2 0b01010000000101010000000100000101
/*
    0b01 << 30 |   // P1.15    ENET_REF_CLK
    0b01 << 28 |   // P1.14    ENET_RX_ER
    0b00 << 26 |   // (Reserved)
    0b00 << 24 |   // (Reserved)
    0b00 << 22 |   // (Reserved)
    0b01 << 20 |   // P1.10    ENET_RXD1
    0b01 << 18 |   // P1.9     ENET_RXD0
    0b01 << 16 |   // P1.8     ENET_CRS
    0b00 << 14 |   // (Reserved)
    0b00 << 12 |   // (Reserved)
    0b00 << 10 |   // (Reserved)
    0b01 <<  8 |   // P1.4     ENET_TX_EN
    0b00 <<  6 |   // (Reserved)
    0b00 <<  4 |   // (Reserved)
    0b01 <<  2 |   // P1.1     ENET_TXD1
    0b01           // P1.0     ENET_TXD0
*/

#define VAL_PINSEL3 0b11110000000000111100000000000101
/*
    0b11 << 30 |   // P1.31    AD0.5
    0b11 << 28 |   // P1.30    AD0.4
    0b00 << 26 |   // P1.29    
    0b00 << 24 |   // P1.28    
    0b00 << 22 |   // P1.27    
    0b00 << 20 |   // P1.26    
    0b00 << 18 |   // P1.25    (J3/Enet)
    0b11 << 16 |   // P1.24    MOSI0
    0b11 << 14 |   // P1.23    MISO0
    0b00 << 12 |   // (N.C./USB_RCV1)
    0b00 << 10 |   // P1.21    (J3/Enet)
    0b00 <<  8 |   // P1.20    (J3/Enet)
    0b00 <<  6 |   // (N.C./USB_TX_E1)
    0b00 <<  4 |   // P1.18    LED1(USB_UP_LED1)
    0b01 <<  2 |   // P1.17    ENET_MDIO
    0b01           // P1.16    ENET_MDC
*/

#define VAL_PINSEL4 0b00001010100100000000000000000000
/*
    0b00 << 30 |   // (Reserved)
    0b00 << 28 |   // (Reserved)
    0b10 << 26 |   // P2.13    MCIDAT3
    0b10 << 24 |   // P2.12    MCIDAT2
    0b10 << 22 |   // P2.11    MCIDAT1
    0b01 << 20 |   // ISP_SW/EINT0*
    0b00 << 18 |   // P2.9     (J2)
    0b00 << 16 |   // P2.8     (J2)
    0b00 << 14 |   // P2.7     (J1)
    0b00 << 12 |   // P2.6     (J1)
    0b00 << 10 |   // P2.5     (J1)
    0b00 <<  8 |   // P2.4     (J1)
    0b00 <<  6 |   // P2.3     (J1)
    0b00 <<  4 |   // P2.2     (J1)
    0b00 <<  2 |   // P2.1     (J1)
    0b00           // P2.0     (J1)
*/

#define VAL_PINSEL5

#define VAL_PINSEL6 0b00000000000000000101010101010101
/*
    0b00 << 30 |   // (Reserved)
    0b00 << 28 |   // (Reserved)
    0b00 << 26 |   // (Reserved)
    0b00 << 24 |   // (Reserved)
    0b00 << 22 |   // (Reserved)
    0b00 << 20 |   // (Reserved)
    0b00 << 18 |   // (Reserved)
    0b00 << 16 |   // (Reserved)
    0b01 << 14 |   // P3.7     D7
    0b01 << 12 |   // P3.6     D6
    0b01 << 10 |   // P3.5     D5
    0b01 <<  8 |   // P3.4     D4
    0b01 <<  6 |   // P3.3     D3
    0b01 <<  4 |   // P3.2     D2
    0b01 <<  2 |   // P3.1     D1
    0b01           // P3.0     D0
*/

#define VAL_PINSEL7 0b00000000000000000000000000000000
/*
    0b00 << 30 |   // (Reserved)
    0b00 << 28 |   // (Reserved)
    0b00 << 26 |   // (Reserved)
    0b00 << 24 |   // (Reserved)
    0b00 << 22 |   // (Reserved)
    0b00 << 20 |   // P3.26    
    0b00 << 18 |   // P3.25    
    0b00 << 16 |   // P3.24    
    0b00 << 14 |   // P3.23    
    0b00 << 12 |   // (Reserved)
    0b00 << 10 |   // (Reserved)
    0b00 <<  8 |   // (Reserved)
    0b00 <<  6 |   // (Reserved)
    0b00 <<  4 |   // (Reserved)
    0b00 <<  2 |   // (Reserved)
    0b00           // (Reserved)
*/

#define VAL_PINSEL8 0b01010101010101010101010101010101
/*
    0b01 << 30 |   // P4.15    A15
    0b01 << 28 |   // P4.14    A14
    0b01 << 26 |   // P4.13    A13
    0b01 << 24 |   // P4.12    A12
    0b01 << 22 |   // P4.11    A11
    0b01 << 20 |   // P4.10    A10
    0b01 << 18 |   // P4.9     A9
    0b01 << 16 |   // P4.8     A8
    0b01 << 14 |   // P4.7     A7
    0b01 << 12 |   // P4.6     A6
    0b01 << 10 |   // P4.5     A5
    0b01 <<  8 |   // P4.4     A4
    0b01 <<  6 |   // P4.3     A3
    0b01 <<  4 |   // P4.2     A2
    0b01 <<  2 |   // P4.1     A1
    0b01           // P4.0     A0
*/

#define VAL_PINSEL9 0b01011111000010010000000000000000
/*
    0b01 << 30 |   // P4.31    CS1*
    0b01 << 28 |   // P4.30    CS0*
    0b11 << 26 |   // P4.29    RXD3
    0b11 << 24 |   // P4.28    TXD3
    0b00 << 22 |   // (Reserved)
    0b00 << 20 |   // (Reserved)
    0b10 << 18 |   // P4.25    BLS0*
    0b01 << 16 |   // P4.24    OE*
    0b00 << 14 |   // (Reserved)
    0b00 << 12 |   // (Reserved)
    0b00 << 10 |   // (Reserved)
    0b00 <<  8 |   // (Reserved)
    0b00 <<  6 |   // (Reserved)
    0b00 <<  4 |   // (Reserved)
    0b00 <<  2 |   // (Reserved)
    0b00           // (Reserved)
*/

#define VAL_PINSEL10 0b000  // ETM interface disable
