#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <string>

enum class CPUStates {
  kUser,
  kNice,
  kSystem,
  kIdle,
  kIOwait,
  kIRQ,
  kSoftIRQ,
  kSteal,
  kGuest,
  kGuestNice
};

class Path {
 public:
  inline static std::string base_path{"/proc/"};
  inline static const std::string cmdline{"cmdline"};
  // static std::string StatusPath() { return "/status"; }
  inline static const std::string stat{"stat"};
  inline static const std::string uptime{"uptime"};
  inline static const std::string meminfo{"meminfo"};
  inline static const std::string version{"version"};
};

#endif