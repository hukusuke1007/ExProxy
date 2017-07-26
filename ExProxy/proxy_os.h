#pragma once
#include "logout.h"
#include "proxy_request.h"
#include <string>

using namespace std;
namespace hukusuke {
	/*--------------------------------*/
	/* proxy_os.                      */
	/*--------------------------------*/
	class proxy_os : public proxy_request
	{
	public:
		proxy_os() {};
		~proxy_os(){};
	};

	/*--------------------------------*/
	/* proxy_os_get_rtc.              */
	/*--------------------------------*/
	class proxy_os_get_rtc : public proxy_os
	{
	public:
		proxy_os_get_rtc() {};
		~proxy_os_get_rtc() {};

		string get() { return str_; };
	private:
		void act_request();
		string str_;
	};
}

