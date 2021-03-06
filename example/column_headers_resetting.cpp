//          Copyright(C) Rishabh Arora 2017.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#include "../include/boost/numeric/ublas/FINAL_VERSIONS/df.hpp"

int main() {
	using namespace boost::numeric::ublas;

	vector < int > u(3);
	vector < std::string > x(3);
	u(0) = 0, u(1) = 1, u(2) = 2;
	x(0) = "test1", x(1) = "test2", x(2) = "test3";
	vector < df_column > col(2);
	col(0) = u, col(1) = x;
	vector < std::string > h(2);
	h(0) = "hello", h(1) = "world!";
	data_frame df(h, col);

	// "hi"(0) -> "hii"
	df.print();
	df.set_col_header(0, "hii");
	df.print();

	df.set_col_header("hii", "ohyes");
	df.print();
	return 0;
}