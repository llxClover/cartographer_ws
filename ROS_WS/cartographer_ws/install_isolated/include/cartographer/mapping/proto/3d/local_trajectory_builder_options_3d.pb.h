// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/3d/local_trajectory_builder_options_3d.proto

#ifndef PROTOBUF_cartographer_2fmapping_2fproto_2f3d_2flocal_5ftrajectory_5fbuilder_5foptions_5f3d_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fmapping_2fproto_2f3d_2flocal_5ftrajectory_5fbuilder_5foptions_5f3d_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "cartographer/mapping/proto/3d/submaps_options_3d.pb.h"
#include "cartographer/mapping/proto/motion_filter_options.pb.h"
#include "cartographer/mapping/proto/scan_matching/ceres_scan_matcher_options_3d.pb.h"
#include "cartographer/mapping/proto/scan_matching/real_time_correlative_scan_matcher_options.pb.h"
#include "cartographer/sensor/proto/adaptive_voxel_filter_options.pb.h"
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping {
namespace proto {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_cartographer_2fmapping_2fproto_2f3d_2flocal_5ftrajectory_5fbuilder_5foptions_5f3d_2eproto();
void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2f3d_2flocal_5ftrajectory_5fbuilder_5foptions_5f3d_2eproto();
void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2f3d_2flocal_5ftrajectory_5fbuilder_5foptions_5f3d_2eproto();

class LocalTrajectoryBuilderOptions3D;

// ===================================================================

class LocalTrajectoryBuilderOptions3D : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D) */ {
 public:
  LocalTrajectoryBuilderOptions3D();
  virtual ~LocalTrajectoryBuilderOptions3D();

  LocalTrajectoryBuilderOptions3D(const LocalTrajectoryBuilderOptions3D& from);

  inline LocalTrajectoryBuilderOptions3D& operator=(const LocalTrajectoryBuilderOptions3D& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LocalTrajectoryBuilderOptions3D& default_instance();

  void Swap(LocalTrajectoryBuilderOptions3D* other);

  // implements Message ----------------------------------------------

  inline LocalTrajectoryBuilderOptions3D* New() const { return New(NULL); }

  LocalTrajectoryBuilderOptions3D* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LocalTrajectoryBuilderOptions3D& from);
  void MergeFrom(const LocalTrajectoryBuilderOptions3D& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(LocalTrajectoryBuilderOptions3D* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional float min_range = 1;
  void clear_min_range();
  static const int kMinRangeFieldNumber = 1;
  float min_range() const;
  void set_min_range(float value);

  // optional float max_range = 2;
  void clear_max_range();
  static const int kMaxRangeFieldNumber = 2;
  float max_range() const;
  void set_max_range(float value);

  // optional int32 num_accumulated_range_data = 3;
  void clear_num_accumulated_range_data();
  static const int kNumAccumulatedRangeDataFieldNumber = 3;
  ::google::protobuf::int32 num_accumulated_range_data() const;
  void set_num_accumulated_range_data(::google::protobuf::int32 value);

  // optional float voxel_filter_size = 4;
  void clear_voxel_filter_size();
  static const int kVoxelFilterSizeFieldNumber = 4;
  float voxel_filter_size() const;
  void set_voxel_filter_size(float value);

  // optional .cartographer.sensor.proto.AdaptiveVoxelFilterOptions high_resolution_adaptive_voxel_filter_options = 5;
  bool has_high_resolution_adaptive_voxel_filter_options() const;
  void clear_high_resolution_adaptive_voxel_filter_options();
  static const int kHighResolutionAdaptiveVoxelFilterOptionsFieldNumber = 5;
  const ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions& high_resolution_adaptive_voxel_filter_options() const;
  ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* mutable_high_resolution_adaptive_voxel_filter_options();
  ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* release_high_resolution_adaptive_voxel_filter_options();
  void set_allocated_high_resolution_adaptive_voxel_filter_options(::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* high_resolution_adaptive_voxel_filter_options);

  // optional .cartographer.sensor.proto.AdaptiveVoxelFilterOptions low_resolution_adaptive_voxel_filter_options = 12;
  bool has_low_resolution_adaptive_voxel_filter_options() const;
  void clear_low_resolution_adaptive_voxel_filter_options();
  static const int kLowResolutionAdaptiveVoxelFilterOptionsFieldNumber = 12;
  const ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions& low_resolution_adaptive_voxel_filter_options() const;
  ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* mutable_low_resolution_adaptive_voxel_filter_options();
  ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* release_low_resolution_adaptive_voxel_filter_options();
  void set_allocated_low_resolution_adaptive_voxel_filter_options(::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* low_resolution_adaptive_voxel_filter_options);

  // optional bool use_online_correlative_scan_matching = 13;
  void clear_use_online_correlative_scan_matching();
  static const int kUseOnlineCorrelativeScanMatchingFieldNumber = 13;
  bool use_online_correlative_scan_matching() const;
  void set_use_online_correlative_scan_matching(bool value);

  // optional .cartographer.mapping.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions real_time_correlative_scan_matcher_options = 14;
  bool has_real_time_correlative_scan_matcher_options() const;
  void clear_real_time_correlative_scan_matcher_options();
  static const int kRealTimeCorrelativeScanMatcherOptionsFieldNumber = 14;
  const ::cartographer::mapping::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions& real_time_correlative_scan_matcher_options() const;
  ::cartographer::mapping::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions* mutable_real_time_correlative_scan_matcher_options();
  ::cartographer::mapping::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions* release_real_time_correlative_scan_matcher_options();
  void set_allocated_real_time_correlative_scan_matcher_options(::cartographer::mapping::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions* real_time_correlative_scan_matcher_options);

  // optional .cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions3D ceres_scan_matcher_options = 6;
  bool has_ceres_scan_matcher_options() const;
  void clear_ceres_scan_matcher_options();
  static const int kCeresScanMatcherOptionsFieldNumber = 6;
  const ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D& ceres_scan_matcher_options() const;
  ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D* mutable_ceres_scan_matcher_options();
  ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D* release_ceres_scan_matcher_options();
  void set_allocated_ceres_scan_matcher_options(::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D* ceres_scan_matcher_options);

  // optional .cartographer.mapping.proto.MotionFilterOptions motion_filter_options = 7;
  bool has_motion_filter_options() const;
  void clear_motion_filter_options();
  static const int kMotionFilterOptionsFieldNumber = 7;
  const ::cartographer::mapping::proto::MotionFilterOptions& motion_filter_options() const;
  ::cartographer::mapping::proto::MotionFilterOptions* mutable_motion_filter_options();
  ::cartographer::mapping::proto::MotionFilterOptions* release_motion_filter_options();
  void set_allocated_motion_filter_options(::cartographer::mapping::proto::MotionFilterOptions* motion_filter_options);

  // optional double imu_gravity_time_constant = 15;
  void clear_imu_gravity_time_constant();
  static const int kImuGravityTimeConstantFieldNumber = 15;
  double imu_gravity_time_constant() const;
  void set_imu_gravity_time_constant(double value);

  // optional int32 rotational_histogram_size = 17;
  void clear_rotational_histogram_size();
  static const int kRotationalHistogramSizeFieldNumber = 17;
  ::google::protobuf::int32 rotational_histogram_size() const;
  void set_rotational_histogram_size(::google::protobuf::int32 value);

  // optional .cartographer.mapping.proto.SubmapsOptions3D submaps_options = 8;
  bool has_submaps_options() const;
  void clear_submaps_options();
  static const int kSubmapsOptionsFieldNumber = 8;
  const ::cartographer::mapping::proto::SubmapsOptions3D& submaps_options() const;
  ::cartographer::mapping::proto::SubmapsOptions3D* mutable_submaps_options();
  ::cartographer::mapping::proto::SubmapsOptions3D* release_submaps_options();
  void set_allocated_submaps_options(::cartographer::mapping::proto::SubmapsOptions3D* submaps_options);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  float min_range_;
  float max_range_;
  ::google::protobuf::int32 num_accumulated_range_data_;
  float voxel_filter_size_;
  ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* high_resolution_adaptive_voxel_filter_options_;
  ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* low_resolution_adaptive_voxel_filter_options_;
  ::cartographer::mapping::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions* real_time_correlative_scan_matcher_options_;
  ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D* ceres_scan_matcher_options_;
  bool use_online_correlative_scan_matching_;
  ::google::protobuf::int32 rotational_histogram_size_;
  ::cartographer::mapping::proto::MotionFilterOptions* motion_filter_options_;
  double imu_gravity_time_constant_;
  ::cartographer::mapping::proto::SubmapsOptions3D* submaps_options_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2f3d_2flocal_5ftrajectory_5fbuilder_5foptions_5f3d_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2f3d_2flocal_5ftrajectory_5fbuilder_5foptions_5f3d_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2f3d_2flocal_5ftrajectory_5fbuilder_5foptions_5f3d_2eproto();

  void InitAsDefaultInstance();
  static LocalTrajectoryBuilderOptions3D* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// LocalTrajectoryBuilderOptions3D

// optional float min_range = 1;
inline void LocalTrajectoryBuilderOptions3D::clear_min_range() {
  min_range_ = 0;
}
inline float LocalTrajectoryBuilderOptions3D::min_range() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.min_range)
  return min_range_;
}
inline void LocalTrajectoryBuilderOptions3D::set_min_range(float value) {
  
  min_range_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.min_range)
}

// optional float max_range = 2;
inline void LocalTrajectoryBuilderOptions3D::clear_max_range() {
  max_range_ = 0;
}
inline float LocalTrajectoryBuilderOptions3D::max_range() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.max_range)
  return max_range_;
}
inline void LocalTrajectoryBuilderOptions3D::set_max_range(float value) {
  
  max_range_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.max_range)
}

