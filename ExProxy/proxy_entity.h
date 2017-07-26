#pragma once
#include "logout.h"
#include "proxy_request.h"
#include <string>

using namespace std;
namespace hukusuke {
	/*--------------------------------*/
	/* proxy_entity.                  */
	/*--------------------------------*/
	class proxy_entity : public proxy_request
	{
	public:
		proxy_entity()  {};
		~proxy_entity() {};
	};
	/*--------------------------------*/
	/* proxy_entity_write_data.       */
	/*--------------------------------*/
	class proxy_entity_write_data : public proxy_entity
	{
	public:
		proxy_entity_write_data() {};
		~proxy_entity_write_data() {};

		void set(const string str) { str_ = str; };
	private:
		void act_request();
		string str_;
	};

	/*--------------------------------*/
	/* proxy_entity_read_data.        */
	/*--------------------------------*/
	class proxy_entity_read_data : public proxy_entity
	{
	public:
		proxy_entity_read_data() {};
		~proxy_entity_read_data() {};

		string get() { return str_; };
	private:
		void act_request();
		string str_;
	};
}

