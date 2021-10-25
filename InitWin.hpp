/*
 * Created on Sun Oct 24 2021 22:50:06
 *
 * Copyright (c) 2021 UsuiSama
 */
#include <gtkmm-3.0/gtkmm.h>

#ifndef __INITWIN_HPP__
#define __INITWIN_HPP__ 1

class MaestroDetalle : public Gtk::Application
{
private:
    Gtk::Window *win;

public:
    MaestroDetalle();
    void init();
    Gtk::Window* get_window();
};

#endif // !__INITWIN_HPP__