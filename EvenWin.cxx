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
    if (btnAgregar) btnAgregar->signal_clicked().connect([this](){ on_btnAgregar(); });
    win->add(*btnAgregar);
    build->get_widget<Gtk::Button>("btnEditar", btnEditar);
    if (btnEditar) btnEditar->signal_clicked().connect([this](){ on_btnEditar(); });
    win->add(*btnEditar);
    build->get_widget<Gtk::Button>("btnEliminar", btnEliminar);
    if (btnEliminar) btnEliminar->signal_clicked().connect([this](){ on_btnEliminar(); });
    win->add(*btnEliminar);
    build->get_widget<Gtk::Button>("btnImprimir", btnImprimir);
    if (btnImprimir) btnImprimir->signal_clicked().connect([this](){ on_btnImprimir(); });
    win->add(*btnImprimir);
}

void EvenWin::on_btnAgregar()
{
    {
        Gtk::MessageDialog dialog(*win, "D1", true, Gtk::MESSAGE_INFO, Gtk::BUTTONS_OK);
        dialog.set_title("Maestro/Detalle");
        dialog.set_message("Datos Agregados");
        dialog.set_secondary_text("by UsuiSama 2021");
        dialog.run();
    }
}

void EvenWin::on_btnEditar()
{
    {
        Gtk::MessageDialog dialog(*win, "D2", true, Gtk::MESSAGE_INFO, Gtk::BUTTONS_OK);
        dialog.set_title("Maestro/Detalle");
        dialog.set_message("Datos Editado");
        dialog.set_secondary_text("by UsuiSama 2021");
        dialog.run();
    }
}

void EvenWin::on_btnEliminar()
{
    {
        Gtk::MessageDialog dialog(*win, "D3", true, Gtk::MESSAGE_INFO, Gtk::BUTTONS_OK);
        dialog.set_title("Maestro/Detalle");
        dialog.set_message("Datos Eliminado Permanentemente");
        dialog.set_secondary_text("by UsuiSama 2021");
        dialog.run();
    }
}

void EvenWin::on_btnImprimir()
{
    {
        Gtk::MessageDialog dialog(*win, "D4", true, Gtk::MESSAGE_INFO, Gtk::BUTTONS_OK);
        dialog.set_title("Maestro/Detalle");
        dialog.set_message("Imprimiendo...");
        dialog.set_secondary_text("by UsuiSama 2021");
        dialog.run();
    }
}

Gtk::Window *EvenWin::get_window()
{
    return this->win;
}
