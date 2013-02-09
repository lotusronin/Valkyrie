#include "win.h"
#include "pane.h"
#include <gtkmm.h>
#include <vector>

Win::Win() : vbox(Gtk::ORIENTATION_VERTICAL)
{
	
	 
	//Set Window Settings
	set_title("Valkyrie");
	set_default_size(1200, 800);
	
	icons.push_back(new FileIcons());
	
	Button1.set_label("New Tab");
	Button2.set_label("Button Test 2");
	Button3.set_label("Button Test 3");
	
	Tabs.set_show_tabs(true);
	Tabs.append_page(icons.back()->scrolled);
	
	Button1.signal_clicked().connect(sigc::mem_fun(*this, &Win::on_button_clicked));
	
	
	add(vbox);
	vbox.pack_start(m_HPaned);
	m_HPaned.add1(Button1);
	m_HPaned.add2(Tabs);
	show_all_children();
	
}

void Win::on_button_clicked()
{
	//buttons.push_back(new Gtk::Button());
	//buttons.back()->set_label("Button");
	icons.push_back(new FileIcons());
	Tabs.append_page(icons.back()->scrolled);
	show_all_children();
}

Win::~Win()
{
}



