#include "kalkulâtors.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);


    kalkulâtors::MyForm form;
    Application::Run(% form);
}