/*
 * SPDX-License-Identifier: GPL-2.0-or-later
 */
#include <iostream>
#include <fstream>
#include <connotes/version.hpp>


int main ()
{
	std::cout << "Console notes v" << connotes::version::string() << std::endl;
	std::cout << "(c) 2021 leha-bot, available by GNU (L)GPL v2+ license specially"
		" for the MorningStar project (https://github.com/Eixini/MarningStar)" << std::endl;
}
