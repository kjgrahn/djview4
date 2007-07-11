//C-  -*- C++ -*-
//C- -------------------------------------------------------------------
//C- DjView4
//C- Copyright (c) 2006  Leon Bottou
//C-
//C- This software is subject to, and may be distributed under, the
//C- GNU General Public License, either version 2 of the license,
//C- or (at your option) any later version. The license should have
//C- accompanied the software or you may obtain a copy of the license
//C- from the Free Software Foundation at http://www.fsf.org .
//C-
//C- This program is distributed in the hope that it will be useful,
//C- but WITHOUT ANY WARRANTY; without even the implied warranty of
//C- MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//C- GNU General Public License for more details.
//C-  ------------------------------------------------------------------

// $Id$

#ifndef DJVIEW_H
#define DJVIEW_H

#if AUTOCONF
# include "config.h"
#endif

#include <Qt>
#include <QObject>
#include <QApplication>
#include <QEvent>

#include "qdjvu.h"


class QDjViewApplication : public QApplication
{
  Q_OBJECT
  QDjVuContext context;
 public:
  QDjViewApplication(int &argc, char **argv);
  QDjVuContext *djvuContext() { return &context; }
 protected:
  bool event(QEvent *ev);
};


#endif
