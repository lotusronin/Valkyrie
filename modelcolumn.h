#ifndef MODELCOLUMN_H
#define MODELCOLUMN_H
#include <gtkmm.h>

class ModelColumns : public Gtk::TreeModel::ColumnRecord
{

	public:
	ModelColumns();
	
	Gtk::TreeModelColumn<Glib::ustring> col_text;
	Gtk::TreeModelColumn<int> col_number;
};




#endif
