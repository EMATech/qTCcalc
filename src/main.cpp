/*
    Copyright (C) 2008-2009 Raphaël Doursenaud <rdoursenaud@free.fr>

    This file is part of qTCcalc.

    qTCcalc is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    qTCcalc is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with qTCcalc.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <QApplication>
#include <QLibraryInfo>
#include <QTranslator>
#include <QLocale>
#include "qtccalc.h"

int main( int argc, char ** argv ) {
    QApplication a( argc, argv );

    QString locale = QLocale::system().name();

    QTranslator qtTranslator;
    QTranslator qtccalcTranslator;

    qtTranslator.load( QString( "qt_" ) + locale, QLibraryInfo::location( QLibraryInfo::TranslationsPath ) );
    a.installTranslator( &qtTranslator );

    qtccalcTranslator.load( QString( "qtccalc_" ) + locale, QLibraryInfo::location( QLibraryInfo::TranslationsPath ) );
    a.installTranslator( &qtccalcTranslator );

    Qtccalc * mw = new Qtccalc();
    mw->show();
    a.connect( &a, SIGNAL( lastWindowClosed() ), &a, SLOT( quit() ) );
    return a.exec();
}
