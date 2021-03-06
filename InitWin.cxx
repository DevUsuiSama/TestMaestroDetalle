/*
 * Created on Sun Oct 24 2021 22:50:06
 *
 * Copyright (c) 2021 UsuiSama
 */
#include "InitWin.hpp"

MaestroDetalle::MaestroDetalle() {}

void MaestroDetalle::init()
{
    build = Gtk::Builder::create_from_file("MaestroDetalle.glade");
    build->get_widget<Gtk::Window>("wMaestroDetalle", win);
    add_window(*win);
}

Gtk::Window* MaestroDetalle::get_window()
{
    return this->win;
}

Glib::RefPtr<Gtk::Builder> MaestroDetalle::get_build()
{
    return this->build;
}