// optional int32 num_accumulated_range_data = 3;
inline void LocalTrajectoryBuilderOptions3D::clear_num_accumulated_range_data() {
  num_accumulated_range_data_ = 0;
}
inline ::google::protobuf::int32 LocalTrajectoryBuilderOptions3D::num_accumulated_range_data() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.num_accumulated_range_data)
  return num_accumulated_range_data_;
}
inline void LocalTrajectoryBuilderOptions3D::set_num_accumulated_range_data(::google::protobuf::int32 value) {
  
  num_accumulated_range_data_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.num_accumulated_range_data)
}

// optional float voxel_filter_size = 4;
inline void LocalTrajectoryBuilderOptions3D::clear_voxel_filter_size() {
  voxel_filter_size_ = 0;
}
inline float LocalTrajectoryBuilderOptions3D::voxel_filter_size() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.voxel_filter_size)
  return voxel_filter_size_;
}
inline void LocalTrajectoryBuilderOptions3D::set_voxel_filter_size(float value) {
  
  voxel_filter_size_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.voxel_filter_size)
}

// optional .cartographer.sensor.proto.AdaptiveVoxelFilterOptions high_resolution_adaptive_voxel_filter_options = 5;
inline bool LocalTrajectoryBuilderOptions3D::has_high_resolution_adaptive_voxel_filter_options() const {
  return !_is_default_instance_ && high_resolution_adaptive_voxel_filter_options_ != NULL;
}
inline void LocalTrajectoryBuilderOptions3D::clear_high_resolution_adaptive_voxel_filter_options() {
  if (GetArenaNoVirtual() == NULL && high_resolution_adaptive_voxel_filter_options_ != NULL) delete high_resolution_adaptive_voxel_filter_options_;
  high_resolution_adaptive_voxel_filter_options_ = NULL;
}
inline const ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions& LocalTrajectoryBuilderOptions3D::high_resolution_adaptive_voxel_filter_options() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.high_resolution_adaptive_voxel_filter_options)
  return high_resolution_adaptive_voxel_filter_options_ != NULL ? *high_resolution_adaptive_voxel_filter_options_ : *default_instance_->high_resolution_adaptive_voxel_filter_options_;
}
inline ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* LocalTrajectoryBuilderOptions3D::mutable_high_resolution_adaptive_voxel_filter_options() {
  
  if (high_resolution_adaptive_voxel_filter_options_ == NULL) {
    high_resolution_adaptive_voxel_filter_options_ = new ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.high_resolution_adaptive_voxel_filter_options)
  return high_resolution_adaptive_voxel_filter_options_;
}
inline ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* LocalTrajectoryBuilderOptions3D::release_high_resolution_adaptive_voxel_filter_options() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.high_resolution_adaptive_voxel_filter_options)
  
  ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* temp = high_resolution_adaptive_voxel_filter_options_;
  high_resolution_adaptive_voxel_filter_options_ = NULL;
  return temp;
}
inline void LocalTrajectoryBuilderOptions3D::set_allocated_high_resolution_adaptive_voxel_filter_options(::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* high_resolution_adaptive_voxel_filter_options) {
  delete high_resolution_adaptive_voxel_filter_options_;
  high_resolution_adaptive_voxel_filter_options_ = high_resolution_adaptive_voxel_filter_options;
  if (high_resolution_adaptive_voxel_filter_options) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.high_resolution_adaptive_voxel_filter_options)
}

