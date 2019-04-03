#pragma once
class PUDialog
{
public:
	PUDialog();
	
	~PUDialog();
	
	int chooser;

	void showMenu();

private:
	void clearConsole();

};

