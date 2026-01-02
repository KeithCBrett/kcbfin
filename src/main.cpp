#include "action.h"
#include <cstdint>


int
main ()
{
	// Print to stdout name of project, version number, etc
	int err_synopsis = action::DisplaySynopsis ();
	if (err_synopsis == -1)
	{
		std::cout << "Error in function DisplaySynopsis (returned -1)\n";
	}


	// Get net income
	uint64_t net_income = action::GetNumberStdin ("Enter net income/earnings below:\n");
	if (net_income == -1)
	{
		std::cout << "Error in function GetNumberStdin (net_income)\n";
	}


	return 0;
}
