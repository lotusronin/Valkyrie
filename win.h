#ifndef WIN_H
#define WIN_H

#include <gtkmm.h>
#include "iconview.h"
#include <vector>
#include "pane.h"


class Win : public Gtk::Window
{
	protected:
	
	void on_button_clicked();
	
	Gtk::Box vbox;
	Pane m_HPaned;
	Gtk::Button Button1;
	Gtk::Button Button2;
	Gtk::Button Button3;
	Gtk::Notebook Tabs;
	//FileIcons icons;
	std::vector<Gtk::Button*> buttons;
	std::vector<FileIcons*> icons;
	
	
	public:
	
	Win();
	virtual ~Win();		
};



#endif
