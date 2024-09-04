#pragma once
#include <string>

enum class TreeType
{
	Unknown=-1,
	Elka,
	Bereza,
	Osina,
	Klen
};

inline std::string TreeTypeToString(TreeType t_type) {
	switch (t_type) {
	case TreeType::Unknown: return "Unknown";
	case TreeType::Elka: return "Elka";
	case TreeType::Bereza: return "Bereza";
	case TreeType::Osina: return "Osina";
	case TreeType::Klen: return "Klen";
	}
	return "Undefined";
}