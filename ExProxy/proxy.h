#pragma once
#include "logout.h"
#include "proxy_request.h"
#include <mutex>

using namespace std;
namespace hukusuke {
	class proxy : public proxy_request
	{
	public:
		// Get singleton instance.
		// @return not NULL on instance, NULL on error.
		static proxy&	get_instance();
		void   			request(proxy_request& request);

	private:
		//  Constructor.
		proxy()	{};
		proxy(const proxy&) {};			// default.
		proxy& operator=(const proxy&) {};	// default.

		// Destructor.
		~proxy() {};

	private:
		static	proxy*		instance_;
		static  mutex		mtx_;
	};
}

