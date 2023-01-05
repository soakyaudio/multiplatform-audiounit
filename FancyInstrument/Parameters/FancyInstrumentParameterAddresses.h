#pragma once

#include <AudioToolbox/AUParameters.h>

#ifdef __cplusplus
namespace FancyInstrumentParameterAddress {
#endif

typedef NS_ENUM(AUParameterAddress, FancyInstrumentParameterAddress) {
    gain = 0
};

#ifdef __cplusplus
}
#endif
