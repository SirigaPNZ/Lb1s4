#include "MyForm.h"
#include <string>
#include <cstdlib>
#include <Windows.h>
using namespace Lb1s4; // Название проекта
using namespace std;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}

System::Void Lb1s4::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e){
	double x, y;
	double pi = 3.141592653589793;
	boolean key = true;

	String^ t = textBox1->Text;

	for (int i = 0; i < (t->Length); i++) {
		if (t[i] == '0' || t[i] == '1' || t[i] == '2' \
			|| t[i] == '3' || t[i] == '4' || t[i] == '5' \
			|| t[i] == '6' || t[i] == '7' || t[i] == '8' \
			|| t[i] == '9' || t[i] == '-' || t[i] == ',');
		else {
			key = false;
		}
	}

	if (key == false) {
		textBox2->Text = System::Convert::ToString("Ошибка ввода! Повторите!");
	}
	else {
		x = System::Convert::ToDouble(textBox1->Text);
		y = (sin(sin(x) + exp(cos(x)) + pow(x, 2))) * (pow((sin(pi * pow(x, 2))) + log(pow(x, 2)), 0.25));
		textBox2->Text = System::Convert::ToString(y);

		if ((x < 1) && (x != 0)) {
			textBox2->Text = System::Convert::ToString("Ошибка ввода! Повторите!(x>1)");
		}
		else if (x == 0)
		{
			textBox2->Text = System::Convert::ToString("Функция не пределена");
		}
	}
}

System::Void Lb1s4::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e){
	textBox1->Text = L"";
	textBox2->Text = L"";
}

System::Void Lb1s4::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e){
	this->Close();
}
