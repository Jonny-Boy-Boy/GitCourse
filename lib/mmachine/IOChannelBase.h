//
// Created by jochanan.van.der.wel on 29-5-2025.
//

#pragma once

#include "IIOChannel.h"
#include "typChannelTypeAsString.h"

namespace mmachine
{
  template<typename TIOType>
  class IOChannelBase : public IIOChannel<TIOType>
  {
  public:
    static constexpr const char* cTypeString = typChannelTypeAsString<TIOType>::cValue;

    IOChannelBase(str::string aChannelId, eChannelDirection::eDirection aDirection) :
      mChannelId(std::move(aChannelId)),
      mDirection(aDirection)
    {
    }

    ~IOChannelBase() override = default;

    const std::string& GetChannelId() const override
    {
      return mChannelId;
    }

    void SetChannelId(std::string aChannelId) override
    {
      mChannelId = std::move(aChannelId);
    }

    std::type_index GetType() const override
    {
      return typeid(TIOType);
    }

    std::string GetTypeAsString() const override
    {
      return cTypeString;
    }

    const char* TypeToString() const;

    eChannelDirection::eDirection GetDirection() const override
    {
      return mDirection;
    }

    void SetDirection(eChannelDirection::eDirection aDirection) override
    {
      mDirection = aDirection;
    }

    static const std::string cName;
    static const std::string cType;
    static const std::string cDirection;

  private:
    std::string mChannelId;
    eChannelDirection::eDirection mDirection;
  };

} // mmachine
