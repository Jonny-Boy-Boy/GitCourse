//
// Created by jochanan.van.der.wel on 29-5-2025.
//

#pragma once

#include <string>
#include <typeindex>

namespace mmachine
{
  namespace eChannelDirection
  {
    const std::string cUnknown = "Unknown";

    enum eDirection
    {
      Left,
      Right,
      LeftRight,
      Max
    };

    static const std::string cEnumText[Max] =
      {
        "Left",
        "Right",
        "LeftRight"};

    inline const std::string& ToString(eDirection aEnumValue)
    {
      const std::string* lStateText = &cUnknown;
      if ((aEnumValue >= 0) && (aEnumValue < Max))
      {
        lStateText = &cEnumText[aEnumValue];
      }
      return *lStateText;
    }
  }

  class IChannel
  {
    virtual const std::string& GetChannelId() const = 0;

    virtual void SetChannelId(std::string aChannelId) = 0;

    virtual std::type_index GetType() const = 0;

    virtual std::string GetTypeAsString() const = 0;

    virtual eChannelDirection::eDirection GetDirection() const = 0;

    virtual void SetDirection(eChannelDirection::eDirection aDirection) = 0;

    virtual ~IChannel() = default;
  };
} // namespace mmachine
