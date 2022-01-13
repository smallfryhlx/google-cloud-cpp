// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/storagetransfer/v1/transfer.proto

#include "google/cloud/storagetransfer/internal/storage_transfer_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/storagetransfer/v1/transfer.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace storagetransfer_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

StorageTransferServiceLogging::StorageTransferServiceLogging(
    std::shared_ptr<StorageTransferServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::storagetransfer::v1::GoogleServiceAccount>
StorageTransferServiceLogging::GetGoogleServiceAccount(
    grpc::ClientContext& context,
    google::storagetransfer::v1::GetGoogleServiceAccountRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::storagetransfer::v1::GetGoogleServiceAccountRequest const&
                 request) {
        return child_->GetGoogleServiceAccount(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::storagetransfer::v1::TransferJob>
StorageTransferServiceLogging::CreateTransferJob(
    grpc::ClientContext& context,
    google::storagetransfer::v1::CreateTransferJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::storagetransfer::v1::CreateTransferJobRequest const&
                 request) {
        return child_->CreateTransferJob(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::storagetransfer::v1::TransferJob>
StorageTransferServiceLogging::UpdateTransferJob(
    grpc::ClientContext& context,
    google::storagetransfer::v1::UpdateTransferJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::storagetransfer::v1::UpdateTransferJobRequest const&
                 request) {
        return child_->UpdateTransferJob(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::storagetransfer::v1::TransferJob>
StorageTransferServiceLogging::GetTransferJob(
    grpc::ClientContext& context,
    google::storagetransfer::v1::GetTransferJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::storagetransfer::v1::GetTransferJobRequest const& request) {
        return child_->GetTransferJob(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::storagetransfer::v1::ListTransferJobsResponse>
StorageTransferServiceLogging::ListTransferJobs(
    grpc::ClientContext& context,
    google::storagetransfer::v1::ListTransferJobsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::storagetransfer::v1::ListTransferJobsRequest const& request) {
        return child_->ListTransferJobs(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status StorageTransferServiceLogging::PauseTransferOperation(
    grpc::ClientContext& context,
    google::storagetransfer::v1::PauseTransferOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::storagetransfer::v1::PauseTransferOperationRequest const&
                 request) {
        return child_->PauseTransferOperation(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status StorageTransferServiceLogging::ResumeTransferOperation(
    grpc::ClientContext& context,
    google::storagetransfer::v1::ResumeTransferOperationRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::storagetransfer::v1::ResumeTransferOperationRequest const&
                 request) {
        return child_->ResumeTransferOperation(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
StorageTransferServiceLogging::AsyncRunTransferJob(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::storagetransfer::v1::RunTransferJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::storagetransfer::v1::RunTransferJobRequest const& request) {
        return child_->AsyncRunTransferJob(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
StorageTransferServiceLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<Status> StorageTransferServiceLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storagetransfer_internal
}  // namespace cloud
}  // namespace google
