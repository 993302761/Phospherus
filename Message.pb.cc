// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Message.proto

#include "Message.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace RTree {
PROTOBUF_CONSTEXPR pointRequest::pointRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.x_)*/0
  , /*decltype(_impl_.y_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct pointRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR pointRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~pointRequestDefaultTypeInternal() {}
  union {
    pointRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 pointRequestDefaultTypeInternal _pointRequest_default_instance_;
PROTOBUF_CONSTEXPR Replay::Replay(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.data_)*/{}
  , /*decltype(_impl_._data_cached_byte_size_)*/{0}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ReplayDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ReplayDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ReplayDefaultTypeInternal() {}
  union {
    Replay _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ReplayDefaultTypeInternal _Replay_default_instance_;
}  // namespace RTree
static ::_pb::Metadata file_level_metadata_Message_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_Message_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_Message_2eproto = nullptr;

const uint32_t TableStruct_Message_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::RTree::pointRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::RTree::pointRequest, _impl_.x_),
  PROTOBUF_FIELD_OFFSET(::RTree::pointRequest, _impl_.y_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::RTree::Replay, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::RTree::Replay, _impl_.data_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::RTree::pointRequest)},
  { 8, -1, -1, sizeof(::RTree::Replay)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::RTree::_pointRequest_default_instance_._instance,
  &::RTree::_Replay_default_instance_._instance,
};

const char descriptor_table_protodef_Message_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rMessage.proto\022\005RTree\"$\n\014pointRequest\022\t"
  "\n\001x\030\n \001(\001\022\t\n\001y\030\024 \001(\001\"\026\n\006Replay\022\014\n\004data\030\n"
  " \003(\0052;\n\007Message\0220\n\010deleteDB\022\023.RTree.poin"
  "tRequest\032\r.RTree.Replay\"\000b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_Message_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_Message_2eproto = {
    false, false, 153, descriptor_table_protodef_Message_2eproto,
    "Message.proto",
    &descriptor_table_Message_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_Message_2eproto::offsets,
    file_level_metadata_Message_2eproto, file_level_enum_descriptors_Message_2eproto,
    file_level_service_descriptors_Message_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_Message_2eproto_getter() {
  return &descriptor_table_Message_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_Message_2eproto(&descriptor_table_Message_2eproto);
namespace RTree {

// ===================================================================

class pointRequest::_Internal {
 public:
};

pointRequest::pointRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:RTree.pointRequest)
}
pointRequest::pointRequest(const pointRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  pointRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.x_){}
    , decltype(_impl_.y_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.x_, &from._impl_.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.y_) -
    reinterpret_cast<char*>(&_impl_.x_)) + sizeof(_impl_.y_));
  // @@protoc_insertion_point(copy_constructor:RTree.pointRequest)
}

