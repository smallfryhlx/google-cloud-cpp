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
// source: google/storage/v2/storage.proto

#include "google/cloud/storage/internal/storage_logging_decorator.h"
#include "google/cloud/internal/async_read_write_stream_logging.h"
#include "google/cloud/internal/async_streaming_read_rpc_logging.h"
#include "google/cloud/internal/async_streaming_write_rpc_logging.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/internal/streaming_read_rpc_logging.h"
#include "google/cloud/internal/streaming_write_rpc_logging.h"
#include "google/cloud/status_or.h"
#include <google/storage/v2/storage.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace storage_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

StorageLogging::StorageLogging(std::shared_ptr<StorageStub> child,
                               TracingOptions tracing_options,
                               std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

Status StorageLogging::DeleteBucket(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::DeleteBucketRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::v2::DeleteBucketRequest const& request) {
        return child_->DeleteBucket(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::Bucket> StorageLogging::GetBucket(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::GetBucketRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::v2::GetBucketRequest const& request) {
        return child_->GetBucket(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::Bucket> StorageLogging::CreateBucket(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::CreateBucketRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::v2::CreateBucketRequest const& request) {
        return child_->CreateBucket(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::ListBucketsResponse> StorageLogging::ListBuckets(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::ListBucketsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::v2::ListBucketsRequest const& request) {
        return child_->ListBuckets(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::Bucket> StorageLogging::LockBucketRetentionPolicy(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::LockBucketRetentionPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::v2::LockBucketRetentionPolicyRequest const&
                 request) {
        return child_->LockBucketRetentionPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> StorageLogging::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> StorageLogging::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
StorageLogging::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::Bucket> StorageLogging::UpdateBucket(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::UpdateBucketRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::v2::UpdateBucketRequest const& request) {
        return child_->UpdateBucket(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status StorageLogging::DeleteNotificationConfig(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::DeleteNotificationConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::storage::v2::DeleteNotificationConfigRequest const& request) {
        return child_->DeleteNotificationConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::NotificationConfig>
StorageLogging::GetNotificationConfig(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::GetNotificationConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::v2::GetNotificationConfigRequest const& request) {
        return child_->GetNotificationConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::NotificationConfig>
StorageLogging::CreateNotificationConfig(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::CreateNotificationConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::storage::v2::CreateNotificationConfigRequest const& request) {
        return child_->CreateNotificationConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::ListNotificationConfigsResponse>
StorageLogging::ListNotificationConfigs(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::ListNotificationConfigsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::storage::v2::ListNotificationConfigsRequest const& request) {
        return child_->ListNotificationConfigs(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::Object> StorageLogging::ComposeObject(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::ComposeObjectRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::v2::ComposeObjectRequest const& request) {
        return child_->ComposeObject(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status StorageLogging::DeleteObject(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::DeleteObjectRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::v2::DeleteObjectRequest const& request) {
        return child_->DeleteObject(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::Object> StorageLogging::RestoreObject(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::RestoreObjectRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::v2::RestoreObjectRequest const& request) {
        return child_->RestoreObject(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::CancelResumableWriteResponse>
StorageLogging::CancelResumableWrite(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::CancelResumableWriteRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::v2::CancelResumableWriteRequest const& request) {
        return child_->CancelResumableWrite(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::Object> StorageLogging::GetObject(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::GetObjectRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::v2::GetObjectRequest const& request) {
        return child_->GetObject(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::storage::v2::ReadObjectResponse>>
StorageLogging::ReadObject(
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::storage::v2::ReadObjectRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::storage::v2::ReadObjectRequest const& request)
          -> std::unique_ptr<google::cloud::internal::StreamingReadRpc<
              google::storage::v2::ReadObjectResponse>> {
        auto stream = child_->ReadObject(std::move(context), options, request);
        if (stream_logging_) {
          stream =
              std::make_unique<google::cloud::internal::StreamingReadRpcLogging<
                  google::storage::v2::ReadObjectResponse>>(
                  std::move(stream), tracing_options_,
                  google::cloud::internal::RequestIdForLogging());
        }
        return stream;
      },
      std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::Object> StorageLogging::UpdateObject(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::UpdateObjectRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::v2::UpdateObjectRequest const& request) {
        return child_->UpdateObject(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

std::unique_ptr<::google::cloud::internal::StreamingWriteRpc<
    google::storage::v2::WriteObjectRequest,
    google::storage::v2::WriteObjectResponse>>
StorageLogging::WriteObject(std::shared_ptr<grpc::ClientContext> context,
                            Options const& options) {
  using LoggingStream = ::google::cloud::internal::StreamingWriteRpcLogging<
      google::storage::v2::WriteObjectRequest,
      google::storage::v2::WriteObjectResponse>;

  auto request_id = google::cloud::internal::RequestIdForLogging();
  GCP_LOG(DEBUG) << __func__ << "(" << request_id << ")";
  auto stream = child_->WriteObject(std::move(context), options);
  if (stream_logging_) {
    stream = std::make_unique<LoggingStream>(
        std::move(stream), tracing_options_, std::move(request_id));
  }
  return stream;
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::storage::v2::BidiWriteObjectRequest,
    google::storage::v2::BidiWriteObjectResponse>>
StorageLogging::AsyncBidiWriteObject(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context) {
  using LoggingStream =
      ::google::cloud::internal::AsyncStreamingReadWriteRpcLogging<
          google::storage::v2::BidiWriteObjectRequest,
          google::storage::v2::BidiWriteObjectResponse>;

  auto request_id = google::cloud::internal::RequestIdForLogging();
  GCP_LOG(DEBUG) << __func__ << "(" << request_id << ")";
  auto stream = child_->AsyncBidiWriteObject(cq, std::move(context));
  if (stream_logging_) {
    stream = std::make_unique<LoggingStream>(
        std::move(stream), tracing_options_, std::move(request_id));
  }
  return stream;
}

StatusOr<google::storage::v2::ListObjectsResponse> StorageLogging::ListObjects(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::ListObjectsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::v2::ListObjectsRequest const& request) {
        return child_->ListObjects(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::RewriteResponse> StorageLogging::RewriteObject(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::RewriteObjectRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::v2::RewriteObjectRequest const& request) {
        return child_->RewriteObject(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::StartResumableWriteResponse>
StorageLogging::StartResumableWrite(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::StartResumableWriteRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::v2::StartResumableWriteRequest const& request) {
        return child_->StartResumableWrite(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::QueryWriteStatusResponse>
StorageLogging::QueryWriteStatus(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::QueryWriteStatusRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::v2::QueryWriteStatusRequest const& request) {
        return child_->QueryWriteStatus(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::ServiceAccount> StorageLogging::GetServiceAccount(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::GetServiceAccountRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::v2::GetServiceAccountRequest const& request) {
        return child_->GetServiceAccount(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::CreateHmacKeyResponse>
StorageLogging::CreateHmacKey(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::CreateHmacKeyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::v2::CreateHmacKeyRequest const& request) {
        return child_->CreateHmacKey(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status StorageLogging::DeleteHmacKey(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::DeleteHmacKeyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::v2::DeleteHmacKeyRequest const& request) {
        return child_->DeleteHmacKey(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::HmacKeyMetadata> StorageLogging::GetHmacKey(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::GetHmacKeyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::v2::GetHmacKeyRequest const& request) {
        return child_->GetHmacKey(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::ListHmacKeysResponse>
StorageLogging::ListHmacKeys(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::ListHmacKeysRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::v2::ListHmacKeysRequest const& request) {
        return child_->ListHmacKeys(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::HmacKeyMetadata> StorageLogging::UpdateHmacKey(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::UpdateHmacKeyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::v2::UpdateHmacKeyRequest const& request) {
        return child_->UpdateHmacKey(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::storage::v2::Object>>
StorageLogging::AsyncComposeObject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::storage::v2::ComposeObjectRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::storage::v2::ComposeObjectRequest const& request) {
        return child_->AsyncComposeObject(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<Status> StorageLogging::AsyncDeleteObject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::storage::v2::DeleteObjectRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::storage::v2::DeleteObjectRequest const& request) {
        return child_->AsyncDeleteObject(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
    google::storage::v2::ReadObjectResponse>>
StorageLogging::AsyncReadObject(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::storage::v2::ReadObjectRequest const& request) {
  using LoggingStream = ::google::cloud::internal::AsyncStreamingReadRpcLogging<
      google::storage::v2::ReadObjectResponse>;

  auto request_id = google::cloud::internal::RequestIdForLogging();
  GCP_LOG(DEBUG) << __func__ << "(" << request_id << ")";
  auto stream = child_->AsyncReadObject(cq, std::move(context),
                                        std::move(options), request);
  if (stream_logging_) {
    stream = std::make_unique<LoggingStream>(
        std::move(stream), tracing_options_, std::move(request_id));
  }
  return stream;
}

std::unique_ptr<::google::cloud::internal::AsyncStreamingWriteRpc<
    google::storage::v2::WriteObjectRequest,
    google::storage::v2::WriteObjectResponse>>
StorageLogging::AsyncWriteObject(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options) {
  using LoggingStream =
      ::google::cloud::internal::AsyncStreamingWriteRpcLogging<
          google::storage::v2::WriteObjectRequest,
          google::storage::v2::WriteObjectResponse>;

  auto request_id = google::cloud::internal::RequestIdForLogging();
  GCP_LOG(DEBUG) << __func__ << "(" << request_id << ")";
  auto stream =
      child_->AsyncWriteObject(cq, std::move(context), std::move(options));
  if (stream_logging_) {
    stream = std::make_unique<LoggingStream>(
        std::move(stream), tracing_options_, std::move(request_id));
  }
  return stream;
}

future<StatusOr<google::storage::v2::RewriteResponse>>
StorageLogging::AsyncRewriteObject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::storage::v2::RewriteObjectRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::storage::v2::RewriteObjectRequest const& request) {
        return child_->AsyncRewriteObject(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::storage::v2::StartResumableWriteResponse>>
StorageLogging::AsyncStartResumableWrite(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::storage::v2::StartResumableWriteRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::storage::v2::StartResumableWriteRequest const& request) {
        return child_->AsyncStartResumableWrite(cq, std::move(context),
                                                request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::storage::v2::QueryWriteStatusResponse>>
StorageLogging::AsyncQueryWriteStatus(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::storage::v2::QueryWriteStatusRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::storage::v2::QueryWriteStatusRequest const& request) {
        return child_->AsyncQueryWriteStatus(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage_internal
}  // namespace cloud
}  // namespace google
