#include "kalkul�tors.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);


    kalkul�tors::MyForm form;
    Application::Run(% form);
}