// optional .cartographer.sensor.proto.AdaptiveVoxelFilterOptions low_resolution_adaptive_voxel_filter_options = 12;
inline bool LocalTrajectoryBuilderOptions3D::has_low_resolution_adaptive_voxel_filter_options() const {
  return !_is_default_instance_ && low_resolution_adaptive_voxel_filter_options_ != NULL;
}
inline void LocalTrajectoryBuilderOptions3D::clear_low_resolution_adaptive_voxel_filter_options() {
  if (GetArenaNoVirtual() == NULL && low_resolution_adaptive_voxel_filter_options_ != NULL) delete low_resolution_adaptive_voxel_filter_options_;
  low_resolution_adaptive_voxel_filter_options_ = NULL;
}
inline const ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions& LocalTrajectoryBuilderOptions3D::low_resolution_adaptive_voxel_filter_options() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.low_resolution_adaptive_voxel_filter_options)
  return low_resolution_adaptive_voxel_filter_options_ != NULL ? *low_resolution_adaptive_voxel_filter_options_ : *default_instance_->low_resolution_adaptive_voxel_filter_options_;
}
inline ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* LocalTrajectoryBuilderOptions3D::mutable_low_resolution_adaptive_voxel_filter_options() {
  
  if (low_resolution_adaptive_voxel_filter_options_ == NULL) {
    low_resolution_adaptive_voxel_filter_options_ = new ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.low_resolution_adaptive_voxel_filter_options)
  return low_resolution_adaptive_voxel_filter_options_;
}
inline ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* LocalTrajectoryBuilderOptions3D::release_low_resolution_adaptive_voxel_filter_options() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.low_resolution_adaptive_voxel_filter_options)
  
  ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* temp = low_resolution_adaptive_voxel_filter_options_;
  low_resolution_adaptive_voxel_filter_options_ = NULL;
  return temp;
}
inline void LocalTrajectoryBuilderOptions3D::set_allocated_low_resolution_adaptive_voxel_filter_options(::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* low_resolution_adaptive_voxel_filter_options) {
  delete low_resolution_adaptive_voxel_filter_options_;
  low_resolution_adaptive_voxel_filter_options_ = low_resolution_adaptive_voxel_filter_options;
  if (low_resolution_adaptive_voxel_filter_options) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.low_resolution_adaptive_voxel_filter_options)
}

