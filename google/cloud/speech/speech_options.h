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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_SPEECH_OPTIONS_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_SPEECH_OPTIONS_H

#include "google/cloud/speech/speech_connection.h"
#include "google/cloud/speech/speech_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace speech {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// Option to use with `google::cloud::Options`.
struct SpeechRetryPolicyOption {
  using Type = std::shared_ptr<SpeechRetryPolicy>;
};

/// Option to use with `google::cloud::Options`.
struct SpeechBackoffPolicyOption {
  using Type = std::shared_ptr<BackoffPolicy>;
};

/// Option to use with `google::cloud::Options`.
struct SpeechPollingPolicyOption {
  using Type = std::shared_ptr<PollingPolicy>;
};

/// Option to use with `google::cloud::Options`.
struct SpeechConnectionIdempotencyPolicyOption {
  using Type = std::shared_ptr<SpeechConnectionIdempotencyPolicy>;
};

using SpeechPolicyOptionList =
    OptionList<SpeechRetryPolicyOption, SpeechBackoffPolicyOption,
               SpeechPollingPolicyOption,
               SpeechConnectionIdempotencyPolicyOption>;

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace speech
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_SPEECH_OPTIONS_H
