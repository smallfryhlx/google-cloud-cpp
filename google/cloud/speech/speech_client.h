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
// source: google/cloud/speech/v1/cloud_speech.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_SPEECH_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_SPEECH_CLIENT_H

#include "google/cloud/speech/speech_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace speech {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service that implements Google Cloud Speech API.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class SpeechClient {
 public:
  explicit SpeechClient(std::shared_ptr<SpeechConnection> connection,
                        Options opts = {});
  ~SpeechClient();

  //@{
  // @name Copy and move support
  SpeechClient(SpeechClient const&) = default;
  SpeechClient& operator=(SpeechClient const&) = default;
  SpeechClient(SpeechClient&&) = default;
  SpeechClient& operator=(SpeechClient&&) = default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(SpeechClient const& a, SpeechClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(SpeechClient const& a, SpeechClient const& b) {
    return !(a == b);
  }
  //@}

  ///
  /// Performs synchronous speech recognition: receive results after all audio
  /// has been sent and processed.
  ///
  /// @param config  Required. Provides information to the recognizer that
  /// specifies how to
  ///  process the request.
  /// @param audio  Required. The audio data to be recognized.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::speech::v1::RecognizeResponse,google/cloud/speech/v1/cloud_speech.proto#L628}
  ///
  /// [google.cloud.speech.v1.RecognizeRequest]:
  /// @googleapis_reference_link{google/cloud/speech/v1/cloud_speech.proto#L77}
  /// [google.cloud.speech.v1.RecognizeResponse]:
  /// @googleapis_reference_link{google/cloud/speech/v1/cloud_speech.proto#L628}
  ///
  StatusOr<google::cloud::speech::v1::RecognizeResponse> Recognize(
      google::cloud::speech::v1::RecognitionConfig const& config,
      google::cloud::speech::v1::RecognitionAudio const& audio,
      Options opts = {});

  ///
  /// Performs synchronous speech recognition: receive results after all audio
  /// has been sent and processed.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::speech::v1::RecognizeRequest,google/cloud/speech/v1/cloud_speech.proto#L77}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::speech::v1::RecognizeResponse,google/cloud/speech/v1/cloud_speech.proto#L628}
  ///
  /// [google.cloud.speech.v1.RecognizeRequest]:
  /// @googleapis_reference_link{google/cloud/speech/v1/cloud_speech.proto#L77}
  /// [google.cloud.speech.v1.RecognizeResponse]:
  /// @googleapis_reference_link{google/cloud/speech/v1/cloud_speech.proto#L628}
  ///
  StatusOr<google::cloud::speech::v1::RecognizeResponse> Recognize(
      google::cloud::speech::v1::RecognizeRequest const& request,
      Options opts = {});

  ///
  /// Performs asynchronous speech recognition: receive results via the
  /// google.longrunning.Operations interface. Returns either an
  /// `Operation.error` or an `Operation.response` which contains
  /// a `LongRunningRecognizeResponse` message.
  /// For more information on asynchronous speech recognition, see the
  /// [how-to](https://cloud.google.com/speech-to-text/docs/async-recognize).
  ///
  /// @param config  Required. Provides information to the recognizer that
  /// specifies how to
  ///  process the request.
  /// @param audio  Required. The audio data to be recognized.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::speech::v1::LongRunningRecognizeResponse,google/cloud/speech/v1/cloud_speech.proto#L642}
  ///
  /// [google.cloud.speech.v1.LongRunningRecognizeRequest]:
  /// @googleapis_reference_link{google/cloud/speech/v1/cloud_speech.proto#L88}
  /// [google.cloud.speech.v1.LongRunningRecognizeResponse]:
  /// @googleapis_reference_link{google/cloud/speech/v1/cloud_speech.proto#L642}
  ///
  future<StatusOr<google::cloud::speech::v1::LongRunningRecognizeResponse>>
  LongRunningRecognize(
      google::cloud::speech::v1::RecognitionConfig const& config,
      google::cloud::speech::v1::RecognitionAudio const& audio,
      Options opts = {});

  ///
  /// Performs asynchronous speech recognition: receive results via the
  /// google.longrunning.Operations interface. Returns either an
  /// `Operation.error` or an `Operation.response` which contains
  /// a `LongRunningRecognizeResponse` message.
  /// For more information on asynchronous speech recognition, see the
  /// [how-to](https://cloud.google.com/speech-to-text/docs/async-recognize).
  ///
  /// @param request
  /// @googleapis_link{google::cloud::speech::v1::LongRunningRecognizeRequest,google/cloud/speech/v1/cloud_speech.proto#L88}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::speech::v1::LongRunningRecognizeResponse,google/cloud/speech/v1/cloud_speech.proto#L642}
  ///
  /// [google.cloud.speech.v1.LongRunningRecognizeRequest]:
  /// @googleapis_reference_link{google/cloud/speech/v1/cloud_speech.proto#L88}
  /// [google.cloud.speech.v1.LongRunningRecognizeResponse]:
  /// @googleapis_reference_link{google/cloud/speech/v1/cloud_speech.proto#L642}
  ///
  future<StatusOr<google::cloud::speech::v1::LongRunningRecognizeResponse>>
  LongRunningRecognize(
      google::cloud::speech::v1::LongRunningRecognizeRequest const& request,
      Options opts = {});

  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::speech::v1::StreamingRecognizeRequest,
      google::cloud::speech::v1::StreamingRecognizeResponse>>
  AsyncStreamingRecognize(Options opts = {});

 private:
  std::shared_ptr<SpeechConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace speech
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_SPEECH_CLIENT_H
