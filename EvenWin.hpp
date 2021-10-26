/*
 * Created on Mon Oct 25 2021 07:51:40
 *
 * Copyright (c) 2021 UsuiSama
 */

#ifndef _GTKMM_H
#include <gtkmm-3.0/gtkmm.h>
#endif // !_GTKMM_H

#include <iostream>

#ifndef __EVENWIN_HPP__
#define __EVENWIN_HPP__

class EvenWin : public Gtk::ApplicationWindow
{
private:
    Gtk::Window *win;
    Gtk::Button *btnAgregar;
    Glib::RefPtr<Gtk::Builder> build;

public:
    EvenWin(Gtk::Window *win, Glib::RefPtr<Gtk::Builder> build);
    void on_create();
    void on_btnAgregar();
    Gtk::Window *get_window();
};

#endif // !__EVENWIN_HPP__