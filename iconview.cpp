#include <gtkmm.h>
#include "iconview.h"
//#include "modelcolumn.h"

m_Col::m_Col()
{
	add(m_col_text);
}

FileIcons::FileIcons()
{
	columns = new m_Col();
	scrolled.set_policy(Gtk::POLICY_AUTOMATIC, Gtk::POLICY_AUTOMATIC);
	m_grid = Gtk::ListStore::create(columns);
	grid = Gtk::IconView(*(m_grid->columns).m_col_text);
}

FileIcons::~FileIcons()
{
}
