#include "other_network.h"

namespace hukusuke {
	other_network::other_network(){}
	other_network::~other_network(){}

	/* get_token class. */
	void other_network::get_token(string& str) {
		str = "other network get_token.";
	}
	/* send_data class. */
	void other_network::send_data( const string  str ) {
		LOG_OUTPUT("%s", str.c_str());
	}


}
