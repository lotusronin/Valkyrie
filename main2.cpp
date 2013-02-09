#include <gtkmm.h>
#include <iostream>
#include "win.h"



int main(int argc, char *argv[])
{
	Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "org.gtkmm.examples");
    
    Win valkyrur;
      
    return app->run(valkyrur);	
}

