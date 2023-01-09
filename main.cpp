#include "Form1.h";

using namespace IPSlicer;

[STAThread]
int main(array<System::String^>^ args)
{
    srand(time(NULL)); //Random seed
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Form1());

    return 0;
}
