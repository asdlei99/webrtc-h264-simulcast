/*
 *  Copyright (c) 2014 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#include "modules/video_coding/codecs/vp8/include/vp8.h"
#include "modules/video_coding/utility/simulcast_test_utility.h"

namespace webrtc {
namespace testing {

class TestVp8Impl : public TestSimulcast {
 public:
  TestVp8Impl() : TestSimulcast(kVideoCodecVP8) {}

 protected:
  std::unique_ptr<VideoEncoder> CreateEncoder() override {
    return VP8Encoder::Create();
  }
  std::unique_ptr<VideoDecoder> CreateDecoder() override {
    return VP8Decoder::Create();
  }
};

TEST_F(TestVp8Impl, TestKeyFrameRequestsOnAllStreams) {
  TestSimulcast::TestKeyFrameRequestsOnAllStreams();
}

TEST_F(TestVp8Impl, TestPaddingAllStreams) {
  TestSimulcast::TestPaddingAllStreams();
}

TEST_F(TestVp8Impl, TestPaddingTwoStreams) {
  TestSimulcast::TestPaddingTwoStreams();
}

TEST_F(TestVp8Impl, TestPaddingTwoStreamsOneMaxedOut) {
  TestSimulcast::TestPaddingTwoStreamsOneMaxedOut();
}

TEST_F(TestVp8Impl, TestPaddingOneStream) {
  TestSimulcast::TestPaddingOneStream();
}

TEST_F(TestVp8Impl, TestPaddingOneStreamTwoMaxedOut) {
  TestSimulcast::TestPaddingOneStreamTwoMaxedOut();
}

TEST_F(TestVp8Impl, TestSendAllStreams) {
  TestSimulcast::TestSendAllStreams();
}

TEST_F(TestVp8Impl, TestDisablingStreams) {
  TestSimulcast::TestDisablingStreams();
}

TEST_F(TestVp8Impl, TestActiveStreams) {
  TestSimulcast::TestActiveStreams();
}

TEST_F(TestVp8Impl, TestSwitchingToOneStream) {
  TestSimulcast::TestSwitchingToOneStream();
}

TEST_F(TestVp8Impl, TestSwitchingToOneOddStream) {
  TestSimulcast::TestSwitchingToOneOddStream();
}

TEST_F(TestVp8Impl, TestSwitchingToOneSmallStream) {
  TestSimulcast::TestSwitchingToOneSmallStream();
}

TEST_F(TestVp8Impl, TestSaptioTemporalLayers333PatternEncoder) {
  TestSimulcast::TestSaptioTemporalLayers333PatternEncoder();
}

TEST_F(TestVp8Impl, TestStrideEncodeDecode) {
  TestSimulcast::TestStrideEncodeDecode();
}
}  // namespace testing
}  // namespace webrtc
