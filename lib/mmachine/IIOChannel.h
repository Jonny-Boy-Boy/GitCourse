//
// Created by jochanan.van.der.wel on 29-5-2025.
//

#pragma once

#include <vector>

#include "IChannel.h"

namespace mmachine
{
  static constexpr size_t cMaxOctetStringLength = 64;

  using OctetString = std::vector<unsigned char>;

  template<typename TIOType>
  class IIOChannel : public IChannel
  {
  public:
    virtual void Write(TIOType aValue) = 0;
    virtual TIOType Read() const       = 0;
    ~IIOChannel() override             = default;
  };
}
