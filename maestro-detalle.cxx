/*
 * Created on Sun Oct 24 2021 12:46:53
 *
 * Copyright (c) 2021 UsuiSama
 */

#include <gtkmm-3.0/gtkmm.h>

class MaestroDetalle : public Gtk::Application
{
private:
    Gtk::Window *win;

public:
    MaestroDetalle(int argc, char *argv[])
    {
        create(argc, argv, "org.gtkmm.suijog.MaestroDetalle");
        auto build = Gtk::Builder::create_from_file("Maestro-Detalle.glade");
        build->get_widget<Gtk::Window>("wMaestroDetalle", win);
        add_window(*win);
    }

    int md_run()
    {
        return run(*win);
    }
};

int main(int argc, char *argv[])
{
    MaestroDetalle md(argc, argv);
    return md.md_run();
}
