module;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Weverything"

#include "third/PVRTCCompressor/PvrTcDecoder.h"
#include "third/PVRTCCompressor/PvrTcEncoder.h"
#include "third/PVRTCCompressor/RgbBitmap.h"
#include "third/PVRTCCompressor/RgbaBitmap.h"

#pragma clang diagnostic pop

export module libra.kernel.third.PVRTCCompressor;

export namespace Libra::Kernel::Third::PVRTCCompressor {

	using ::Javelin::Point2;

	using ::Javelin::ColorRgb;

	using ::Javelin::ColorRgba;

	using ::Javelin::RgbBitmap;

	using ::Javelin::RgbaBitmap;

	using ::Javelin::PvrTcEncoder;

	using ::Javelin::PvrTcDecoder;

}
