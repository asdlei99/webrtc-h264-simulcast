/*
 *  Copyright (c) 2014 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#include "modules/video_coding/codecs/h264/include/h264.h"
#include "modules/video_coding/utility/simulcast_test_utility.h"

namespace webrtc {
namespace testing {

class TestH264Simulcast : public TestSimulcast {
 public:
  TestH264Simulcast() : TestSimulcast(kVideoCodecH264) {}

 protected:
  std::unique_ptr<VideoEncoder> CreateEncoder() override {
    return H264Encoder::Create(cricket::VideoCodec("H264"));
  }
  std::unique_ptr<VideoDecoder> CreateDecoder() override {
    return H264Decoder::Create();
  }
};

TEST_F(TestH264Simulcast, TestKeyFrameRequestsOnAllStreams) {
  TestSimulcast::TestKeyFrameRequestsOnAllStreams();
}

TEST_F(TestH264Simulcast, TestPaddingAllStreams) {
  TestSimulcast::TestPaddingAllStreams();
}

TEST_F(TestH264Simulcast, TestPaddingTwoStreams) {
  TestSimulcast::TestPaddingTwoStreams();
}

TEST_F(TestH264Simulcast, TestPaddingTwoStreamsOneMaxedOut) {
  TestSimulcast::TestPaddingTwoStreamsOneMaxedOut();
}

TEST_F(TestH264Simulcast, TestPaddingOneStream) {
  TestSimulcast::TestPaddingOneStream();
}

TEST_F(TestH264Simulcast, TestPaddingOneStreamTwoMaxedOut) {
  TestSimulcast::TestPaddingOneStreamTwoMaxedOut();
}

TEST_F(TestH264Simulcast, TestSendAllStreams) {
  TestSimulcast::TestSendAllStreams();
}

TEST_F(TestH264Simulcast, TestDisablingStreams) {
  TestSimulcast::TestDisablingStreams();
}

TEST_F(TestH264Simulcast, TestActiveStreams) {
  TestSimulcast::TestActiveStreams();
}

TEST_F(TestH264Simulcast, TestSwitchingToOneStream) {
  TestSimulcast::TestSwitchingToOneStream();
}

TEST_F(TestH264Simulcast, TestSwitchingToOneOddStream) {
  TestSimulcast::TestSwitchingToOneOddStream();
}

TEST_F(TestH264Simulcast, TestSwitchingToOneSmallStream) {
  TestSimulcast::TestSwitchingToOneSmallStream();
}

TEST_F(TestH264Simulcast, TestStrideEncodeDecode) {
  TestSimulcast::TestStrideEncodeDecode();
}
}  // namespace testing
}  // namespace webrtc
