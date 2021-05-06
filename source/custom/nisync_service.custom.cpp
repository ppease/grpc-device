#include <nisync/nisync_service.h>

namespace nisync_grpc {
//---------------------------------------------------------------------
//---------------------------------------------------------------------
::grpc::Status NiSyncService::GetTimeEx(::grpc::ServerContext* context, const GetTimeExRequest* request, GetTimeExResponse* response)
{
  if (context->IsCancelled()) {
    return ::grpc::Status::CANCELLED;
  }
  try {
    auto session = request->vi();
    ViSession vi = session_repository_->access_session(session.id(), session.name());
    // do conversion and call get time
    return ::grpc::Status::OK;
  }
  catch (nidevice_grpc::LibraryLoadException& ex) {
    return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
  }
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
}  // namespace nisync_grpc
