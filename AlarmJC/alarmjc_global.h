#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(ALARMJC_LIB)
#  define ALARMJC_EXPORT Q_DECL_EXPORT
# else
#  define ALARMJC_EXPORT Q_DECL_IMPORT
# endif
#else
# define ALARMJC_EXPORT
#endif
