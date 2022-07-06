#include "Man.h"
#include "More.h"


Man::Man()
{
}

bool Man::OnInit()
{
	window = new More();
	window->Show();
	return true;
}
