#include <arduino.h>
#include "LCD_1602_RUS.h"

LCD_1602_RUS :: LCD_1602_RUS(uint8_t lcd_Addr,uint8_t lcd_cols,uint8_t lcd_rows) : LiquidCrystal_I2C (lcd_Addr, lcd_cols, lcd_rows)
{
   symbol_index = 0;
   ResetAllIndex();//Сброс значений индексов (неинициализированы = 255)
}
void LCD_1602_RUS::clear()
{
    LiquidCrystal_I2C::clear();
    ResetAllIndex();
}
void LCD_1602_RUS::setCursor(uint8_t col, uint8_t row)
{
    cursor_col = col;
    cursor_row = row;
    LiquidCrystal_I2C::setCursor(cursor_col, cursor_row);
}
uint8_t LCD_1602_RUS::getCursorCol()
{
  return cursor_col;
}
uint8_t LCD_1602_RUS::getCursorRow()
{
  return cursor_row;
}
void LCD_1602_RUS::print(const char *str){
	LiquidCrystal_I2C::print(str);
}
void LCD_1602_RUS::print(int val, int base){
  LiquidCrystal_I2C::print(val, base);
}
void LCD_1602_RUS::print(unsigned int val, int base){
  LiquidCrystal_I2C::print(val, base);
}
void LCD_1602_RUS::print(long val, int base){
  LiquidCrystal_I2C::print(val, base);
}
void LCD_1602_RUS::print(unsigned long val, int base){
  LiquidCrystal_I2C::print(val, base);
}
void LCD_1602_RUS::print(char val, int base){
  LiquidCrystal_I2C::print(val, base);
}
void LCD_1602_RUS::print(unsigned char val, int base){
  LiquidCrystal_I2C::print(val, base);
}
void LCD_1602_RUS::print(const String &str){
  LiquidCrystal_I2C::print(str);
}
void LCD_1602_RUS::print(double val, int base){
  LiquidCrystal_I2C::print(val, base);
}
void LCD_1602_RUS::print(const wchar_t *_str){
  int current_char  = 0;
  int size = 0;
 
  //Определяем длину строки (количество символов)
  while(_str[size] != NULL)
  {
    size++;
  }
  
  while(current_char < size)
  {
    switch(_str[current_char])
    {
      //Русский алфавит, требующий новых символов
      //Единовременно может быть заменено только 8 символов
      case 1041: //Б
        CharSetToLCD(rus_B, &index_rus_B);
      break;
      case 1043: //Г
        CharSetToLCD(rus_G, &index_rus_G);
      break;
      case 1044: //Д
        CharSetToLCD(rus_D, &index_rus_D);
      break;
      case 1046: //Ж
        CharSetToLCD(rus_ZH, &index_rus_ZH);
      break;
      case 1047: //З
        CharSetToLCD(rus_Z, &index_rus_Z);
      break;
      case 1048: //И
        CharSetToLCD(rus_I, &index_rus_I);
      break;
      case 1049: //Й
        CharSetToLCD(rus_II, &index_rus_II);
      break;
      case 1051: //Л
        CharSetToLCD(rus_L, &index_rus_L);
      break;
      case 1055: //П
        CharSetToLCD(rus_P, &index_rus_P);
      break;
      case 1059: //У
        CharSetToLCD(rus_U, &index_rus_U);
      break;
      case 1060: //Ф
        CharSetToLCD(rus_F, &index_rus_F);
      break;
      case 1062: //Ц
        CharSetToLCD(rus_TS, &index_rus_TS);
      break;
      case 1063: //Ч
        CharSetToLCD(rus_CH, &index_rus_CH);
      break;
      case 1064: //Ш
        CharSetToLCD(rus_SH, &index_rus_SH);
      break;
      case 1065: //Щ
        CharSetToLCD(rus_SCH, &index_rus_SCH);
      break;
      case 1066: //Ъ
        CharSetToLCD(rus_tverd, &index_rus_tverd);
      break;
      case 1067: //Ы
        CharSetToLCD(rus_Y, &index_rus_Y);
      break;
      case 1068: //Ь
        CharSetToLCD(rus_myagk, &index_rus_myagk);
      break;
      case 1069: //Э
        CharSetToLCD(rus_EE, &index_rus_EE);
      break;
      case 1070: //Ю
        CharSetToLCD(rus_YU, &index_rus_YU);
      break;
      case 1071: //Я
        CharSetToLCD(rus_YA, &index_rus_YA);
      break;
      case 1073: //б
        CharSetToLCD(rus_b, &index_rus_b);
      break;
      case 1074: //в
        CharSetToLCD(rus_v, &index_rus_v);
      break;
      case 1075: //г
        CharSetToLCD(rus_g, &index_rus_g);
      break;
      case 1076: //д
        CharSetToLCD(rus_d, &index_rus_d);
      break;
      case 1105: //ё
        CharSetToLCD(rus_yo, &index_rus_yo);
      break;
      case 1078: //ж
        CharSetToLCD(rus_zh, &index_rus_zh);
      break;
      case 1079: //з
        CharSetToLCD(rus_z, &index_rus_z);
      break;
      case 1080: //и
        CharSetToLCD(rus_i, &index_rus_i);
      break;
      case 1081: //й
        CharSetToLCD(rus_ii, &index_rus_ii);
      break;
      case 1082: //к
        CharSetToLCD(rus_k, &index_rus_k);
      break;
      case 1083: //л
        CharSetToLCD(rus_l, &index_rus_l);
      break;
      case 1084: //м
        CharSetToLCD(rus_m, &index_rus_m);
      break;
      case 1085: //н
        CharSetToLCD(rus_n, &index_rus_n);
      break;
      case 1087: //п
        CharSetToLCD(rus_p, &index_rus_p);
      break;
      case 1090: //т
        CharSetToLCD(rus_t, &index_rus_t);
      break;
      case 1092: //ф
        CharSetToLCD(rus_f, &index_rus_f);
      break;
      case 1094: //ц
        CharSetToLCD(rus_ts, &index_rus_ts);
      break;
      case 1095: //ч
        CharSetToLCD(rus_ch, &index_rus_ch);
      break;
      case 1096: //ш
        CharSetToLCD(rus_sh, &index_rus_sh);
      break;
      case 1097: //щ
        CharSetToLCD(rus_sch, &index_rus_sch);
      break;
      case 1098: //ъ
        CharSetToLCD(rus_tverd_mal, &index_rus_tverd_mal);
      break;
      case 1099: //ы
        CharSetToLCD(rus_y, &index_rus_y);
      break;
      case 1100: //ь
        CharSetToLCD(rus_myagk_mal, &index_rus_myagk_mal);
      break;
      case 1101: //э
        CharSetToLCD(rus_ee, &index_rus_ee);
      break;
      case 1102: //ю
        CharSetToLCD(rus_yu, &index_rus_yu);
      break;
      case 1103: //я
        CharSetToLCD(rus_ya, &index_rus_ya);
      break;
      //Русский алфавит, использующий одинаковые с английским алфавитом символы
      case 1040: //А
        LiquidCrystal_I2C::print("A");
      break;
      case 1042: //В
        LiquidCrystal_I2C::print("B");
      break;
      case 1045: //Е
        LiquidCrystal_I2C::print("E");
      break;
      case 1025: //Ё
        LiquidCrystal_I2C::print("E");
      break;
      case 1050: //К
        LiquidCrystal_I2C::print("K");
      break;
      case 1052: //M
        LiquidCrystal_I2C::print("M");
      break;
      case 1053: //H
        LiquidCrystal_I2C::print("H");
      break;
      case 1054: //O
        LiquidCrystal_I2C::print("O");
      break;
      case 1056: //P
        LiquidCrystal_I2C::print("P");
      break;
      case 1057: //C
        LiquidCrystal_I2C::print("C");
      break;
      case 1058: //T
        LiquidCrystal_I2C::print("T");
      break;
      case 1061: //X
        LiquidCrystal_I2C::print("X");
      break;
      case 1072: //а
        LiquidCrystal_I2C::print("a");
      break;
      case 1077: //е
        LiquidCrystal_I2C::print("e");
      break;
      case 1086: //o
        LiquidCrystal_I2C::print("o");
      break;
      case 1088: //p
        LiquidCrystal_I2C::print("p");
      break;
      case 1089: //c
        LiquidCrystal_I2C::print("c");
      break;
      case 1091: //y
        LiquidCrystal_I2C::print("y");
      break;
      case 1093: //x
        LiquidCrystal_I2C::print("x");
      break;
      case 0x00B0: //Знак градуса
        LiquidCrystal_I2C::write(223);
      break;
      //Английский алфавит без изменения
      default:
        LiquidCrystal_I2C::print((char)_str[current_char]);
      break;
    }
    current_char++;
    cursor_col++;
  }
 
}
void LCD_1602_RUS::CharSetToLCD(const uint8_t *array, uint8_t *index)
{
  uint8_t x,y;

  if(*index == 255)// Если символ еще не создан, то создаем
  {
    x = getCursorCol();
    y = getCursorRow();
    createChar(symbol_index, (uint8_t *)array);// Создаем символ на текущем (по очереди) месте в знакогенераторе (от 0 до MAX_SYMBOL_COUNT)
    setCursor(x,y);
    write(symbol_index);// Выводим символ на экран
    //Запомианем, что букве соответствует определенный индекс
    *index = symbol_index;
    symbol_index++;
    if(symbol_index >= MAX_SYMBOL_COUNT)
    	symbol_index = 0;
  }
  else   //Иначе печатаем уже существующий
    write(*index);
}
void LCD_1602_RUS::ResetAllIndex()
{
  index_rus_B=255;
  index_rus_G=255;
  index_rus_D=255;
  index_rus_ZH=255;
  index_rus_Z=255;
  index_rus_I=255;
  index_rus_II=255;
  index_rus_L=255;
  index_rus_P=255;
  index_rus_U=255;
  index_rus_F=255;
  index_rus_TS=255;
  index_rus_CH=255;
  index_rus_SH=255;
  index_rus_SCH=255;
  index_rus_tverd=255;
  index_rus_Y=255;
  index_rus_myagk=255;
  index_rus_EE=255;
  index_rus_YU=255;
  index_rus_YA=255;
  index_rus_b=255;
  index_rus_v=255;
  index_rus_g=255;
  index_rus_d=255;
  index_rus_yo=255;
  index_rus_zh=255;
  index_rus_z=255;
  index_rus_i=255;
  index_rus_ii=255;
  index_rus_k=255;
  index_rus_l=255;
  index_rus_m=255;
  index_rus_n=255;
  index_rus_p=255;
  index_rus_t=255;
  index_rus_u=255;
  index_rus_f=255;
  index_rus_ts=255;
  index_rus_ch=255;
  index_rus_sh=255;
  index_rus_sch=255;
  index_rus_tverd_mal=255;
  index_rus_y=255;
  index_rus_myagk_mal=255;
  index_rus_ee=255;
  index_rus_yu=255;
  index_rus_ya=255;
}
//Б
const byte rus_B[8] PROGMEM = {
  0b11111,
  0b10000,
  0b10000,
  0b11110,
  0b10001,
  0b10001,
  0b11110,
  0b00000
};
//Г
const byte rus_G[8] PROGMEM = {
  0b11111,
  0b10000,
  0b10000,
  0b10000,
  0b10000,
  0b10000,
  0b10000,
  0b00000
};
//Д
const byte rus_D[8] PROGMEM = {
  0b00110,
  0b01010,
  0b01010,
  0b01010,
  0b01010,
  0b01010,
  0b11111,
  0b10001
};
//Ж
const byte rus_ZH[8] PROGMEM = {
  0b10101,
  0b10101,
  0b10101,
  0b01110,
  0b10101,
  0b10101,
  0b10101,
  0b00000
};
//З
const byte rus_Z[8] PROGMEM = {
  0b01110,
  0b10001,
  0b00001,
  0b00110,
  0b00001,
  0b10001,
  0b01110,
  0b00000
};
//И
const byte rus_I[8] PROGMEM = {
  0b10001,
  0b10001,
  0b10001,
  0b10011,
  0b10101,
  0b11001,
  0b10001,
  0b00000
};
//Й
const byte rus_II[8] PROGMEM = {
  0b10101,
  0b10001,
  0b10001,
  0b10011,
  0b10101,
  0b11001,
  0b10001,
  0b00000
};
//Л
const byte rus_L[8] PROGMEM = {
  0b00111,
  0b01001,
  0b01001,
  0b01001,
  0b01001,
  0b01001,
  0b10001,
  0b00000
};
//П
const byte rus_P[8] PROGMEM = {
  0b11111,
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b00000
};
//У
const byte rus_U[8] PROGMEM = {
  0b10001,
  0b10001,
  0b10001,
  0b01111,
  0b00001,
  0b10001,
  0b01110,
  0b00000
};
//Ф
const byte rus_F[8] PROGMEM = {
  0b00100,
  0b01110,
  0b10101,
  0b10101,
  0b10101,
  0b01110,
  0b00100,
  0b00000
};
//Ц
const byte rus_TS[8] PROGMEM = {
  0b10010,
  0b10010,
  0b10010,
  0b10010,
  0b10010,
  0b10010,
  0b11111,
  0b00001
};
//Ч
const byte rus_CH[8] PROGMEM = {
  0b10001,
  0b10001,
  0b10001,
  0b01111,
  0b00001,
  0b00001,
  0b00001,
  0b00000
};
//Ш
const byte rus_SH[8] PROGMEM = {
  0b10001,
  0b10001,
  0b10001,
  0b10101,
  0b10101,
  0b10101,
  0b11111,
  0b00000
};
//Щ
const byte rus_SCH[8] PROGMEM = {
  0b10001,
  0b10001,
  0b10001,
  0b10101,
  0b10101,
  0b10101,
  0b11111,
  0b00001
};
//Ъ
const byte rus_tverd[8] PROGMEM = {
  0b11000,
  0b01000,
  0b01000,
  0b01110,
  0b01001,
  0b01001,
  0b01110,
  0b00000
};
//Ы
const byte rus_Y[8] PROGMEM = {
  0b10001,
  0b10001,
  0b10001,
  0b11101,
  0b10011,
  0b10011,
  0b11101,
  0b00000
};
//Ь
const byte rus_myagk[8] PROGMEM = {
  0b10000,
  0b10000,
  0b10000,
  0b11110,
  0b10001,
  0b10001,
  0b11110,
  0b00000
};
//Э
const byte rus_EE[8] PROGMEM = {
  0b01110,
  0b10001,
  0b00001,
  0b00111,
  0b00001,
  0b10001,
  0b01110,
  0b00000
};
//Ю
const byte rus_YU[8] PROGMEM = {
  0b10010,
  0b10101,
  0b10101,
  0b11101,
  0b10101,
  0b10101,
  0b10010,
  0b00000
};
//Я
const byte rus_YA[8] PROGMEM = {
  0b01111,
  0b10001,
  0b10001,
  0b01111,
  0b00101,
  0b01001,
  0b10001,
  0b00000
};
const byte rus_b[8] PROGMEM = {
  0b00011,
  0b01100,
  0b10000,
  0b11110,
  0b10001,
  0b10001,
  0b01110,
  0b00000
};//б
const byte rus_v[8] PROGMEM = {
  0b00000,
  0b00000,
  0b11110,
  0b10001,
  0b11110,
  0b10001,
  0b11110,
  0b00000
};//в
const byte rus_g[8] PROGMEM = {
  0b00000,
  0b00000,
  0b11110,
  0b10000,
  0b10000,
  0b10000,
  0b10000,
  0b00000
};//г
const byte rus_d[8] PROGMEM = {
  0b00000,
  0b00000,
  0b00110,
  0b01010,
  0b01010,
  0b01010,
  0b11111,
  0b10001
};//д
const byte rus_yo[8] PROGMEM = {
  0b01010,
  0b00000,
  0b01110,
  0b10001,
  0b11111,
  0b10000,
  0b01111,
  0b00000
};//ё
const byte rus_zh[8] PROGMEM = {
  0b00000,
  0b00000,
  0b10101,
  0b10101,
  0b01110,
  0b10101,
  0b10101,
  0b00000
};//ж
const byte rus_z[8] PROGMEM = {
  0b00000,
  0b00000,
  0b01110,
  0b10001,
  0b00110,
  0b10001,
  0b01110,
  0b00000
};//з
const byte rus_i[8] PROGMEM = {
  0b00000,
  0b00000,
  0b10001,
  0b10011,
  0b10101,
  0b11001,
  0b10001,
  0b00000
};//и
const byte rus_ii[8] PROGMEM = {
  0b01010,
  0b00100,
  0b10001,
  0b10011,
  0b10101,
  0b11001,
  0b10001,
  0b00000
};//й
const byte rus_k[8] PROGMEM = {
  0b00000,
  0b00000,
  0b10010,
  0b10100,
  0b11000,
  0b10100,
  0b10010,
  0b00000
};//к
const byte rus_l[8] PROGMEM = {
  0b00000,
  0b00000,
  0b00111,
  0b01001,
  0b01001,
  0b01001,
  0b10001,
  0b00000
};//л
const byte rus_m[8] PROGMEM = {
  0b00000,
  0b00000,
  0b10001,
  0b11011,
  0b10101,
  0b10001,
  0b10001,
  0b00000
};//м
const byte rus_n[8] PROGMEM = {
  0b00000,
  0b00000,
  0b10001,
  0b10001,
  0b11111,
  0b10001,
  0b10001,
  0b00000
};//н
const byte rus_p[8] PROGMEM = {
  0b00000,
  0b00000,
  0b11111,
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b00000
};//п
const byte rus_t[8] PROGMEM = {
  0b00000,
  0b00000,
  0b11111,
  0b00100,
  0b00100,
  0b00100,
  0b00100,
  0b00000
};//т
const byte rus_f[8] PROGMEM = {
  0b00000,
  0b00000,
  0b00100,
  0b01110,
  0b10101,
  0b01110,
  0b00100,
  0b00000
};//ф
const byte rus_ts[8] PROGMEM = {
  0b00000,
  0b00000,
  0b10010,
  0b10010,
  0b10010,
  0b10010,
  0b11111,
  0b00001
};//ц
const byte rus_ch[8] PROGMEM = {
  0b00000,
  0b00000,
  0b10001,
  0b10001,
  0b01111,
  0b00001,
  0b00001,
  0b00000
};//ч
const byte rus_sh[8] PROGMEM = {
  0b00000,
  0b00000,
  0b10101,
  0b10101,
  0b10101,
  0b10101,
  0b11111,
  0b00000
};//ш
const byte rus_sch[8] PROGMEM = {
  0b00000,
  0b00000,
  0b10101,
  0b10101,
  0b10101,
  0b10101,
  0b11111,
  0b00001
};//щ
const byte rus_tverd_mal[8] PROGMEM = {
  0b00000,
  0b00000,
  0b11000,
  0b01000,
  0b01110,
  0b01001,
  0b01110,
  0b00000
};//ъ
const byte rus_y[8] PROGMEM = {
  0b00000,
  0b00000,
  0b10001,
  0b10001,
  0b11101,
  0b10011,
  0b11101,
  0b00000
};//ы
const byte rus_myagk_mal[8] PROGMEM = {
  0b00000,
  0b00000,
  0b10000,
  0b10000,
  0b11110,
  0b10001,
  0b11110,
  0b00000
};//ь
const byte rus_ee[8] PROGMEM = {
  0b00000,
  0b00000,
  0b01110,
  0b10001,
  0b00111,
  0b10001,
  0b01110,
  0b00000
};//э
const byte rus_yu[8] PROGMEM = {
  0b00000,
  0b00000,
  0b10010,
  0b10101,
  0b11101,
  0b10101,
  0b10010,
  0b00000
};//ю
const byte rus_ya[8] PROGMEM = {
  0b00000,
  0b00000,
  0b01111,
  0b10001,
  0b01111,
  0b00101,
  0b01001,
  0b00000
};//я
