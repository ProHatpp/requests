#ifndef UTILS_H
#define UTILS_H


#include <string>
#include <vector>
#include "http.h"

namespace ReqUtils
{


	//generators
	std::string populate_uri(const std::string& content);
	std::string generate_post(Requests::post_data pdata_map);
	std::string parse_headers(std::map<std::string, std::string> h_map);


	//text parsing-related
	std::vector<std::string> split(const std::string& str, char seperator);
	std::string return_between(const std::string& s, const std::string& start_delim, const std::string& stop_delim);
	bool starts_with(const std::string& str, const std::string& who);
}
#endif