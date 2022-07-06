#pragma once

#include "wx/wx.h"
class More;

class Man:public wxApp
{
public:
	Man();


	More* window = nullptr;

public:

	virtual bool OnInit();
};

