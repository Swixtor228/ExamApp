#include <iostream>
#include <Windows.h>
using namespace std;

#include "Application.hpp"

void Application::StartScreen()
{
	system("cls");

	int choice = 0;

	cout << "1. Massive Editor\n"
		<< "2. Library App\n\n"
		
		<< "0. Exit\n";
	cout << "Enter your choice: ";
	cin >> choice;

	switch (choice)
	{
	case 0:
		return;
		break;
	case 1:
		MassiveEditor::MassiveEditorStartScreen();
		break;
	case 2:
		LibraryApp::LibraryAppStartScreen();
		break;
	default:
		cout << endl;
		cout << "Not Found\n";
		system("pause");
		Application::StartScreen();
		break;
	}
}