// -------- GRAPHICS

const uint8_t icon_lq_1[] PROGMEM = {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000011
};

const uint8_t icon_lq_2[] PROGMEM = {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00001111,
    B00000000,
    B00000011
};

const uint8_t icon_lq_3[] PROGMEM = {
    B00000000,
    B00000000,
    B00000000,
    B00111111,
    B00000000,
    B00001111,
    B00000000,
    B00000011
};

const uint8_t icon_lq_4[] PROGMEM = {
    B00000000,
    B11111111,
    B00000000,
    B00111111,
    B00000000,
    B00001111,
    B00000000,
    B00000011
};

const uint8_t icon_sq0[] PROGMEM = {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B01010101,
};

const uint8_t icon_sq1[] PROGMEM = {
    B00000000,
    B00000000,
    B01111111,
    B01111111,
    B01111111,
    B01111111,
    B01111111,
    B01111111,
};

#define LOGO_WIDTH 128
#define LOGO_HEIGHT 64

const uint8_t logo_bits_s [] PROGMEM = {
  0xC0, 0x01, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x78, 0x0E, 0xC0, 0x34, 0x00, 0x04, 0x08, 0x00,
  0x80, 0x00, 0x00, 0x0C, 0x40, 0x00, 0x00, 0x40, 0x0C, 0x18, 0x60, 0x60,
  0x00, 0x0C, 0x1C, 0x00, 0x80, 0x01, 0x00, 0x0E, 0xC0, 0x00, 0x00, 0x60,
  0x04, 0x10, 0x20, 0xC0, 0x00, 0x04, 0x18, 0x00, 0x80, 0x01, 0x00, 0x0A,
  0x80, 0x00, 0x00, 0x30, 0x02, 0x30, 0x10, 0x80, 0x00, 0x0C, 0x38, 0x00,
  0x80, 0x01, 0x00, 0x1A, 0x80, 0x01, 0x00, 0x30, 0x82, 0x20, 0x10, 0x04,
  0x01, 0x0C, 0x6C, 0x00, 0x80, 0x01, 0x00, 0x13, 0x80, 0x01, 0x00, 0x10,
  0xC2, 0x21, 0x10, 0x0E, 0x01, 0x04, 0x4C, 0x00, 0x80, 0x00, 0x00, 0x33,
  0x00, 0x01, 0x00, 0x18, 0xC3, 0x21, 0x18, 0x0E, 0x01, 0x0C, 0xCC, 0x00,
  0x80, 0x01, 0x80, 0x31, 0x00, 0x03, 0x00, 0x18, 0x82, 0x23, 0x18, 0x07,
  0x01, 0x0C, 0x8C, 0x01, 0x80, 0x01, 0x80, 0x21, 0x00, 0x03, 0x00, 0x08,
  0x06, 0x26, 0x90, 0x81, 0x00, 0x0C, 0x88, 0x01, 0x80, 0x01, 0xC0, 0x60,
  0x00, 0x06, 0x00, 0x0C, 0x04, 0x8C, 0x42, 0xC0, 0x00, 0x04, 0x0C, 0x03,
  0x80, 0x00, 0xC0, 0x60, 0x00, 0x06, 0x00, 0x0C, 0x0C, 0x48, 0x6A, 0x60,
  0x00, 0x0C, 0x0C, 0x06, 0x80, 0x01, 0x40, 0xC0, 0x00, 0x06, 0x00, 0x06,
  0xB0, 0x62, 0x18, 0x34, 0x00, 0x0C, 0x0C, 0x0C, 0x80, 0x01, 0x60, 0xC0,
  0x00, 0x0C, 0x00, 0x06, 0xE0, 0x11, 0x10, 0x0F, 0x00, 0x04, 0x0C, 0x0C,
  0x80, 0x00, 0x60, 0x80, 0x00, 0x0C, 0x00, 0x02, 0x00, 0x20, 0x10, 0x00,
  0x00, 0x0C, 0x0C, 0x18, 0x80, 0x01, 0x20, 0x80, 0x01, 0x18, 0x00, 0x03,
  0x00, 0x10, 0x10, 0x00, 0x00, 0x0C, 0x08, 0x30, 0x80, 0x01, 0x30, 0x80,
  0x01, 0x18, 0x00, 0x03, 0x00, 0x20, 0x20, 0x00, 0x00, 0x0C, 0x0C, 0x30,
  0x80, 0x01, 0x30, 0x00, 0x03, 0x18, 0x80, 0x01, 0x00, 0x20, 0x18, 0x00,
  0x00, 0x04, 0x0C, 0x60, 0x80, 0x01, 0x18, 0x00, 0x03, 0x30, 0x80, 0x01,
  0x00, 0xA0, 0x18, 0x00, 0x00, 0x0C, 0x08, 0xC0, 0x80, 0x00, 0x18, 0x00,
  0x02, 0x30, 0x80, 0x00, 0x00, 0xE0, 0x0B, 0x00, 0x00, 0x0C, 0x0C, 0xC0,
  0x80, 0x01, 0x08, 0x00, 0x06, 0x20, 0xC0, 0x00, 0xF0, 0x43, 0x0A, 0x3F,
  0x00, 0x0C, 0x0C, 0x80, 0x81, 0x01, 0x2C, 0x24, 0x06, 0x60, 0xC0, 0x00,
  0x18, 0x80, 0x06, 0x60, 0x00, 0x0C, 0x08, 0x00, 0x83, 0x01, 0xFC, 0xFF,
  0x0F, 0x60, 0x60, 0x00, 0x0C, 0x8C, 0x63, 0xC0, 0x00, 0x04, 0x0C, 0x00,
  0x87, 0x00, 0x06, 0x00, 0x0C, 0x40, 0x60, 0x00, 0x04, 0x04, 0xC2, 0x80,
  0x00, 0x0C, 0x08, 0x00, 0x86, 0x01, 0x06, 0x00, 0x08, 0xC0, 0x60, 0x00,
  0x06, 0x26, 0x98, 0x81, 0x01, 0x0C, 0x0C, 0x00, 0x8C, 0x01, 0x02, 0x00,
  0x18, 0xC0, 0x30, 0x00, 0xC2, 0x21, 0x10, 0x07, 0x01, 0x0C, 0x0C, 0x00,
  0x98, 0x00, 0x03, 0x00, 0x18, 0x80, 0x31, 0x00, 0xC2, 0x21, 0x08, 0x0E,
  0x01, 0x04, 0x0C, 0x00, 0x98, 0x01, 0x03, 0x00, 0x10, 0x80, 0x11, 0x00,
  0xC2, 0x21, 0x10, 0x0E, 0x01, 0x0C, 0x08, 0x00, 0xB0, 0x01, 0x01, 0x00,
  0x30, 0x00, 0x19, 0x00, 0x02, 0x30, 0x10, 0x80, 0x01, 0x0C, 0x08, 0x00,
  0xA0, 0x80, 0x01, 0x00, 0x30, 0x00, 0x1B, 0x00, 0x06, 0x10, 0x30, 0x80,
  0x00, 0x04, 0x0C, 0x00, 0xE0, 0x81, 0x01, 0x00, 0x60, 0x00, 0x0B, 0x00,
  0x0C, 0x18, 0x20, 0xC0, 0x00, 0x0C, 0x0C, 0x00, 0xC0, 0xC1, 0x00, 0x00,
  0x60, 0x00, 0x0E, 0x00, 0x18, 0x0C, 0xC0, 0x60, 0x00, 0x0C, 0x0C, 0x00,
  0x80, 0xC0, 0x00, 0x00, 0xC0, 0x00, 0x0E, 0x00, 0xF0, 0x07, 0x80, 0x1F,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xA8, 0x00, 0x00, 0x04, 0x00, 0x50, 0x00, 0x00, 0x04, 0x00, 0xA4, 0x00,
  0x00, 0x00, 0x00, 0x10, 0xBE, 0x07, 0x00, 0x04, 0x00, 0xBE, 0x03, 0x00,
  0x04, 0x00, 0xAC, 0x07, 0x00, 0x00, 0x00, 0x1E, 0x04, 0x0C, 0x00, 0x0C,
  0x00, 0x02, 0x0C, 0x00, 0x04, 0x00, 0x06, 0x08, 0x00, 0x00, 0x80, 0x3F,
  0x04, 0x18, 0x00, 0x0E, 0x00, 0x03, 0x08, 0x00, 0x0E, 0x00, 0x06, 0x18,
  0x00, 0x00, 0xF0, 0x3F, 0x06, 0x10, 0x00, 0x0A, 0x00, 0x02, 0x18, 0x00,
  0x0A, 0x00, 0x04, 0x10, 0x00, 0x00, 0xF8, 0x7F, 0x06, 0x10, 0x00, 0x1A,
  0x00, 0x02, 0x10, 0x00, 0x1A, 0x00, 0x06, 0x10, 0x00, 0x00, 0xFF, 0x7F,
  0x04, 0x30, 0x00, 0x11, 0x00, 0x03, 0x10, 0x00, 0x13, 0x00, 0x04, 0x30,
  0x00, 0xC0, 0xFF, 0x7F, 0x06, 0x30, 0x00, 0x11, 0x00, 0x02, 0x30, 0x00,
  0x11, 0x00, 0x04, 0x30, 0x00, 0xF0, 0xFF, 0x3F, 0x04, 0x10, 0x00, 0x21,
  0x00, 0x02, 0x30, 0x00, 0x31, 0x00, 0x06, 0x10, 0x00, 0xFC, 0xFF, 0x7F,
  0x06, 0x18, 0x80, 0x21, 0x00, 0x02, 0x30, 0x80, 0x20, 0x00, 0x04, 0x18,
  0x80, 0xFF, 0xFF, 0xFF, 0x04, 0x0C, 0x80, 0x20, 0x00, 0x03, 0x20, 0x80,
  0x20, 0x00, 0x06, 0x08, 0xE0, 0xFF, 0xFF, 0x7F, 0x06, 0x07, 0x80, 0x60,
  0x00, 0x02, 0x30, 0x80, 0x60, 0x00, 0x04, 0x06, 0x78, 0xFF, 0xFF, 0x7F,
  0xFC, 0x01, 0xC0, 0x40, 0x00, 0x02, 0x20, 0xC0, 0x40, 0x00, 0xFE, 0x03,
  0xF6, 0xFE, 0xFF, 0x7F, 0x06, 0x01, 0x40, 0x40, 0x00, 0x03, 0x30, 0x40,
  0x40, 0x00, 0x04, 0x01, 0xF8, 0xFD, 0xFF, 0xFF, 0x04, 0x03, 0xC0, 0xCA,
  0x00, 0x02, 0x30, 0x40, 0xE1, 0x00, 0x04, 0x03, 0xC0, 0xFF, 0xFF, 0x7F,
  0x04, 0x06, 0x60, 0xF9, 0x00, 0x02, 0x30, 0xE0, 0xBB, 0x00, 0x06, 0x06,
  0x00, 0xFF, 0xFF, 0x7F, 0x06, 0x04, 0x20, 0x80, 0x00, 0x02, 0x10, 0x20,
  0x80, 0x00, 0x04, 0x04, 0x00, 0xF8, 0xFF, 0x7F, 0x04, 0x0C, 0x20, 0x80,
  0x01, 0x02, 0x10, 0x20, 0x80, 0x01, 0x04, 0x0C, 0x00, 0xE0, 0xFF, 0x7F,
  0x06, 0x18, 0x30, 0x00, 0x01, 0x02, 0x18, 0x30, 0x00, 0x01, 0x04, 0x18,
  0x00, 0x00, 0xFF, 0x7F, 0x06, 0x10, 0x10, 0x00, 0x01, 0x03, 0x08, 0x10,
  0x00, 0x03, 0x06, 0x10, 0x00, 0x00, 0xFE, 0x7F, 0x04, 0x30, 0x18, 0x00,
  0x03, 0x02, 0x0C, 0x18, 0x00, 0x03, 0x04, 0x30, 0x00, 0x00, 0xF0, 0x3F,
  0x06, 0x60, 0x18, 0x00, 0x02, 0xEE, 0x03, 0x18, 0x00, 0x02, 0x04, 0x60,
  0x00, 0x00, 0x80, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x02, 0x04, 0x00, 0x00,
  0x00, 0x02, 0x04, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, };
