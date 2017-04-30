#include <iostream>
#include "ccolor.h"

using namespace std;

int main()
{
	cout << zkr::cc::fore::black        << "This is black text. "           << endl;
    cout << zkr::cc::fore::blue         << "This is blue text. "            << endl;
    cout << zkr::cc::fore::red          << "This is red text. "             << endl;
    cout << zkr::cc::fore::magenta      << "This is magenta text. "         << endl;
    cout << zkr::cc::fore::green        << "This is green text. "           << endl;
    cout << zkr::cc::fore::cyan         << "This is cyan text. "            << endl;
    cout << zkr::cc::fore::yellow       << "This is yellow text. "          << endl;
    cout << zkr::cc::fore::white        << "This is white text. "           << endl;

    cout << zkr::cc::fore::lightblack   << "This is lightblack text. "      << endl;
    cout << zkr::cc::fore::lightblue    << "This is lightblue text. "       << endl;
    cout << zkr::cc::fore::lightred     << "This is lightred text. "        << endl;
    cout << zkr::cc::fore::lightmagenta << "This is lightmagenta text. "    << endl;
    cout << zkr::cc::fore::lightgreen   << "This is lightgreen text. "      << endl;
    cout << zkr::cc::fore::lightcyan    << "This is lightcyan text. "       << endl;
    cout << zkr::cc::fore::lightyellow  << "This is lightyellow text. "     << endl;
    cout << zkr::cc::fore::lightwhite   << "This is lightwhite text. "      << endl;

	cout << zkr::cc::console << "And changing to console default color." << endl;

	return 0;
}