// optional bool use_online_correlative_scan_matching = 13;
inline void LocalTrajectoryBuilderOptions3D::clear_use_online_correlative_scan_matching() {
  use_online_correlative_scan_matching_ = false;
}
inline bool LocalTrajectoryBuilderOptions3D::use_online_correlative_scan_matching() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.use_online_correlative_scan_matching)
  return use_online_correlative_scan_matching_;
}
inline void LocalTrajectoryBuilderOptions3D::set_use_online_correlative_scan_matching(bool value) {
  
  use_online_correlative_scan_matching_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.use_online_correlative_scan_matching)
}

// optional .cartographer.mapping.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions real_time_correlative_scan_matcher_options = 14;
inline bool LocalTrajectoryBuilderOptions3D::has_real_time_correlative_scan_matcher_options() const {
  return !_is_default_instance_ && real_time_correlative_scan_matcher_options_ != NULL;
}
inline void LocalTrajectoryBuilderOptions3D::clear_real_time_correlative_scan_matcher_options() {
  if (GetArenaNoVirtual() == NULL && real_time_correlative_scan_matcher_options_ != NULL) delete real_time_correlative_scan_matcher_options_;
  real_time_correlative_scan_matcher_options_ = NULL;
}
inline const ::cartographer::mapping::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions& LocalTrajectoryBuilderOptions3D::real_time_correlative_scan_matcher_options() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.real_time_correlative_scan_matcher_options)
  return real_time_correlative_scan_matcher_options_ != NULL ? *real_time_correlative_scan_matcher_options_ : *default_instance_->real_time_correlative_scan_matcher_options_;
}
inline ::cartographer::mapping::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions* LocalTrajectoryBuilderOptions3D::mutable_real_time_correlative_scan_matcher_options() {
  
  if (real_time_correlative_scan_matcher_options_ == NULL) {
    real_time_correlative_scan_matcher_options_ = new ::cartographer::mapping::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.real_time_correlative_scan_matcher_options)
  return real_time_correlative_scan_matcher_options_;
}
inline ::cartographer::mapping::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions* LocalTrajectoryBuilderOptions3D::release_real_time_correlative_scan_matcher_options() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.real_time_correlative_scan_matcher_options)
  
  ::cartographer::mapping::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions* temp = real_time_correlative_scan_matcher_options_;
  real_time_correlative_scan_matcher_options_ = NULL;
  return temp;
}
inline void LocalTrajectoryBuilderOptions3D::set_allocated_real_time_correlative_scan_matcher_options(::cartographer::mapping::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions* real_time_correlative_scan_matcher_options) {
  delete real_time_correlative_scan_matcher_options_;
  real_time_correlative_scan_matcher_options_ = real_time_correlative_scan_matcher_options;
  if (real_time_correlative_scan_matcher_options) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.real_time_correlative_scan_matcher_options)
}

