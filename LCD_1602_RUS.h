#include <LiquidCrystal_I2C.h>
#include "Print.h"

#define MAX_SYMBOL_COUNT 8  //Максимальное количество переназначаемых символов от 0 до 7
#define BYTE 0

class LCD_1602_RUS : public LiquidCrystal_I2C {
public:
	LCD_1602_RUS(uint8_t, uint8_t, uint8_t);
	void print(const wchar_t[]);
	void print(const char[]);
  void print(int, int = DEC);
  void print(unsigned int, int = DEC);
  void print(long, int = DEC);
  void print(unsigned long, int = DEC);
  void print(const String &);
  void print(char, int = BYTE);
  void print(unsigned char, int = BYTE);
  void print(double, int = 2);
  void clear();
	void setCursor(uint8_t, uint8_t); 
	uint8_t getCursorCol(); 
	uint8_t getCursorRow(); 

private:
  void CharSetToLCD(uint8_t *, uint8_t *);
  void ResetAllIndex();

  int symbol_index;//Индекс символа (от 0 до 7)
  uint8_t cursor_col;
  uint8_t cursor_row;
  //===Буквы====
  uint8_t index_rus_B;
  uint8_t index_rus_G;
  uint8_t index_rus_D;
  uint8_t index_rus_ZH;
  uint8_t index_rus_Z;
  uint8_t index_rus_I;
  uint8_t index_rus_II;
  uint8_t index_rus_L;
  uint8_t index_rus_P;
  uint8_t index_rus_U;
  uint8_t index_rus_F;
  uint8_t index_rus_TS;
  uint8_t index_rus_CH;
  uint8_t index_rus_SH;
  uint8_t index_rus_SCH;
  uint8_t index_rus_tverd;
  uint8_t index_rus_Y;
  uint8_t index_rus_myagk;
  uint8_t index_rus_EE;
  uint8_t index_rus_YU;
  uint8_t index_rus_YA;
  uint8_t index_rus_b;
  uint8_t index_rus_v;
  uint8_t index_rus_g;
  uint8_t index_rus_d;
  uint8_t index_rus_yo;
  uint8_t index_rus_zh;
  uint8_t index_rus_z;
  uint8_t index_rus_i;
  uint8_t index_rus_ii;
  uint8_t index_rus_k;
  uint8_t index_rus_l;
  uint8_t index_rus_m;
  uint8_t index_rus_n;
  uint8_t index_rus_p;
  uint8_t index_rus_t;
  uint8_t index_rus_u;
  uint8_t index_rus_f;
  uint8_t index_rus_ts;
  uint8_t index_rus_ch;
  uint8_t index_rus_sh;
  uint8_t index_rus_sch;
  uint8_t index_rus_tverd_mal;
  uint8_t index_rus_y;
  uint8_t index_rus_myagk_mal;
  uint8_t index_rus_ee;
  uint8_t index_rus_yu;
  uint8_t index_rus_ya;
};

extern const byte rus_B[];
extern const byte rus_G[];
extern const byte rus_D[];
extern const byte rus_ZH[];
extern const byte rus_Z[];
extern const byte rus_I[];
extern const byte rus_II[];
extern const byte rus_L[];
extern const byte rus_P[];
extern const byte rus_U[];
extern const byte rus_F[];
extern const byte rus_TS[];
extern const byte rus_CH[];
extern const byte rus_SH[];
extern const byte rus_SCH[];
extern const byte rus_tverd[];
extern const byte rus_Y[];
extern const byte rus_myagk[];
extern const byte rus_EE[];
extern const byte rus_YU[];
extern const byte rus_YA[];
extern const byte rus_b[];
extern const byte rus_v[];
extern const byte rus_g[];
extern const byte rus_d[];
extern const byte rus_yo[];
extern const byte rus_zh[];
extern const byte rus_z[];
extern const byte rus_i[];
extern const byte rus_ii[];
extern const byte rus_k[];
extern const byte rus_l[];
extern const byte rus_m[];
extern const byte rus_n[];
extern const byte rus_p[];
extern const byte rus_t[];
extern const byte rus_u[];
extern const byte rus_f[];
extern const byte rus_ts[];
extern const byte rus_ch[];
extern const byte rus_sh[];
extern const byte rus_sch[];
extern const byte rus_tverd_mal[];
extern const byte rus_y[];
extern const byte rus_myagk_mal[];
extern const byte rus_ee[];
extern const byte rus_yu[];
extern const byte rus_ya[];
