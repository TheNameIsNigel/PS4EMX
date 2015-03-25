#include <cstdint>
#include <gtkmm.h>
typedef uint64_t uQUAD;
typedef uint32_t uDOUBLE;
typedef uint16_t uWORD;
typedef uint8_t uBYTE;
typedef int64_t sQUAD;
typedef int32_t sDOUBLE;
typedef int16_t sWORD;
typedef int8_t sBYTE;
int main(int args, char *argv[])
{
  Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(args, argv, "org.gtkmm.examples.base");
  Gtk::Window MAIN;
  MAIN.set_default_size(640, 480);

  return app->run(window);
}
