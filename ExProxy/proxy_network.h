#pragma once
#include "logout.h"
#include "proxy_request.h"
#include <string>

using namespace std;
namespace hukusuke {
	/*--------------------------------*/
	/* proxy_network.                 */
	/*--------------------------------*/
	class proxy_network : public proxy_request
	{
	public:
		proxy_network()  {};
		~proxy_network() {};
	protected:
		void act_request() {};
	};

	/*--------------------------------*/
	/* proxy_network_get_token.       */
	/*--------------------------------*/
	class proxy_network_get_token : public proxy_network 
	{
	public:
		proxy_network_get_token()  {};
		~proxy_network_get_token() {};

		string get() { return str_; };
	private:
		void act_request();
		string str_;
	};

	/*--------------------------------*/
	/* proxy_network_send_data.       */
	/*--------------------------------*/
	class proxy_network_send_data : public proxy_network
	{
	public:
		proxy_network_send_data()  {};
		~proxy_network_send_data() {};

		void set(const string str) { str_ = str; };
	private:
		void act_request();
		string str_;
	};
}

