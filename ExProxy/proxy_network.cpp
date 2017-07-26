#include "proxy_network.h"
#include "other_network.h"

namespace hukusuke {
	/*--------------------------------*/
	/* proxy_network_get_token.       */
	/*--------------------------------*/
	void proxy_network_get_token::act_request() {
		string str = "";
		other_network other;
		other.get_token(str);
		str_ = str;
	}

	/*--------------------------------*/
	/* proxy_network_send_data.       */
	/*--------------------------------*/
	void proxy_network_send_data::act_request() {
		other_network other;
		other.send_data(str_);
	}
}