#pragma once
#include "logout.h"
#include <string>

using namespace std;
namespace hukusuke {
	class other_os
	{
	public:
		other_os();
		~other_os();

		/* Public method.*/
		void get_rtc( string& str );
	};
}

