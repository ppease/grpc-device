//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Mock of LibraryInterface for NI-SYNC
//---------------------------------------------------------------------
#ifndef NISYNC_GRPC_MOCK_LIBRARY_H
#define NISYNC_GRPC_MOCK_LIBRARY_H

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "nisync_library_interface.h"

namespace ni {
namespace tests {
namespace unit {

class NiSyncMockLibrary : public nisync_grpc::NiSyncLibraryInterface {
 public:
  MOCK_METHOD(ViStatus, init, (ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViSession* vi), (override));
  MOCK_METHOD(ViStatus, close, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, RevisionQuery, (ViSession vi, ViChar driverRevision[256], ViChar firmwareRevision[256]), (override));
  MOCK_METHOD(ViStatus, SendSoftwareTrigger, (ViSession vi, ViConstString srcTerminal), (override));
  MOCK_METHOD(ViStatus, ConnectClkTerminals, (ViSession vi, ViConstString srcTerminal, ViConstString destTerminal), (override));
  MOCK_METHOD(ViStatus, DisconnectClkTerminals, (ViSession vi, ViConstString srcTerminal, ViConstString destTerminal), (override));
  MOCK_METHOD(ViStatus, ConnectSWTrigToTerminal, (ViSession vi, ViConstString srcTerminal, ViConstString destTerminal, ViConstString syncClock, ViInt32 invert, ViInt32 updateEdge, ViReal64 delay), (override));
  MOCK_METHOD(ViStatus, DisconnectSWTrigFromTerminal, (ViSession vi, ViConstString srcTerminal, ViConstString destTerminal), (override));
  MOCK_METHOD(ViStatus, ConnectTrigTerminals, (ViSession vi, ViConstString srcTerminal, ViConstString destTerminal, ViConstString syncClock, ViInt32 invert, ViInt32 updateEdge), (override));
  MOCK_METHOD(ViStatus, DisconnectTrigTerminals, (ViSession vi, ViConstString srcTerminal, ViConstString destTerminal), (override));
  MOCK_METHOD(ViStatus, MeasureFrequencyEx, (ViSession vi, ViConstString srcTerminal, ViReal64 duration, ViUInt32 decimationCount, ViReal64* actualDuration, ViReal64* frequency, ViReal64* frequencyError), (override));
  MOCK_METHOD(ViStatus, GetTimeEx, (ViSession vi, NICviTime_struct* timeOut), (override));
  MOCK_METHOD(ViStatus, GetAttributeViInt32, (ViSession vi, ViConstString activeItem, ViAttr attribute, ViInt32* value), (override));
  MOCK_METHOD(ViStatus, SetAttributeViInt32, (ViSession vi, ViConstString activeItem, ViAttr attribute, ViInt32 value), (override));
  MOCK_METHOD(ViStatus, GetAttributeViString, (ViSession vi, ViConstString activeItem, ViAttr attribute, ViInt32 bufferSize, ViChar value[]), (override));
  MOCK_METHOD(ViStatus, SetAttributeViString, (ViSession vi, ViConstString activeItem, ViAttr attribute, ViConstString value), (override));
  MOCK_METHOD(ViStatus, GetAttributeViBoolean, (ViSession vi, ViConstString activeItem, ViAttr attribute, ViBoolean* value), (override));
  MOCK_METHOD(ViStatus, SetAttributeViBoolean, (ViSession vi, ViConstString activeItem, ViAttr attribute, ViBoolean value), (override));
  MOCK_METHOD(ViStatus, GetAttributeViReal64, (ViSession vi, ViConstString activeItem, ViAttr attribute, ViReal64* value), (override));
  MOCK_METHOD(ViStatus, SetAttributeViReal64, (ViSession vi, ViConstString activeItem, ViAttr attribute, ViReal64 value), (override));
};

}  // namespace unit
}  // namespace tests
}  // namespace ni
#endif  // NISYNC_GRPC_MOCK_LIBRARY_H
