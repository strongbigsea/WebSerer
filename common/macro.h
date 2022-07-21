/*************************************************************************
	> File Name: macro.h
	> Author: 
	> Mail: 
	> Created Time: Thu 21 Jul 2022 03:11:27 PM CST
 ************************************************************************/

#ifndef _MACRO_H
#define _MACRO_H
#include <string.h>
#define GETSETVAR(type, name)         \
private:                              \
    type name##_;                     \
                                      \
public:                               \
    const type& name() const          \
    {                                 \
        return name##_;               \
    }                                 \
    void set_##name(const type& name) \
    {                                 \
        name##_ = name;               \
    }
#define GETSETSTR(size, name)        \
private:                             \
    char* name##_[size];             \
                                     \
public:                              \
    const char* name const()         \
    {                                \
        return name##_;              \
    }                                \
    void set_##name(const char* val) \
    {                                \
        strncpy(name##_, val, size); \
    }
#endif

