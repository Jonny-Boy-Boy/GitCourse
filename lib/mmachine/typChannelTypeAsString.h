
#pragma once

#include <cstdint>
#include <string>

namespace mmachine
{
  template<typename IoType>
  struct typChannelTypeAsString;

  template<>
  struct typChannelTypeAsString<bool>
  {
    static constexpr const char* cValue = "bool";
  };

  template<>
  struct typChannelTypeAsString<int8_t>
  {
    static constexpr const char* cValue = "Int8";
  };

  template<>
  struct typChannelTypeAsString<int16_t>
  {
    static constexpr const char* cValue = "Int16";
  };

  template<>
  struct typChannelTypeAsString<int32_t>
  {
    static constexpr const char* cValue = "Int32";
  };

  template<>
  struct typChannelTypeAsString<int64_t>
  {
    static constexpr const char* cValue = "Int64";
  };

  template<>
  struct typChannelTypeAsString<uint8_t>
  {
    static constexpr const char* cValue = "UInt8";
  };

  template<>
  struct typChannelTypeAsString<uint16_t>
  {
    static constexpr const char* cValue = "UInt16";
  };

  template<>
  struct typChannelTypeAsString<uint32_t>
  {
    static constexpr const char* cValue = "UInt32";
  };

  template<>
  struct typChannelTypeAsString<uint64_t>
  {
    static constexpr const char* cValue = "UInt64";
  };

  template<>
  struct typChannelTypeAsString<float>
  {
    static constexpr const char* cValue = "Float";
  };

  template<>
  struct typChannelTypeAsString<double>
  {
    static constexpr const char* cValue = "Double";
  };

  template<>
  struct typChannelTypeAsString<std::string>
  {
    static constexpr const char* cValue = "String";
  };

  template<>
  struct typChannelTypeAsString<OctetString>
  {
    static constexpr const char* cValue = "OctetString";
  };
}
