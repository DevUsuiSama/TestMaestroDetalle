/*
 * Created on Mon Oct 25 2021 07:51:40
 *
 * Copyright (c) 2021 UsuiSama
 */
#include "EvenWin.hpp"

EvenWin::EvenWin(Gtk::Window *win, Glib::RefPtr<Gtk::Builder> build)
{
    this->win = win;
    this->build = build;
}

void EvenWin::on_create()
{
    build->get_widget<Gtk::Button>("btnAgregar", btnAgregar);
    if (btnAgregar)
        btnAgregar->signal_clicked().connect([this]()
                                             { on_btnAgregar(); });
    win->add(*btnAgregar);
}

void EvenWin::on_btnAgregar()
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

Gtk::Window *EvenWin::get_window()
{
    return this->win;
}