inline void pointRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.x_){0}
    , decltype(_impl_.y_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

pointRequest::~pointRequest() {
  // @@protoc_insertion_point(destructor:RTree.pointRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void pointRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void pointRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void pointRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:RTree.pointRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.y_) -
      reinterpret_cast<char*>(&_impl_.x_)) + sizeof(_impl_.y_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* pointRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // double x = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 81)) {
          _impl_.x_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // double y = 20;
      case 20:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 161)) {
          _impl_.y_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* pointRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:RTree.pointRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // double x = 10;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_x = this->_internal_x();
  uint64_t raw_x;
  memcpy(&raw_x, &tmp_x, sizeof(tmp_x));
  if (raw_x != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(10, this->_internal_x(), target);
  }

  // double y = 20;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_y = this->_internal_y();
  uint64_t raw_y;
  memcpy(&raw_y, &tmp_y, sizeof(tmp_y));
  if (raw_y != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(20, this->_internal_y(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:RTree.pointRequest)
  return target;
}

size_t pointRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:RTree.pointRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // double x = 10;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_x = this->_internal_x();
  uint64_t raw_x;
  memcpy(&raw_x, &tmp_x, sizeof(tmp_x));
  if (raw_x != 0) {
    total_size += 1 + 8;
  }

  // double y = 20;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_y = this->_internal_y();
  uint64_t raw_y;
  memcpy(&raw_y, &tmp_y, sizeof(tmp_y));
  if (raw_y != 0) {
    total_size += 2 + 8;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData pointRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    pointRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*pointRequest::GetClassData() const { return &_class_data_; }


void pointRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<pointRequest*>(&to_msg);
  auto& from = static_cast<const pointRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:RTree.pointRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_x = from._internal_x();
  uint64_t raw_x;
  memcpy(&raw_x, &tmp_x, sizeof(tmp_x));
  if (raw_x != 0) {
    _this->_internal_set_x(from._internal_x());
  }
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_y = from._internal_y();
  uint64_t raw_y;
  memcpy(&raw_y, &tmp_y, sizeof(tmp_y));
  if (raw_y != 0) {
    _this->_internal_set_y(from._internal_y());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void pointRequest::CopyFrom(const pointRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:RTree.pointRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool pointRequest::IsInitialized() const {
  return true;
}

void pointRequest::InternalSwap(pointRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(pointRequest, _impl_.y_)
      + sizeof(pointRequest::_impl_.y_)
      - PROTOBUF_FIELD_OFFSET(pointRequest, _impl_.x_)>(
          reinterpret_cast<char*>(&_impl_.x_),
          reinterpret_cast<char*>(&other->_impl_.x_));
}

::PROTOBUF_NAMESPACE_ID::Metadata pointRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Message_2eproto_getter, &descriptor_table_Message_2eproto_once,
      file_level_metadata_Message_2eproto[0]);
}

// ===================================================================

class Replay::_Internal {
 public:
};

Replay::Replay(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:RTree.Replay)
}
Replay::Replay(const Replay& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Replay* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.data_){from._impl_.data_}
    , /*decltype(_impl_._data_cached_byte_size_)*/{0}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:RTree.Replay)
}

inline void Replay::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.data_){arena}
    , /*decltype(_impl_._data_cached_byte_size_)*/{0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Replay::~Replay() {
  // @@protoc_insertion_point(destructor:RTree.Replay)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Replay::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.data_.~RepeatedField();
}

void Replay::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Replay::Clear() {
// @@protoc_insertion_point(message_clear_start:RTree.Replay)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.data_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Replay::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated int32 data = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 82)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_data(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 80) {
          _internal_add_data(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Replay::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:RTree.Replay)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated int32 data = 10;
  {
    int byte_size = _impl_._data_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt32Packed(
          10, _internal_data(), byte_size, target);
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:RTree.Replay)
  return target;
}

size_t Replay::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:RTree.Replay)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int32 data = 10;
  {
    size_t data_size = ::_pbi::WireFormatLite::
      Int32Size(this->_impl_.data_);
    if (data_size > 0) {
      total_size += 1 +
        ::_pbi::WireFormatLite::Int32Size(static_cast<int32_t>(data_size));
    }
    int cached_size = ::_pbi::ToCachedSize(data_size);
    _impl_._data_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Replay::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Replay::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Replay::GetClassData() const { return &_class_data_; }


void Replay::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Replay*>(&to_msg);
  auto& from = static_cast<const Replay&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:RTree.Replay)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.data_.MergeFrom(from._impl_.data_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Replay::CopyFrom(const Replay& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:RTree.Replay)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Replay::IsInitialized() const {
  return true;
}

void Replay::InternalSwap(Replay* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.data_.InternalSwap(&other->_impl_.data_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Replay::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Message_2eproto_getter, &descriptor_table_Message_2eproto_once,
      file_level_metadata_Message_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace RTree
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::RTree::pointRequest*
Arena::CreateMaybeMessage< ::RTree::pointRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::RTree::pointRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::RTree::Replay*
Arena::CreateMaybeMessage< ::RTree::Replay >(Arena* arena) {
  return Arena::CreateMessageInternal< ::RTree::Replay >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
