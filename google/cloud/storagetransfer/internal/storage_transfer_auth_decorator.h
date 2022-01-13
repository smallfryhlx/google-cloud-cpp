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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGETRANSFER_INTERNAL_STORAGE_TRANSFER_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGETRANSFER_INTERNAL_STORAGE_TRANSFER_AUTH_DECORATOR_H

#include "google/cloud/storagetransfer/internal/storage_transfer_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace storagetransfer_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class StorageTransferServiceAuth : public StorageTransferServiceStub {
 public:
  ~StorageTransferServiceAuth() override = default;
  StorageTransferServiceAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<StorageTransferServiceStub> child);

  StatusOr<google::storagetransfer::v1::GoogleServiceAccount>
  GetGoogleServiceAccount(
      grpc::ClientContext& context,
      google::storagetransfer::v1::GetGoogleServiceAccountRequest const&
          request) override;

  StatusOr<google::storagetransfer::v1::TransferJob> CreateTransferJob(
      grpc::ClientContext& context,
      google::storagetransfer::v1::CreateTransferJobRequest const& request)
      override;

  StatusOr<google::storagetransfer::v1::TransferJob> UpdateTransferJob(
      grpc::ClientContext& context,
      google::storagetransfer::v1::UpdateTransferJobRequest const& request)
      override;

  StatusOr<google::storagetransfer::v1::TransferJob> GetTransferJob(
      grpc::ClientContext& context,
      google::storagetransfer::v1::GetTransferJobRequest const& request)
      override;

  StatusOr<google::storagetransfer::v1::ListTransferJobsResponse>
  ListTransferJobs(grpc::ClientContext& context,
                   google::storagetransfer::v1::ListTransferJobsRequest const&
                       request) override;

  Status PauseTransferOperation(
      grpc::ClientContext& context,
      google::storagetransfer::v1::PauseTransferOperationRequest const& request)
      override;

  Status ResumeTransferOperation(
      grpc::ClientContext& context,
      google::storagetransfer::v1::ResumeTransferOperationRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRunTransferJob(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::storagetransfer::v1::RunTransferJobRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<StorageTransferServiceStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storagetransfer_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGETRANSFER_INTERNAL_STORAGE_TRANSFER_AUTH_DECORATOR_H
