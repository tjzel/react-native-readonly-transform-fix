/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <memory>
#include <string>

#include <fbjni/fbjni.h>
#include <jsireact/JSIExecutor.h>

namespace facebook::react {

class BigStringBufferWrapper : public jni::HybridClass<BigStringBufferWrapper> {
 public:
  constexpr static const char* const kJavaDescriptor =
      "Lcom/facebook/react/fabric/BigStringBufferWrapper;";

  static void registerNatives();

  [[nodiscard]] const std::shared_ptr<const BigStringBuffer> getScript() const;

 private:
  static jni::local_ref<BigStringBufferWrapper::jhybriddata> initHybrid(
      jni::alias_ref<jhybridobject> jThis,
      std::string fileName);

  friend HybridBase;

  explicit BigStringBufferWrapper(
      const std::shared_ptr<const BigStringBuffer>& script);

  const std::shared_ptr<const BigStringBuffer> script_;
};

} // namespace facebook::react
