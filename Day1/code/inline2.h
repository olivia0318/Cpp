 ///
 /// @file    inline2.h
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2019-04-09 16:21:52
 ///
 
//#pragma once
#ifndef __WD_INLINE2_H__
#define __WD_INLINE2_H__

//inline函数不能分成头文件和实现文件
inline
int max(int x, int y);


inline
int max(int x, int y)
{
	return x > y ? x : y;
}
#endif
