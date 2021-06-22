/*
  Logo's for MiSTer in XMB Format
  Most of them defined as "static const unsigned char <Name>[]U8X8_PROGMEM" for the useage of "u8g2.drawXBMP"
  only the mister logo is defined as "static unsigned char <Name>[]" because of the particle effect but must use "u8g2.drawXBM" then.
*/

/* Menu Picture moved to SD */

/* -------------------- U8X8_PROGMEM -----------------------*/

// SD Logo 16x16
#define sdcard_icon16_width 16
#define sdcard_icon16_height 16
static const unsigned char sdcard_icon16[] = {
 0x50,0x55,0x58,0x55,0x58,0x55,0x58,0x55,0xf8,0x7f,0xfc,0x7f,0xfe,0x7f,0xfe,
 0x7f,0x1e,0x71,0xec,0x6d,0xec,0x6d,0x9e,0x6d,0x7e,0x6d,0x7e,0x6d,0x8e,0x71,
 0xfe,0x7f };

#define usb_icon16_width 32
#define usb_icon16_height 16
static const unsigned char usb_icon16[] = {
   0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0xe0, 0x3f, 0x00,
   0x00, 0x10, 0x1c, 0x00, 0x00, 0x08, 0x08, 0x00, 0x1e, 0x04, 0x00, 0x00,
   0x3f, 0x04, 0x00, 0x30, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0x3f, 0x40, 0x00, 0x30, 0x1e, 0x40, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00,
   0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0xc3, 0x01, 0x00, 0x00, 0xfc, 0x01,
   0x00, 0x00, 0xc0, 0x01 };

// Sorgelig's Icon 16x16
#define sorgelig_icon16_width 16
#define sorgelig_icon16_height 16
static const unsigned char sorgelig_icon16[] U8X8_PROGMEM = {
 0x38,0x1c,0x38,0x1c,0xfc,0x3f,0xfe,0x7f,0x06,0x60,0xc6,0x61,0xfe,0x7f,0xfe,
 0x7f,0xdf,0xfb,0xfb,0xdf,0xe3,0xc7,0x26,0x64,0x06,0x60,0x86,0x61,0xc2,0xc3,
 0x7e,0x7f };
 
// Sorgelig's Icon 64x64
#define sorgelig_icon64_width 64
#define sorgelig_icon64_height 64
static const unsigned char sorgelig_icon64[] U8X8_PROGMEM = {
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0xc0,0x00,
 0x00,0x00,0x80,0x0f,0x00,0x00,0xe0,0x01,0x00,0x00,0xc0,0x1f,0x00,0x00,0xf0,
 0x03,0x00,0x00,0xc0,0x1d,0x00,0x00,0xf8,0x03,0x00,0x00,0xe0,0x38,0x00,0x00,
 0x3c,0x07,0x00,0x00,0xf0,0x7a,0x00,0x00,0x5e,0x07,0x00,0x00,0x70,0xf6,0x00,
 0x00,0x6e,0x0e,0x00,0x00,0x78,0xef,0x00,0x00,0xe7,0x0e,0x00,0x00,0xb8,0xcd,
 0x01,0x80,0xb7,0x1d,0x00,0x00,0xbc,0xdd,0xff,0xff,0xbb,0x1d,0x00,0x00,0x9e,
 0x9f,0xff,0xff,0xf9,0x79,0x00,0x00,0x0f,0x00,0xff,0xff,0x00,0xf8,0x00,0x80,
 0x07,0x00,0x00,0x00,0x00,0xe0,0x01,0xc0,0x03,0x00,0x00,0x00,0x00,0xc0,0x03,
 0xc0,0x01,0x00,0x00,0x00,0x00,0x80,0x03,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,
 0x03,0xe0,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xe0,0x00,0x00,0x00,0x00,0x00,
 0x00,0x07,0xe0,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xe0,0x00,0x00,0x00,0x00,
 0x00,0x00,0x07,0xe0,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xe0,0x00,0x00,0x00,
 0x00,0x00,0x00,0x07,0xe0,0x00,0x00,0x30,0x0c,0x00,0x00,0x07,0xe0,0x00,0x00,
 0x38,0x1c,0x00,0x00,0x07,0xe0,0xfc,0xff,0x7f,0xde,0xff,0x3f,0x07,0xe0,0xfc,
 0xff,0xff,0xff,0xff,0x3f,0x07,0xe0,0xfe,0xff,0xff,0xff,0xff,0x7f,0x07,0xc0,
 0x06,0x7c,0xe0,0x07,0x3e,0x60,0x07,0xe0,0x0e,0x7c,0x60,0x06,0x3e,0x30,0x07,
 0xf8,0x0c,0x38,0x70,0x06,0x1c,0x30,0x1f,0x78,0x0c,0x00,0xf0,0x0f,0x00,0x30,
 0x1e,0x1c,0x1c,0x00,0xf8,0x1f,0x00,0x18,0x38,0x1e,0x38,0x00,0x7c,0x7c,0x00,
 0x1c,0x78,0x0e,0x70,0x00,0xf6,0xef,0x00,0x0e,0x70,0x06,0xe0,0x01,0xc3,0xc3,
 0x81,0x07,0x60,0x07,0xc0,0xff,0x07,0xe0,0xff,0x03,0xe0,0x07,0x00,0xff,0x01,
 0x80,0xff,0x00,0xe0,0x07,0x00,0xc0,0xc7,0xe1,0x03,0x00,0xe0,0x07,0x00,0x60,
 0xf7,0xff,0x04,0x00,0xe0,0x0e,0x00,0x20,0xff,0xff,0x0d,0x00,0x60,0x0e,0x00,
 0xb0,0xf0,0x1f,0x09,0x00,0x70,0x1e,0x00,0xb0,0xe0,0x07,0x09,0x00,0x78,0x3c,
 0x00,0x80,0x00,0x00,0x03,0x00,0x3c,0xf8,0x00,0x80,0x00,0x00,0x02,0x00,0x1e,
 0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0xe0,0x00,0x00,0x00,0x00,0x00,0x00,
 0x07,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xe0,0x00,0x00,0x00,0x00,0x00,
 0x00,0x07,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xe0,0x00,0x00,0x00,0x00,
 0x00,0x00,0x07,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0xf8,0x00,0x00,0x00,
 0x00,0x00,0x00,0x1f,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0x1c,0x00,0x00,
 0xe0,0x07,0x00,0x00,0x38,0x1c,0x00,0x00,0xf8,0x1f,0x00,0x00,0x38,0x1c,0x00,
 0x00,0xfc,0x3f,0x00,0x00,0x38,0x1c,0x00,0x00,0x1c,0x38,0x00,0x00,0x38,0x3c,
 0x00,0x00,0x0e,0x70,0x00,0x00,0x38,0x78,0xff,0x7f,0x0f,0xf0,0xfe,0xff,0x1e,
 0xf0,0xff,0xff,0x07,0xe0,0xff,0xff,0x1f,0xe0,0xff,0xff,0x07,0xe0,0xff,0xff,
 0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00 };
