#pragma once
#include "logout.h"
#include <string>

using namespace std;
namespace hukusuke {
	class other_network
	{
	public:
		other_network();
		~other_network();

		/* Public method.*/
		void get_token(      string& str );
		void send_data(const string  str );

	};
}

