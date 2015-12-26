#include <arduino.h>
#include "LCD_1602_RUS.h"

LCD_1602_RUS :: LCD_1602_RUS(uint8_t lcd_Addr,uint8_t lcd_cols,uint8_t lcd_rows) : LiquidCrystal_I2C (lcd_Addr, lcd_cols, lcd_rows)
{
   symbol_index = 0;
   ResetAllIndex();//РЎР±СЂРѕСЃ Р·РЅР°С‡РµРЅРёР№ РёРЅРґРµРєСЃРѕРІ (РЅРµРёРЅРёС†РёР°Р»РёР·РёСЂРѕРІР°РЅС‹ = 255)
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
 
  //РћРїСЂРµРґРµР»СЏРµРј РґР»РёРЅСѓ СЃС‚СЂРѕРєРё (РєРѕР»РёС‡РµСЃС‚РІРѕ СЃРёРјРІРѕР»РѕРІ)
  while(_str[size] != NULL)
  {
    size++;
  }
  
  while(current_char < size)
  {
    switch(_str[current_char])
    {
      //Р СѓСЃСЃРєРёР№ Р°Р»С„Р°РІРёС‚, С‚СЂРµР±СѓСЋС‰РёР№ РЅРѕРІС‹С… СЃРёРјРІРѕР»РѕРІ
      //Р•РґРёРЅРѕРІСЂРµРјРµРЅРЅРѕ РјРѕР¶РµС‚ Р±С‹С‚СЊ Р·Р°РјРµРЅРµРЅРѕ С‚РѕР»СЊРєРѕ 8 СЃРёРјРІРѕР»РѕРІ
      case 1041: //Р‘
        CharSetToLCD(rus_B, &index_rus_B);
      break;
      case 1043: //Р“
        CharSetToLCD(rus_G, &index_rus_G);
      break;
      case 1044: //Р”
        CharSetToLCD(rus_D, &index_rus_D);
      break;
      case 1046: //Р–
        CharSetToLCD(rus_ZH, &index_rus_ZH);
      break;
      case 1047: //Р—
        CharSetToLCD(rus_Z, &index_rus_Z);
      break;
      case 1048: //Р
        CharSetToLCD(rus_I, &index_rus_I);
      break;
      case 1049: //Р™
        CharSetToLCD(rus_II, &index_rus_II);
      break;
      case 1051: //Р›
        CharSetToLCD(rus_L, &index_rus_L);
      break;
      case 1055: //Рџ
        CharSetToLCD(rus_P, &index_rus_P);
      break;
      case 1059: //РЈ
        CharSetToLCD(rus_U, &index_rus_U);
      break;
      case 1060: //Р¤
        CharSetToLCD(rus_F, &index_rus_F);
      break;
      case 1062: //Р¦
        CharSetToLCD(rus_TS, &index_rus_TS);
      break;
      case 1063: //Р§
        CharSetToLCD(rus_CH, &index_rus_CH);
      break;
      case 1064: //РЁ
        CharSetToLCD(rus_SH, &index_rus_SH);
      break;
      case 1065: //Р©
        CharSetToLCD(rus_SCH, &index_rus_SCH);
      break;
      case 1066: //РЄ
        CharSetToLCD(rus_tverd, &index_rus_tverd);
      break;
      case 1067: //Р«
        CharSetToLCD(rus_Y, &index_rus_Y);
      break;
      case 1068: //Р¬
        CharSetToLCD(rus_myagk, &index_rus_myagk);
      break;
      case 1069: //Р­
        CharSetToLCD(rus_EE, &index_rus_EE);
      break;
      case 1070: //Р®
        CharSetToLCD(rus_YU, &index_rus_YU);
      break;
      case 1071: //РЇ
        CharSetToLCD(rus_YA, &index_rus_YA);
      break;
      case 1073: //Р±
        CharSetToLCD(rus_b, &index_rus_b);
      break;
      case 1074: //РІ
        CharSetToLCD(rus_v, &index_rus_v);
      break;
      case 1075: //Рі
        CharSetToLCD(rus_g, &index_rus_g);
      break;
      case 1076: //Рґ
        CharSetToLCD(rus_d, &index_rus_d);
      break;
      case 1105: //С‘
        CharSetToLCD(rus_yo, &index_rus_yo);
      break;
      case 1078: //Р¶
        CharSetToLCD(rus_zh, &index_rus_zh);
      break;
      case 1079: //Р·
        CharSetToLCD(rus_z, &index_rus_z);
      break;
      case 1080: //Рё
        CharSetToLCD(rus_i, &index_rus_i);
      break;
      case 1081: //Р№
        CharSetToLCD(rus_ii, &index_rus_ii);
      break;
      case 1082: //Рє
        CharSetToLCD(rus_k, &index_rus_k);
      break;
      case 1083: //Р»
        CharSetToLCD(rus_l, &index_rus_l);
      break;
      case 1084: //Рј
        CharSetToLCD(rus_m, &index_rus_m);
      break;
      case 1085: //РЅ
        CharSetToLCD(rus_n, &index_rus_n);
      break;
      case 1087: //Рї
        CharSetToLCD(rus_p, &index_rus_p);
      break;
      case 1090: //С‚
        CharSetToLCD(rus_t, &index_rus_t);
      break;
      case 1092: //С„
        CharSetToLCD(rus_f, &index_rus_f);
      break;
      case 1094: //С†
        CharSetToLCD(rus_ts, &index_rus_ts);
      break;
      case 1095: //С‡
        CharSetToLCD(rus_ch, &index_rus_ch);
      break;
      case 1096: //С€
        CharSetToLCD(rus_sh, &index_rus_sh);
      break;
      case 1097: //С‰
        CharSetToLCD(rus_sch, &index_rus_sch);
      break;
      case 1098: //СЉ
        CharSetToLCD(rus_tverd_mal, &index_rus_tverd_mal);
      break;
      case 1099: //С‹
        CharSetToLCD(rus_y, &index_rus_y);
      break;
      case 1100: //СЊ
        CharSetToLCD(rus_myagk_mal, &index_rus_myagk_mal);
      break;
      case 1101: //СЌ
        CharSetToLCD(rus_ee, &index_rus_ee);
      break;
      case 1102: //СЋ
        CharSetToLCD(rus_yu, &index_rus_yu);
      break;
      case 1103: //СЏ
        CharSetToLCD(rus_ya, &index_rus_ya);
      break;
      //Р СѓСЃСЃРєРёР№ Р°Р»С„Р°РІРёС‚, РёСЃРїРѕР»СЊР·СѓСЋС‰РёР№ РѕРґРёРЅР°РєРѕРІС‹Рµ СЃ Р°РЅРіР»РёР№СЃРєРёРј Р°Р»С„Р°РІРёС‚РѕРј СЃРёРјРІРѕР»С‹
      case 1040: //Рђ
        LiquidCrystal_I2C::print("A");
      break;
      case 1042: //Р’
        LiquidCrystal_I2C::print("B");
      break;
      case 1045: //Р•
        LiquidCrystal_I2C::print("E");
      break;
      case 1025: //РЃ
        LiquidCrystal_I2C::print("E");
      break;
      case 1050: //Рљ
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
      case 1072: //Р°
        LiquidCrystal_I2C::print("a");
      break;
      case 1077: //Рµ
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
      case 0x00B0: //Р—РЅР°Рє РіСЂР°РґСѓСЃР°
        LiquidCrystal_I2C::write(223);
      break;
      //РђРЅРіР»РёР№СЃРєРёР№ Р°Р»С„Р°РІРёС‚ Р±РµР· РёР·РјРµРЅРµРЅРёСЏ
      default:
        LiquidCrystal_I2C::print((char)_str[current_char]);
      break;
    }
    current_char++;
    cursor_col++;
  }
 
}
void LCD_1602_RUS::CharSetToLCD(uint8_t *array, uint8_t *index)
{
  uint8_t x,y;

  if(*index == 255)// Р•СЃР»Рё СЃРёРјРІРѕР» РµС‰Рµ РЅРµ СЃРѕР·РґР°РЅ, С‚Рѕ СЃРѕР·РґР°РµРј
  {
    x = getCursorCol();
    y = getCursorRow();
    createChar(symbol_index, array);// РЎРѕР·РґР°РµРј СЃРёРјРІРѕР» РЅР° С‚РµРєСѓС‰РµРј (РїРѕ РѕС‡РµСЂРµРґРё) РјРµСЃС‚Рµ РІ Р·РЅР°РєРѕРіРµРЅРµСЂР°С‚РѕСЂРµ (РѕС‚ 0 РґРѕ MAX_SYMBOL_COUNT)
    setCursor(x,y);
    write(symbol_index);// Р’С‹РІРѕРґРёРј СЃРёРјРІРѕР» РЅР° СЌРєСЂР°РЅ
    //Р—Р°РїРѕРјРёР°РЅРµРј, С‡С‚Рѕ Р±СѓРєРІРµ СЃРѕРѕС‚РІРµС‚СЃС‚РІСѓРµС‚ РѕРїСЂРµРґРµР»РµРЅРЅС‹Р№ РёРЅРґРµРєСЃ
    *index = symbol_index;
    symbol_index++;
    if(symbol_index >= MAX_SYMBOL_COUNT)
    	symbol_index = 0;
  }
  else   //РРЅР°С‡Рµ РїРµС‡Р°С‚Р°РµРј СѓР¶Рµ СЃСѓС‰РµСЃС‚РІСѓСЋС‰РёР№
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
//Р‘
byte rus_B[8] = {
  0b11111,
  0b10000,
  0b10000,
  0b11110,
  0b10001,
  0b10001,
  0b11110,
  0b00000
};
//Р“
byte rus_G[8] = {
  0b11111,
  0b10000,
  0b10000,
  0b10000,
  0b10000,
  0b10000,
  0b10000,
  0b00000
};
//Р”
byte rus_D[8] = {
  0b00110,
  0b01010,
  0b01010,
  0b01010,
  0b01010,
  0b01010,
  0b11111,
  0b10001
};
//Р–
byte rus_ZH[8] = {
  0b10101,
  0b10101,
  0b10101,
  0b01110,
  0b10101,
  0b10101,
  0b10101,
  0b00000
};
//Р—
byte rus_Z[8] = {
  0b01110,
  0b10001,
  0b00001,
  0b00110,
  0b00001,
  0b10001,
  0b01110,
  0b00000
};
//Р
byte rus_I[8] = {
  0b10001,
  0b10001,
  0b10001,
  0b10011,
  0b10101,
  0b11001,
  0b10001,
  0b00000
};
//Р™
byte rus_II[8] = {
  0b10101,
  0b10001,
  0b10001,
  0b10011,
  0b10101,
  0b11001,
  0b10001,
  0b00000
};
//Р›
byte rus_L[8] = {
  0b00111,
  0b01001,
  0b01001,
  0b01001,
  0b01001,
  0b01001,
  0b10001,
  0b00000
};
//Рџ
byte rus_P[8] = {
  0b11111,
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b00000
};
//РЈ
byte rus_U[8] = {
  0b10001,
  0b10001,
  0b10001,
  0b01111,
  0b00001,
  0b10001,
  0b01110,
  0b00000
};
//Р¤
byte rus_F[8] = {
  0b00100,
  0b01110,
  0b10101,
  0b10101,
  0b10101,
  0b01110,
  0b00100,
  0b00000
};
//Р¦
byte rus_TS[8] = {
  0b10010,
  0b10010,
  0b10010,
  0b10010,
  0b10010,
  0b10010,
  0b11111,
  0b00001
};
//Р§
byte rus_CH[8] = {
  0b10001,
  0b10001,
  0b10001,
  0b01111,
  0b00001,
  0b00001,
  0b00001,
  0b00000
};
//РЁ
byte rus_SH[8] = {
  0b10001,
  0b10001,
  0b10001,
  0b10101,
  0b10101,
  0b10101,
  0b11111,
  0b00000
};
//Р©
byte rus_SCH[8] = {
  0b10001,
  0b10001,
  0b10001,
  0b10101,
  0b10101,
  0b10101,
  0b11111,
  0b00001
};
//РЄ
byte rus_tverd[8] = {
  0b11000,
  0b01000,
  0b01000,
  0b01110,
  0b01001,
  0b01001,
  0b01110,
  0b00000
};
//Р«
byte rus_Y[8] = {
  0b10001,
  0b10001,
  0b10001,
  0b11101,
  0b10011,
  0b10011,
  0b11101,
  0b00000
};
//Р¬
byte rus_myagk[8] = {
  0b10000,
  0b10000,
  0b10000,
  0b11110,
  0b10001,
  0b10001,
  0b11110,
  0b00000
};
//Р­
byte rus_EE[8] = {
  0b01110,
  0b10001,
  0b00001,
  0b00111,
  0b00001,
  0b10001,
  0b01110,
  0b00000
};
//Р®
byte rus_YU[8] = {
  0b10010,
  0b10101,
  0b10101,
  0b11101,
  0b10101,
  0b10101,
  0b10010,
  0b00000
};
//РЇ
byte rus_YA[8] = {
  0b01111,
  0b10001,
  0b10001,
  0b01111,
  0b00101,
  0b01001,
  0b10001,
  0b00000
};
byte rus_b[8] = {
  0b00011,
  0b01100,
  0b10000,
  0b11110,
  0b10001,
  0b10001,
  0b01110,
  0b00000
};//Р±
byte rus_v[8] = {
  0b00000,
  0b00000,
  0b11110,
  0b10001,
  0b11110,
  0b10001,
  0b11110,
  0b00000
};//РІ
byte rus_g[8] = {
  0b00000,
  0b00000,
  0b11110,
  0b10000,
  0b10000,
  0b10000,
  0b10000,
  0b00000
};//Рі
byte rus_d[8] = {
  0b00000,
  0b00000,
  0b00110,
  0b01010,
  0b01010,
  0b01010,
  0b11111,
  0b10001
};//Рґ
byte rus_yo[8] = {
  0b01010,
  0b00000,
  0b01110,
  0b10001,
  0b11111,
  0b10000,
  0b01111,
  0b00000
};//С‘
byte rus_zh[8] = {
  0b00000,
  0b00000,
  0b10101,
  0b10101,
  0b01110,
  0b10101,
  0b10101,
  0b00000
};//Р¶
byte rus_z[8] = {
  0b00000,
  0b00000,
  0b01110,
  0b10001,
  0b00110,
  0b10001,
  0b01110,
  0b00000
};//Р·
byte rus_i[8] = {
  0b00000,
  0b00000,
  0b10001,
  0b10011,
  0b10101,
  0b11001,
  0b10001,
  0b00000
};//Рё
byte rus_ii[8] = {
  0b01010,
  0b00100,
  0b10001,
  0b10011,
  0b10101,
  0b11001,
  0b10001,
  0b00000
};//Р№
byte rus_k[8] = {
  0b00000,
  0b00000,
  0b10010,
  0b10100,
  0b11000,
  0b10100,
  0b10010,
  0b00000
};//Рє
byte rus_l[8] = {
  0b00000,
  0b00000,
  0b00111,
  0b01001,
  0b01001,
  0b01001,
  0b10001,
  0b00000
};//Р»
byte rus_m[8] = {
  0b00000,
  0b00000,
  0b10001,
  0b11011,
  0b10101,
  0b10001,
  0b10001,
  0b00000
};//Рј
byte rus_n[8] = {
  0b00000,
  0b00000,
  0b10001,
  0b10001,
  0b11111,
  0b10001,
  0b10001,
  0b00000
};//РЅ
byte rus_p[8] = {
  0b00000,
  0b00000,
  0b11111,
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b00000
};//Рї
byte rus_t[8] = {
  0b00000,
  0b00000,
  0b11111,
  0b00100,
  0b00100,
  0b00100,
  0b00100,
  0b00000
};//С‚
byte rus_f[8] = {
  0b00000,
  0b00000,
  0b00100,
  0b01110,
  0b10101,
  0b01110,
  0b00100,
  0b00000
};//С„
byte rus_ts[8] = {
  0b00000,
  0b00000,
  0b10010,
  0b10010,
  0b10010,
  0b10010,
  0b11111,
  0b00001
};//С†
byte rus_ch[8] = {
  0b00000,
  0b00000,
  0b10001,
  0b10001,
  0b01111,
  0b00001,
  0b00001,
  0b00000
};//С‡
byte rus_sh[8] = {
  0b00000,
  0b00000,
  0b10101,
  0b10101,
  0b10101,
  0b10101,
  0b11111,
  0b00000
};//С€
byte rus_sch[8] = {
  0b00000,
  0b00000,
  0b10101,
  0b10101,
  0b10101,
  0b10101,
  0b11111,
  0b00001
};//С‰
byte rus_tverd_mal[8] = {
  0b00000,
  0b00000,
  0b11000,
  0b01000,
  0b01110,
  0b01001,
  0b01110,
  0b00000
};//СЉ
byte rus_y[8] = {
  0b00000,
  0b00000,
  0b10001,
  0b10001,
  0b11101,
  0b10011,
  0b11101,
  0b00000
};//С‹
byte rus_myagk_mal[8] = {
  0b00000,
  0b00000,
  0b10000,
  0b10000,
  0b11110,
  0b10001,
  0b11110,
  0b00000
};//СЊ
byte rus_ee[8] = {
  0b00000,
  0b00000,
  0b01110,
  0b10001,
  0b00111,
  0b10001,
  0b01110,
  0b00000
};//СЌ
byte rus_yu[8] = {
  0b00000,
  0b00000,
  0b10010,
  0b10101,
  0b11101,
  0b10101,
  0b10010,
  0b00000
};//СЋ
byte rus_ya[8] = {
  0b00000,
  0b00000,
  0b01111,
  0b10001,
  0b01111,
  0b00101,
  0b01001,
  0b00000
};//СЏ
