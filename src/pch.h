#ifndef PCH_H
#define PCH_H

#ifdef _MSC_VER
#pragma execution_character_set("utf-8")
#endif

//#define LOGNETWORK

#include <ft2build.h>

#ifdef __cplusplus

#include <QtCore>
#include <QtNetwork>
#include <QtGui>
#include <QtWidgets>

#ifndef Q_OS_WINRT
#if (QT_VERSION < QT_VERSION_CHECK(5, 0, 0))
#include <QtDeclarative>
#else
//TODO: Use QtQuick instead of QtDeclarative.
#endif
#endif

//#include <fmod.hpp>

#endif

#endif // PCH_H

