#ifndef __STRINGMAKER_H__
#define __STRINGMAKER_H__

// aaa_bbCcc    匈牙利型  Hungary
// aaa_bb_ccc   下划线型  DownLine
// aaaBbCcc     驼峰型	 Camelback
// AaaBbCcc     帕斯卡型  Pascal

//匈牙利型转下划线型
char *Hungary2DownLine(const char *src);

//匈牙利型转下划线增强型
int Hungary2DownLineX(const char *src, char **dst);

//匈牙利型转驼峰型
char *Hungary2Camelback(const char *src);

//匈牙利型转驼峰增强型
int Hungary2CamelbackX(const char *src, char **dst);

//匈牙利型转帕斯卡型
char *Hungary2Pascal(const char *str);

//匈牙利型转帕斯卡增强型
int Hungary2PascalX(const char *src, char **dst);

//下划线型转匈牙利型
char *DownLine2Hungary(const char *str);

//下划线型转匈牙利增强型
int DownLine2HungaryX(const char *src, char **dst);

//下划线型转驼峰型
char *DownLine2Camelback(const char *str);

//下划线型转驼峰增强型
int DownLine2CamelbackX(const char *src, char **dst);

//下划线型转帕斯卡型
char *DownLine2Pascal(const char *str);

//下划线型转帕斯卡增强型
int DownLine2PascalX(const char *src, char **dst);

//驼峰型转匈牙利型
char *Camelback2Hungary(const char *str);

//驼峰型转匈牙利增强型
int Camelback2HungaryX(const char *src, char **dst);

//驼峰型转下划线型
char *Camelback2DownLine(const char *str);

//驼峰型转下划线增强型
int Camelback2DownLineX(const char *src, char **dst);

//驼峰型转帕斯卡型
char *Camelback2Pascal(const char *str);

//驼峰型转帕斯卡增强型
int Camelback2PascalX(const char *src, char **dst);

//帕斯卡型转匈牙利型
char *Pascal2Hungary(const char *str);

//帕斯卡型转匈牙利增强型
int Pascal2HungaryX(const char *src, char **dst);

//帕斯卡型转下划线型
char *Pascal2DownLine(const char *str);

//帕斯卡型转下划线增强型
int Pascal2DownLineX(const char *src, char **dst);

//帕斯卡型转驼峰型
char *Pascal2Camelback(const char *str);

//帕斯卡型转驼峰增强型
int Pascal2CamelbackX(const char *src, char **dst);

#endif