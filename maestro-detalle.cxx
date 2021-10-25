/*
 * Created on Sun Oct 24 2021 12:46:53
 *
 * Copyright (c) 2021 UsuiSama
 */

#include "InitWin.hpp"
#include "EvenWin.hpp"

int main(int argc, char *argv[])
{
    auto app = Gtk::Application::create(argc, argv, "org.gtkmm.suijof.MaestroDetalle");
    MaestroDetalle md;
    md.init();
    EvenWin ew(md.get_window(), md.get_build());
    ew.on_create();
    return app->run(*ew.get_window());
}
