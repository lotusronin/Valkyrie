#ifndef ICONVIEW_H
#define ICONVIEW_H

#include <gtkmm.h>
//#include "modelcolumn.h"

class m_Col : public Gtk::TreeModelColumnRecord
{
	public:
	m_Col();
	Gtk::TreeModelColumn<Glib::ustring> m_col_text;
};
	
class FileIcons : public Gtk::ScrolledWindow
{
	public:
	Gtk::ScrolledWindow scrolled;
	Gtk::IconView grid;
	Glib::RefPtr<Gtk::ListStore> m_grid;
	m_Col columns;
	FileIcons();
	virtual ~FileIcons();
	

};

#endif
