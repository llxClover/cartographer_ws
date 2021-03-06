// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/3d/hybrid_grid.proto

#ifndef PROTOBUF_cartographer_2fmapping_2fproto_2f3d_2fhybrid_5fgrid_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fmapping_2fproto_2f3d_2fhybrid_5fgrid_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping {
namespace proto {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_cartographer_2fmapping_2fproto_2f3d_2fhybrid_5fgrid_2eproto();
void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2f3d_2fhybrid_5fgrid_2eproto();
void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2f3d_2fhybrid_5fgrid_2eproto();

class HybridGrid;

// ===================================================================

class HybridGrid : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.HybridGrid) */ {
 public:
  HybridGrid();
  virtual ~HybridGrid();

  HybridGrid(const HybridGrid& from);

  inline HybridGrid& operator=(const HybridGrid& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const HybridGrid& default_instance();

  void Swap(HybridGrid* other);

  // implements Message ----------------------------------------------

  inline HybridGrid* New() const { return New(NULL); }

  HybridGrid* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HybridGrid& from);
  void MergeFrom(const HybridGrid& from);
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
  void InternalSwap(HybridGrid* other);
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

  // optional float resolution = 1;
  void clear_resolution();
  static const int kResolutionFieldNumber = 1;
  float resolution() const;
  void set_resolution(float value);