// optional .cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions3D ceres_scan_matcher_options = 6;
inline bool LocalTrajectoryBuilderOptions3D::has_ceres_scan_matcher_options() const {
  return !_is_default_instance_ && ceres_scan_matcher_options_ != NULL;
}
inline void LocalTrajectoryBuilderOptions3D::clear_ceres_scan_matcher_options() {
  if (GetArenaNoVirtual() == NULL && ceres_scan_matcher_options_ != NULL) delete ceres_scan_matcher_options_;
  ceres_scan_matcher_options_ = NULL;
}
inline const ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D& LocalTrajectoryBuilderOptions3D::ceres_scan_matcher_options() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.ceres_scan_matcher_options)
  return ceres_scan_matcher_options_ != NULL ? *ceres_scan_matcher_options_ : *default_instance_->ceres_scan_matcher_options_;
}
inline ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D* LocalTrajectoryBuilderOptions3D::mutable_ceres_scan_matcher_options() {
  
  if (ceres_scan_matcher_options_ == NULL) {
    ceres_scan_matcher_options_ = new ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.ceres_scan_matcher_options)
  return ceres_scan_matcher_options_;
}
inline ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D* LocalTrajectoryBuilderOptions3D::release_ceres_scan_matcher_options() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.ceres_scan_matcher_options)
  
  ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D* temp = ceres_scan_matcher_options_;
  ceres_scan_matcher_options_ = NULL;
  return temp;
}
inline void LocalTrajectoryBuilderOptions3D::set_allocated_ceres_scan_matcher_options(::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D* ceres_scan_matcher_options) {
  delete ceres_scan_matcher_options_;
  ceres_scan_matcher_options_ = ceres_scan_matcher_options;
  if (ceres_scan_matcher_options) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.ceres_scan_matcher_options)
}

