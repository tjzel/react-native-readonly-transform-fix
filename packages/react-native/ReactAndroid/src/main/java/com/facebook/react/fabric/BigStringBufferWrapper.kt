/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

package com.facebook.react.fabric

import android.annotation.SuppressLint
import com.facebook.jni.HybridData
import com.facebook.proguard.annotations.DoNotStripAny
import com.facebook.soloader.SoLoader

/** TODO: Description */
@SuppressLint("MissingNativeLoadLibrary")
@DoNotStripAny
public class BigStringBufferWrapper internal constructor(fileName: String) {

private val mHybridData: HybridData = initHybrid(fileName);

  private external fun initHybrid(fileName: String): HybridData;
}
