/*
 * Created on Sun Oct 24 2021 12:46:53
 *
 * Copyright (c) 2021 UsuiSama
 */

#include "InitWin.hpp"

int main(int argc, char *argv[])
{
    auto app = Gtk::Application::create(argc, argv, "org.gtkmm.suijog.MaestroDetalle");
    MaestroDetalle md;
    md.init();
    return app->run(*md.get_window());
}
