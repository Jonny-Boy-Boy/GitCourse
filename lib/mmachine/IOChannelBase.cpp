//
// Created by jochanan.van.der.wel on 29-5-2025.
//

#include "IOChannelBase.h"

namespace mmachine
{
  template<>
  const char* IOChannelBase<bool>::TypeToString() const
  {
    return "Boolean";
  }

  template<>
  const char* IOChannelBase<uint8_t>::TypeToString() const
  {
    return "UInt8";
  }

  template<>
  const char* IOChannelBase<uint16_t>::TypeToString() const
  {
    return "UInt16";
  }

  template<>
  const char* IOChannelBase<uint32_t>::TypeToString() const
  {
    return "UInt32";
  }

  template<>
  const char* IOChannelBase<uint64_t>::TypeToString() const
  {
    return "UInt64";
  }

  template<>
  const char* IOChannelBase<int8_t>::TypeToString() const
  {
    return "Int8";
  }

  template<>
  const char* IOChannelBase<int16_t>::TypeToString() const
  {
    return "Int16";
  }

  template<>
  const char* IOChannelBase<int32_t>::TypeToString() const
  {
    return "Int32";
  }

  template<>
  const char* IOChannelBase<int64_t>::TypeToString() const
  {
    return "Int64";
  }

  template<>
  const char* IOChannelBase<float>::TypeToString() const
  {
    return "Float";
  }

  template<>
  const char* IOChannelBase<double>::TypeToString() const
  {
    return "Double";
  }

  template<>
  const char* IOChannelBase<std::string>::TypeToString() const
  {
    return "String";
  }

  template<>
  const char* IOChannelBase<OctetString>::TypeToString() const
  {
    return "OctetString";
  }
}
