#pragma once

#include "Coordinate.h"

#include <string>

namespace fleet {
	class City {
	public:
		explicit City(const std::string& name, Coordinate coordinate);

		Coordinate location() const { return coordinate; }
		const std::string& cityName() const { return name; }
		bool isCapital() const { return capital; }

		void setAsCapital() { capital = true; }
	private:
		const std::string name;
		Coordinate coordinate;
		bool capital{ false };

		int oil;
		int cash;
		int research;
	};
}