  // repeated sint32 x_indices = 3;
  int x_indices_size() const;
  void clear_x_indices();
  static const int kXIndicesFieldNumber = 3;
  ::google::protobuf::int32 x_indices(int index) const;
  void set_x_indices(int index, ::google::protobuf::int32 value);
  void add_x_indices(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      x_indices() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_x_indices();

  // repeated sint32 y_indices = 4;
  int y_indices_size() const;
  void clear_y_indices();
  static const int kYIndicesFieldNumber = 4;
  ::google::protobuf::int32 y_indices(int index) const;
  void set_y_indices(int index, ::google::protobuf::int32 value);
  void add_y_indices(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      y_indices() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_y_indices();

  // repeated sint32 z_indices = 5;
  int z_indices_size() const;
  void clear_z_indices();
  static const int kZIndicesFieldNumber = 5;
  ::google::protobuf::int32 z_indices(int index) const;
  void set_z_indices(int index, ::google::protobuf::int32 value);
  void add_z_indices(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      z_indices() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_z_indices();

  // repeated int32 values = 6;
  int values_size() const;
  void clear_values();
  static const int kValuesFieldNumber = 6;
  ::google::protobuf::int32 values(int index) const;
  void set_values(int index, ::google::protobuf::int32 value);
  void add_values(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      values() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_values();

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.HybridGrid)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > x_indices_;
  mutable int _x_indices_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > y_indices_;
  mutable int _y_indices_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > z_indices_;
  mutable int _z_indices_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > values_;
  mutable int _values_cached_byte_size_;
  float resolution_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2f3d_2fhybrid_5fgrid_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2f3d_2fhybrid_5fgrid_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2f3d_2fhybrid_5fgrid_2eproto();

  void InitAsDefaultInstance();
  static HybridGrid* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// HybridGrid

// optional float resolution = 1;
inline void HybridGrid::clear_resolution() {
  resolution_ = 0;
}
inline float HybridGrid::resolution() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.HybridGrid.resolution)
  return resolution_;
}
inline void HybridGrid::set_resolution(float value) {
  
  resolution_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.HybridGrid.resolution)
}

// repeated sint32 x_indices = 3;
inline int HybridGrid::x_indices_size() const {
  return x_indices_.size();
}
inline void HybridGrid::clear_x_indices() {
  x_indices_.Clear();
}
inline ::google::protobuf::int32 HybridGrid::x_indices(int index) const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.HybridGrid.x_indices)
  return x_indices_.Get(index);
}
inline void HybridGrid::set_x_indices(int index, ::google::protobuf::int32 value) {
  x_indices_.Set(index, value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.HybridGrid.x_indices)
}
inline void HybridGrid::add_x_indices(::google::protobuf::int32 value) {
  x_indices_.Add(value);
  // @@protoc_insertion_point(field_add:cartographer.mapping.proto.HybridGrid.x_indices)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
HybridGrid::x_indices() const {
  // @@protoc_insertion_point(field_list:cartographer.mapping.proto.HybridGrid.x_indices)
  return x_indices_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
HybridGrid::mutable_x_indices() {
  // @@protoc_insertion_point(field_mutable_list:cartographer.mapping.proto.HybridGrid.x_indices)
  return &x_indices_;
}

// repeated sint32 y_indices = 4;
inline int HybridGrid::y_indices_size() const {
  return y_indices_.size();
}
inline void HybridGrid::clear_y_indices() {
  y_indices_.Clear();
}
inline ::google::protobuf::int32 HybridGrid::y_indices(int index) const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.HybridGrid.y_indices)
  return y_indices_.Get(index);
}
inline void HybridGrid::set_y_indices(int index, ::google::protobuf::int32 value) {
  y_indices_.Set(index, value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.HybridGrid.y_indices)
}
inline void HybridGrid::add_y_indices(::google::protobuf::int32 value) {
  y_indices_.Add(value);
  // @@protoc_insertion_point(field_add:cartographer.mapping.proto.HybridGrid.y_indices)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
HybridGrid::y_indices() const {
  // @@protoc_insertion_point(field_list:cartographer.mapping.proto.HybridGrid.y_indices)
  return y_indices_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
HybridGrid::mutable_y_indices() {
  // @@protoc_insertion_point(field_mutable_list:cartographer.mapping.proto.HybridGrid.y_indices)
  return &y_indices_;
}

// repeated sint32 z_indices = 5;
inline int HybridGrid::z_indices_size() const {
  return z_indices_.size();
}
inline void HybridGrid::clear_z_indices() {
  z_indices_.Clear();
}
inline ::google::protobuf::int32 HybridGrid::z_indices(int index) const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.HybridGrid.z_indices)
  return z_indices_.Get(index);
}
inline void HybridGrid::set_z_indices(int index, ::google::protobuf::int32 value) {
  z_indices_.Set(index, value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.HybridGrid.z_indices)
}
inline void HybridGrid::add_z_indices(::google::protobuf::int32 value) {
  z_indices_.Add(value);
  // @@protoc_insertion_point(field_add:cartographer.mapping.proto.HybridGrid.z_indices)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
HybridGrid::z_indices() const {
  // @@protoc_insertion_point(field_list:cartographer.mapping.proto.HybridGrid.z_indices)
  return z_indices_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
HybridGrid::mutable_z_indices() {
  // @@protoc_insertion_point(field_mutable_list:cartographer.mapping.proto.HybridGrid.z_indices)
  return &z_indices_;
}

// repeated int32 values = 6;
inline int HybridGrid::values_size() const {
  return values_.size();
}
inline void HybridGrid::clear_values() {
  values_.Clear();
}
inline ::google::protobuf::int32 HybridGrid::values(int index) const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.HybridGrid.values)
  return values_.Get(index);
}
inline void HybridGrid::set_values(int index, ::google::protobuf::int32 value) {
  values_.Set(index, value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.HybridGrid.values)
}
inline void HybridGrid::add_values(::google::protobuf::int32 value) {
  values_.Add(value);
  // @@protoc_insertion_point(field_add:cartographer.mapping.proto.HybridGrid.values)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
HybridGrid::values() const {
  // @@protoc_insertion_point(field_list:cartographer.mapping.proto.HybridGrid.values)
  return values_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
HybridGrid::mutable_values() {
  // @@protoc_insertion_point(field_mutable_list:cartographer.mapping.proto.HybridGrid.values)
  return &values_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fmapping_2fproto_2f3d_2fhybrid_5fgrid_2eproto__INCLUDED