// optional .cartographer.mapping.proto.MotionFilterOptions motion_filter_options = 7;
inline bool LocalTrajectoryBuilderOptions3D::has_motion_filter_options() const {
  return !_is_default_instance_ && motion_filter_options_ != NULL;
}
inline void LocalTrajectoryBuilderOptions3D::clear_motion_filter_options() {
  if (GetArenaNoVirtual() == NULL && motion_filter_options_ != NULL) delete motion_filter_options_;
  motion_filter_options_ = NULL;
}
inline const ::cartographer::mapping::proto::MotionFilterOptions& LocalTrajectoryBuilderOptions3D::motion_filter_options() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.motion_filter_options)
  return motion_filter_options_ != NULL ? *motion_filter_options_ : *default_instance_->motion_filter_options_;
}
inline ::cartographer::mapping::proto::MotionFilterOptions* LocalTrajectoryBuilderOptions3D::mutable_motion_filter_options() {
  
  if (motion_filter_options_ == NULL) {
    motion_filter_options_ = new ::cartographer::mapping::proto::MotionFilterOptions;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.motion_filter_options)
  return motion_filter_options_;
}
inline ::cartographer::mapping::proto::MotionFilterOptions* LocalTrajectoryBuilderOptions3D::release_motion_filter_options() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.motion_filter_options)
  
  ::cartographer::mapping::proto::MotionFilterOptions* temp = motion_filter_options_;
  motion_filter_options_ = NULL;
  return temp;
}
inline void LocalTrajectoryBuilderOptions3D::set_allocated_motion_filter_options(::cartographer::mapping::proto::MotionFilterOptions* motion_filter_options) {
  delete motion_filter_options_;
  motion_filter_options_ = motion_filter_options;
  if (motion_filter_options) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.motion_filter_options)
}

// optional double imu_gravity_time_constant = 15;
inline void LocalTrajectoryBuilderOptions3D::clear_imu_gravity_time_constant() {
  imu_gravity_time_constant_ = 0;
}
inline double LocalTrajectoryBuilderOptions3D::imu_gravity_time_constant() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.imu_gravity_time_constant)
  return imu_gravity_time_constant_;
}
inline void LocalTrajectoryBuilderOptions3D::set_imu_gravity_time_constant(double value) {
  
  imu_gravity_time_constant_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.imu_gravity_time_constant)
}

// optional int32 rotational_histogram_size = 17;
inline void LocalTrajectoryBuilderOptions3D::clear_rotational_histogram_size() {
  rotational_histogram_size_ = 0;
}
inline ::google::protobuf::int32 LocalTrajectoryBuilderOptions3D::rotational_histogram_size() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.rotational_histogram_size)
  return rotational_histogram_size_;
}
inline void LocalTrajectoryBuilderOptions3D::set_rotational_histogram_size(::google::protobuf::int32 value) {
  
  rotational_histogram_size_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.rotational_histogram_size)
}

// optional .cartographer.mapping.proto.SubmapsOptions3D submaps_options = 8;
inline bool LocalTrajectoryBuilderOptions3D::has_submaps_options() const {
  return !_is_default_instance_ && submaps_options_ != NULL;
}
inline void LocalTrajectoryBuilderOptions3D::clear_submaps_options() {
  if (GetArenaNoVirtual() == NULL && submaps_options_ != NULL) delete submaps_options_;
  submaps_options_ = NULL;
}
inline const ::cartographer::mapping::proto::SubmapsOptions3D& LocalTrajectoryBuilderOptions3D::submaps_options() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.submaps_options)
  return submaps_options_ != NULL ? *submaps_options_ : *default_instance_->submaps_options_;
}
inline ::cartographer::mapping::proto::SubmapsOptions3D* LocalTrajectoryBuilderOptions3D::mutable_submaps_options() {
  
  if (submaps_options_ == NULL) {
    submaps_options_ = new ::cartographer::mapping::proto::SubmapsOptions3D;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.submaps_options)
  return submaps_options_;
}
inline ::cartographer::mapping::proto::SubmapsOptions3D* LocalTrajectoryBuilderOptions3D::release_submaps_options() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.submaps_options)
  
  ::cartographer::mapping::proto::SubmapsOptions3D* temp = submaps_options_;
  submaps_options_ = NULL;
  return temp;
}
inline void LocalTrajectoryBuilderOptions3D::set_allocated_submaps_options(::cartographer::mapping::proto::SubmapsOptions3D* submaps_options) {
  delete submaps_options_;
  submaps_options_ = submaps_options;
  if (submaps_options) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.LocalTrajectoryBuilderOptions3D.submaps_options)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fmapping_2fproto_2f3d_2flocal_5ftrajectory_5fbuilder_5foptions_5f3d_2eproto__INCLUDED
