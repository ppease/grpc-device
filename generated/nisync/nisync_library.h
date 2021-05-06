//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Real implementation of LibraryInterface for NI-SYNC
//---------------------------------------------------------------------
#ifndef NISYNC_GRPC_LIBRARY_H
#define NISYNC_GRPC_LIBRARY_H

#include "nisync_library_interface.h"

#include <server/shared_library.h>

namespace nisync_grpc {

class NiSyncLibrary : public nisync_grpc::NiSyncLibraryInterface {
 public:
  NiSyncLibrary();
  virtual ~NiSyncLibrary();

  ::grpc::Status check_function_exists(std::string functionName);
  ViStatus init(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViSession* vi);
  ViStatus close(ViSession vi);
  ViStatus RevisionQuery(ViSession vi, ViChar driverRevision[256], ViChar firmwareRevision[256]);
  ViStatus SendSoftwareTrigger(ViSession vi, ViConstString srcTerminal);
  ViStatus ConnectClkTerminals(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal);
  ViStatus DisconnectClkTerminals(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal);
  ViStatus ConnectSWTrigToTerminal(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal, ViConstString syncClock, ViInt32 invert, ViInt32 updateEdge, ViReal64 delay);
  ViStatus DisconnectSWTrigFromTerminal(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal);
  ViStatus ConnectTrigTerminals(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal, ViConstString syncClock, ViInt32 invert, ViInt32 updateEdge);
  ViStatus DisconnectTrigTerminals(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal);
  ViStatus MeasureFrequencyEx(ViSession vi, ViConstString srcTerminal, ViReal64 duration, ViUInt32 decimationCount, ViReal64* actualDuration, ViReal64* frequency, ViReal64* frequencyError);
  ViStatus GetTimeEx(ViSession vi, NICviTime_struct* timeOut);
  ViStatus GetAttributeViInt32(ViSession vi, ViConstString activeItem, ViAttr attribute, ViInt32* value);
  ViStatus SetAttributeViInt32(ViSession vi, ViConstString activeItem, ViAttr attribute, ViInt32 value);
  ViStatus GetAttributeViString(ViSession vi, ViConstString activeItem, ViAttr attribute, ViInt32 bufferSize, ViChar value[]);
  ViStatus SetAttributeViString(ViSession vi, ViConstString activeItem, ViAttr attribute, ViConstString value);
  ViStatus GetAttributeViBoolean(ViSession vi, ViConstString activeItem, ViAttr attribute, ViBoolean* value);
  ViStatus SetAttributeViBoolean(ViSession vi, ViConstString activeItem, ViAttr attribute, ViBoolean value);
  ViStatus GetAttributeViReal64(ViSession vi, ViConstString activeItem, ViAttr attribute, ViReal64* value);
  ViStatus SetAttributeViReal64(ViSession vi, ViConstString activeItem, ViAttr attribute, ViReal64 value);

 private:
  using initPtr = ViStatus (*)(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViSession* vi);
  using closePtr = ViStatus (*)(ViSession vi);
  using RevisionQueryPtr = ViStatus (*)(ViSession vi, ViChar driverRevision[256], ViChar firmwareRevision[256]);
  using SendSoftwareTriggerPtr = ViStatus (*)(ViSession vi, ViConstString srcTerminal);
  using ConnectClkTerminalsPtr = ViStatus (*)(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal);
  using DisconnectClkTerminalsPtr = ViStatus (*)(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal);
  using ConnectSWTrigToTerminalPtr = ViStatus (*)(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal, ViConstString syncClock, ViInt32 invert, ViInt32 updateEdge, ViReal64 delay);
  using DisconnectSWTrigFromTerminalPtr = ViStatus (*)(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal);
  using ConnectTrigTerminalsPtr = ViStatus (*)(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal, ViConstString syncClock, ViInt32 invert, ViInt32 updateEdge);
  using DisconnectTrigTerminalsPtr = ViStatus (*)(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal);
  using MeasureFrequencyExPtr = ViStatus (*)(ViSession vi, ViConstString srcTerminal, ViReal64 duration, ViUInt32 decimationCount, ViReal64* actualDuration, ViReal64* frequency, ViReal64* frequencyError);
  using GetTimeExPtr = ViStatus (*)(ViSession vi, NICviTime_struct* timeOut);
  using GetAttributeViInt32Ptr = ViStatus (*)(ViSession vi, ViConstString activeItem, ViAttr attribute, ViInt32* value);
  using SetAttributeViInt32Ptr = ViStatus (*)(ViSession vi, ViConstString activeItem, ViAttr attribute, ViInt32 value);
  using GetAttributeViStringPtr = ViStatus (*)(ViSession vi, ViConstString activeItem, ViAttr attribute, ViInt32 bufferSize, ViChar value[]);
  using SetAttributeViStringPtr = ViStatus (*)(ViSession vi, ViConstString activeItem, ViAttr attribute, ViConstString value);
  using GetAttributeViBooleanPtr = ViStatus (*)(ViSession vi, ViConstString activeItem, ViAttr attribute, ViBoolean* value);
  using SetAttributeViBooleanPtr = ViStatus (*)(ViSession vi, ViConstString activeItem, ViAttr attribute, ViBoolean value);
  using GetAttributeViReal64Ptr = ViStatus (*)(ViSession vi, ViConstString activeItem, ViAttr attribute, ViReal64* value);
  using SetAttributeViReal64Ptr = ViStatus (*)(ViSession vi, ViConstString activeItem, ViAttr attribute, ViReal64 value);

  typedef struct FunctionPointers {
    initPtr init;
    closePtr close;
    RevisionQueryPtr RevisionQuery;
    SendSoftwareTriggerPtr SendSoftwareTrigger;
    ConnectClkTerminalsPtr ConnectClkTerminals;
    DisconnectClkTerminalsPtr DisconnectClkTerminals;
    ConnectSWTrigToTerminalPtr ConnectSWTrigToTerminal;
    DisconnectSWTrigFromTerminalPtr DisconnectSWTrigFromTerminal;
    ConnectTrigTerminalsPtr ConnectTrigTerminals;
    DisconnectTrigTerminalsPtr DisconnectTrigTerminals;
    MeasureFrequencyExPtr MeasureFrequencyEx;
    GetTimeExPtr GetTimeEx;
    GetAttributeViInt32Ptr GetAttributeViInt32;
    SetAttributeViInt32Ptr SetAttributeViInt32;
    GetAttributeViStringPtr GetAttributeViString;
    SetAttributeViStringPtr SetAttributeViString;
    GetAttributeViBooleanPtr GetAttributeViBoolean;
    SetAttributeViBooleanPtr SetAttributeViBoolean;
    GetAttributeViReal64Ptr GetAttributeViReal64;
    SetAttributeViReal64Ptr SetAttributeViReal64;
  } FunctionLoadStatus;

  nidevice_grpc::SharedLibrary shared_library_;
  FunctionPointers function_pointers_;
};

}  // namespace nisync_grpc

#endif  // NISYNC_GRPC_LIBRARY_H
