
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service header for the NI-FAKE Metadata
//---------------------------------------------------------------------
#ifndef NIFAKE_GRPC_SERVICE_H
#define NIFAKE_GRPC_SERVICE_H

#include <nifake.grpc.pb.h>
#include <condition_variable>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <map>
#include <server/session_repository.h>
#include <server/shared_library.h>

#include "nifake_library_interface.h"

namespace nifake_grpc {

class NiFakeService final : public NiFake::Service {
public:
  NiFakeService(NiFakeLibraryInterface* library, nidevice_grpc::SessionRepository* session_repository);
  virtual ~NiFakeService();
  ::grpc::Status Abort(::grpc::ServerContext* context, const AbortRequest* request, AbortResponse* response) override;
  ::grpc::Status AcceptListOfDurationsInSeconds(::grpc::ServerContext* context, const AcceptListOfDurationsInSecondsRequest* request, AcceptListOfDurationsInSecondsResponse* response) override;
  ::grpc::Status BoolArrayOutputFunction(::grpc::ServerContext* context, const BoolArrayOutputFunctionRequest* request, BoolArrayOutputFunctionResponse* response) override;
  ::grpc::Status BoolArrayInputFunction(::grpc::ServerContext* context, const BoolArrayInputFunctionRequest* request, BoolArrayInputFunctionResponse* response) override;
  ::grpc::Status DoubleAllTheNums(::grpc::ServerContext* context, const DoubleAllTheNumsRequest* request, DoubleAllTheNumsResponse* response) override;
  ::grpc::Status EnumArrayOutputFunction(::grpc::ServerContext* context, const EnumArrayOutputFunctionRequest* request, EnumArrayOutputFunctionResponse* response) override;
  ::grpc::Status EnumInputFunctionWithDefaults(::grpc::ServerContext* context, const EnumInputFunctionWithDefaultsRequest* request, EnumInputFunctionWithDefaultsResponse* response) override;
  ::grpc::Status ExportAttributeConfigurationBuffer(::grpc::ServerContext* context, const ExportAttributeConfigurationBufferRequest* request, ExportAttributeConfigurationBufferResponse* response) override;
  ::grpc::Status FetchWaveform(::grpc::ServerContext* context, const FetchWaveformRequest* request, FetchWaveformResponse* response) override;
  ::grpc::Status GetABoolean(::grpc::ServerContext* context, const GetABooleanRequest* request, GetABooleanResponse* response) override;
  ::grpc::Status GetANumber(::grpc::ServerContext* context, const GetANumberRequest* request, GetANumberResponse* response) override;
  ::grpc::Status GetAStringOfFixedMaximumSize(::grpc::ServerContext* context, const GetAStringOfFixedMaximumSizeRequest* request, GetAStringOfFixedMaximumSizeResponse* response) override;
  ::grpc::Status GetAnIviDanceString(::grpc::ServerContext* context, const GetAnIviDanceStringRequest* request, GetAnIviDanceStringResponse* response) override;
  ::grpc::Status GetAnIviDanceWithATwistString(::grpc::ServerContext* context, const GetAnIviDanceWithATwistStringRequest* request, GetAnIviDanceWithATwistStringResponse* response) override;
  ::grpc::Status GetArraySizeForCustomCode(::grpc::ServerContext* context, const GetArraySizeForCustomCodeRequest* request, GetArraySizeForCustomCodeResponse* response) override;
  ::grpc::Status GetArrayUsingIviDance(::grpc::ServerContext* context, const GetArrayUsingIviDanceRequest* request, GetArrayUsingIviDanceResponse* response) override;
  ::grpc::Status GetAttributeViBoolean(::grpc::ServerContext* context, const GetAttributeViBooleanRequest* request, GetAttributeViBooleanResponse* response) override;
  ::grpc::Status GetAttributeViInt32(::grpc::ServerContext* context, const GetAttributeViInt32Request* request, GetAttributeViInt32Response* response) override;
  ::grpc::Status GetAttributeViInt64(::grpc::ServerContext* context, const GetAttributeViInt64Request* request, GetAttributeViInt64Response* response) override;
  ::grpc::Status GetAttributeViReal64(::grpc::ServerContext* context, const GetAttributeViReal64Request* request, GetAttributeViReal64Response* response) override;
  ::grpc::Status GetAttributeViString(::grpc::ServerContext* context, const GetAttributeViStringRequest* request, GetAttributeViStringResponse* response) override;
  ::grpc::Status GetCalDateAndTime(::grpc::ServerContext* context, const GetCalDateAndTimeRequest* request, GetCalDateAndTimeResponse* response) override;
  ::grpc::Status GetCalInterval(::grpc::ServerContext* context, const GetCalIntervalRequest* request, GetCalIntervalResponse* response) override;
  ::grpc::Status GetCustomTypeArray(::grpc::ServerContext* context, const GetCustomTypeArrayRequest* request, GetCustomTypeArrayResponse* response) override;
  ::grpc::Status GetEnumValue(::grpc::ServerContext* context, const GetEnumValueRequest* request, GetEnumValueResponse* response) override;
  ::grpc::Status ImportAttributeConfigurationBuffer(::grpc::ServerContext* context, const ImportAttributeConfigurationBufferRequest* request, ImportAttributeConfigurationBufferResponse* response) override;
  ::grpc::Status InitWithOptions(::grpc::ServerContext* context, const InitWithOptionsRequest* request, InitWithOptionsResponse* response) override;
  ::grpc::Status MultipleArrayTypes(::grpc::ServerContext* context, const MultipleArrayTypesRequest* request, MultipleArrayTypesResponse* response) override;
  ::grpc::Status MultipleArraysSameSize(::grpc::ServerContext* context, const MultipleArraysSameSizeRequest* request, MultipleArraysSameSizeResponse* response) override;
  ::grpc::Status OneInputFunction(::grpc::ServerContext* context, const OneInputFunctionRequest* request, OneInputFunctionResponse* response) override;
  ::grpc::Status ParametersAreMultipleTypes(::grpc::ServerContext* context, const ParametersAreMultipleTypesRequest* request, ParametersAreMultipleTypesResponse* response) override;
  ::grpc::Status PoorlyNamedSimpleFunction(::grpc::ServerContext* context, const PoorlyNamedSimpleFunctionRequest* request, PoorlyNamedSimpleFunctionResponse* response) override;
  ::grpc::Status Read(::grpc::ServerContext* context, const ReadRequest* request, ReadResponse* response) override;
  ::grpc::Status ReadFromChannel(::grpc::ServerContext* context, const ReadFromChannelRequest* request, ReadFromChannelResponse* response) override;
  ::grpc::Status ReturnANumberAndAString(::grpc::ServerContext* context, const ReturnANumberAndAStringRequest* request, ReturnANumberAndAStringResponse* response) override;
  ::grpc::Status ReturnDurationInSeconds(::grpc::ServerContext* context, const ReturnDurationInSecondsRequest* request, ReturnDurationInSecondsResponse* response) override;
  ::grpc::Status ReturnListOfDurationsInSeconds(::grpc::ServerContext* context, const ReturnListOfDurationsInSecondsRequest* request, ReturnListOfDurationsInSecondsResponse* response) override;
  ::grpc::Status ReturnMultipleTypes(::grpc::ServerContext* context, const ReturnMultipleTypesRequest* request, ReturnMultipleTypesResponse* response) override;
  ::grpc::Status StringValuedEnumInputFunctionWithDefaults(::grpc::ServerContext* context, const StringValuedEnumInputFunctionWithDefaultsRequest* request, StringValuedEnumInputFunctionWithDefaultsResponse* response) override;
  ::grpc::Status TwoInputFunction(::grpc::ServerContext* context, const TwoInputFunctionRequest* request, TwoInputFunctionResponse* response) override;
  ::grpc::Status Use64BitNumber(::grpc::ServerContext* context, const Use64BitNumberRequest* request, Use64BitNumberResponse* response) override;
  ::grpc::Status WriteWaveform(::grpc::ServerContext* context, const WriteWaveformRequest* request, WriteWaveformResponse* response) override;
  ::grpc::Status Close(::grpc::ServerContext* context, const CloseRequest* request, CloseResponse* response) override;
private:
  NiFakeLibraryInterface* library_;
  nidevice_grpc::SessionRepository* session_repository_;
  void Copy(const std::vector<ViBoolean>& input, google::protobuf::RepeatedField<bool>* output);
  void Copy(const CustomStruct& input, nifake_grpc::FakeCustomStruct* output);
  void Copy(const std::vector<CustomStruct>& input, google::protobuf::RepeatedPtrField<nifake_grpc::FakeCustomStruct>* output);
  std::map<std::int32_t, float> floatenum_input_map_ { {1, 3.5f},{2, 4.5f},{3, 5.5f},{4, 6.5f},{5, 7.5f}, };
  std::map<float, std::int32_t> floatenum_output_map_ { {3.5f, 1},{4.5f, 2},{5.5f, 3},{6.5f, 4},{7.5f, 5}, };
  std::map<std::int32_t, std::string> mobileosnames_input_map_ { {1, "Android"},{2, "iOS"},{3, "None"}, };
  std::map<std::string, std::int32_t> mobileosnames_output_map_ { {"Android", 1},{"iOS", 2},{"None", 3}, };
};

} // namespace nifake_grpc

#endif  // NIFAKE_GRPC_SERVICE_H
