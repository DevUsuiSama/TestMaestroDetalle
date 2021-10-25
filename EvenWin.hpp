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
    EvenWin(Gtk::Window *win, Glib::RefPtr<Gtk::Builder> build)
    {
        this->win = win;
        this->build = build;
    }

    void on_create()
    {
        build->get_widget<Gtk::Button>("btnAgregar", btnAgregar);
        if (btnAgregar)
            btnAgregar->signal_clicked().connect([this]()
                                                 { on_btnAgregar(); });
        win->add(*btnAgregar);
    }

    void on_btnAgregar()
    {
        //std::cout << "Buenos Dia!!" << std::endl;
        {
            Gtk::MessageDialog dialog(*win, "Buenos Dias!!", true, Gtk::MESSAGE_INFO, Gtk::BUTTONS_OK);
            dialog.set_title("Maestro/Detalle");
            dialog.set_message("Buenos Dias!!");
            dialog.set_secondary_text("by UsuiSama 2021");
            dialog.run();
        }
    }

    Gtk::Window *get_window()
    {
        return this->win;
    }
};

#endif // !__EVENWIN_HPP__