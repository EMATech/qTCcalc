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

#include "qtccalc.h"

Qtccalc::Qtccalc( QWidget *parent, Qt::WFlags flags ) :
		QMainWindow( parent, flags )
{
	ui.setupUi( this );

	aboutDialog = new About( this );

	connect( ui.actionQuit, SIGNAL( activated() ), this, SLOT( close() ) );
	connect( ui.actionAbout, SIGNAL( activated() ),	this, SLOT( about() ) );
}


void Qtccalc::about()
{
  aboutDialog->show();
}
