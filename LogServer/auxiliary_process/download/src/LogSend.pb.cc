// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LogSend.proto

#include "LogSend.pb.h"

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
namespace ik {
class LogSendRequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<LogSendRequest> _instance;
} _LogSendRequest_default_instance_;
class LogSendReponseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<LogSendReponse> _instance;
} _LogSendReponse_default_instance_;
}  // namespace ik
static void InitDefaultsscc_info_LogSendReponse_LogSend_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ik::_LogSendReponse_default_instance_;
    new (ptr) ::ik::LogSendReponse();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ik::LogSendReponse::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_LogSendReponse_LogSend_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_LogSendReponse_LogSend_2eproto}, {}};

static void InitDefaultsscc_info_LogSendRequest_LogSend_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ik::_LogSendRequest_default_instance_;
    new (ptr) ::ik::LogSendRequest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ik::LogSendRequest::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_LogSendRequest_LogSend_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_LogSendRequest_LogSend_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_LogSend_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_LogSend_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_LogSend_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_LogSend_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ik::LogSendRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ik::LogSendRequest, node_name_),
  PROTOBUF_FIELD_OFFSET(::ik::LogSendRequest, time_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ik::LogSendReponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ik::LogSendReponse, serial_),
  PROTOBUF_FIELD_OFFSET(::ik::LogSendReponse, is_end_),
  PROTOBUF_FIELD_OFFSET(::ik::LogSendReponse, msg_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ik::LogSendRequest)},
  { 7, -1, sizeof(::ik::LogSendReponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::ik::_LogSendRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::ik::_LogSendReponse_default_instance_),
};

const char descriptor_table_protodef_LogSend_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rLogSend.proto\022\002ik\"1\n\016LogSendRequest\022\021\n"
  "\tnode_name\030\001 \001(\014\022\014\n\004time\030\002 \001(\014\"=\n\016LogSen"
  "dReponse\022\016\n\006serial\030\001 \001(\005\022\016\n\006is_end\030\002 \001(\010"
  "\022\013\n\003msg\030\003 \001(\014B\003\200\001\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_LogSend_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_LogSend_2eproto_sccs[2] = {
  &scc_info_LogSendReponse_LogSend_2eproto.base,
  &scc_info_LogSendRequest_LogSend_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_LogSend_2eproto_once;
static bool descriptor_table_LogSend_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_LogSend_2eproto = {
  &descriptor_table_LogSend_2eproto_initialized, descriptor_table_protodef_LogSend_2eproto, "LogSend.proto", 146,
  &descriptor_table_LogSend_2eproto_once, descriptor_table_LogSend_2eproto_sccs, descriptor_table_LogSend_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_LogSend_2eproto::offsets,
  file_level_metadata_LogSend_2eproto, 2, file_level_enum_descriptors_LogSend_2eproto, file_level_service_descriptors_LogSend_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_LogSend_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_LogSend_2eproto), true);
namespace ik {

// ===================================================================

void LogSendRequest::InitAsDefaultInstance() {
}
class LogSendRequest::_Internal {
 public:
};

LogSendRequest::LogSendRequest()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ik.LogSendRequest)
}
LogSendRequest::LogSendRequest(const LogSendRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  node_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_node_name().empty()) {
    node_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.node_name_);
  }
  time_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_time().empty()) {
    time_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.time_);
  }
  // @@protoc_insertion_point(copy_constructor:ik.LogSendRequest)
}

void LogSendRequest::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_LogSendRequest_LogSend_2eproto.base);
  node_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  time_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

LogSendRequest::~LogSendRequest() {
  // @@protoc_insertion_point(destructor:ik.LogSendRequest)
  SharedDtor();
}

void LogSendRequest::SharedDtor() {
  node_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  time_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void LogSendRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const LogSendRequest& LogSendRequest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_LogSendRequest_LogSend_2eproto.base);
  return *internal_default_instance();
}


void LogSendRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:ik.LogSendRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  node_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  time_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

const char* LogSendRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // bytes node_name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_node_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes time = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_time();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* LogSendRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ik.LogSendRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes node_name = 1;
  if (this->node_name().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_node_name(), target);
  }

  // bytes time = 2;
  if (this->time().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_time(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ik.LogSendRequest)
  return target;
}

size_t LogSendRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ik.LogSendRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes node_name = 1;
  if (this->node_name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_node_name());
  }

  // bytes time = 2;
  if (this->time().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_time());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LogSendRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ik.LogSendRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const LogSendRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<LogSendRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ik.LogSendRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ik.LogSendRequest)
    MergeFrom(*source);
  }
}

void LogSendRequest::MergeFrom(const LogSendRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ik.LogSendRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.node_name().size() > 0) {

    node_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.node_name_);
  }
  if (from.time().size() > 0) {

    time_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.time_);
  }
}

void LogSendRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ik.LogSendRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LogSendRequest::CopyFrom(const LogSendRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ik.LogSendRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LogSendRequest::IsInitialized() const {
  return true;
}

void LogSendRequest::InternalSwap(LogSendRequest* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  node_name_.Swap(&other->node_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  time_.Swap(&other->time_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata LogSendRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void LogSendReponse::InitAsDefaultInstance() {
}
class LogSendReponse::_Internal {
 public:
};

LogSendReponse::LogSendReponse()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ik.LogSendReponse)
}
LogSendReponse::LogSendReponse(const LogSendReponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  msg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_msg().empty()) {
    msg_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.msg_);
  }
  ::memcpy(&serial_, &from.serial_,
    static_cast<size_t>(reinterpret_cast<char*>(&is_end_) -
    reinterpret_cast<char*>(&serial_)) + sizeof(is_end_));
  // @@protoc_insertion_point(copy_constructor:ik.LogSendReponse)
}

void LogSendReponse::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_LogSendReponse_LogSend_2eproto.base);
  msg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&serial_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&is_end_) -
      reinterpret_cast<char*>(&serial_)) + sizeof(is_end_));
}

LogSendReponse::~LogSendReponse() {
  // @@protoc_insertion_point(destructor:ik.LogSendReponse)
  SharedDtor();
}

void LogSendReponse::SharedDtor() {
  msg_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void LogSendReponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const LogSendReponse& LogSendReponse::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_LogSendReponse_LogSend_2eproto.base);
  return *internal_default_instance();
}


void LogSendReponse::Clear() {
// @@protoc_insertion_point(message_clear_start:ik.LogSendReponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  msg_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&serial_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&is_end_) -
      reinterpret_cast<char*>(&serial_)) + sizeof(is_end_));
  _internal_metadata_.Clear();
}

const char* LogSendReponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 serial = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          serial_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool is_end = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          is_end_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes msg = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_msg();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* LogSendReponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ik.LogSendReponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 serial = 1;
  if (this->serial() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_serial(), target);
  }

  // bool is_end = 2;
  if (this->is_end() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(2, this->_internal_is_end(), target);
  }

  // bytes msg = 3;
  if (this->msg().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_msg(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ik.LogSendReponse)
  return target;
}

size_t LogSendReponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ik.LogSendReponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes msg = 3;
  if (this->msg().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_msg());
  }

  // int32 serial = 1;
  if (this->serial() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_serial());
  }

  // bool is_end = 2;
  if (this->is_end() != 0) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LogSendReponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ik.LogSendReponse)
  GOOGLE_DCHECK_NE(&from, this);
  const LogSendReponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<LogSendReponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ik.LogSendReponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ik.LogSendReponse)
    MergeFrom(*source);
  }
}

void LogSendReponse::MergeFrom(const LogSendReponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ik.LogSendReponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.msg().size() > 0) {

    msg_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.msg_);
  }
  if (from.serial() != 0) {
    _internal_set_serial(from._internal_serial());
  }
  if (from.is_end() != 0) {
    _internal_set_is_end(from._internal_is_end());
  }
}

void LogSendReponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ik.LogSendReponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LogSendReponse::CopyFrom(const LogSendReponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ik.LogSendReponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LogSendReponse::IsInitialized() const {
  return true;
}

void LogSendReponse::InternalSwap(LogSendReponse* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  msg_.Swap(&other->msg_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(serial_, other->serial_);
  swap(is_end_, other->is_end_);
}

::PROTOBUF_NAMESPACE_ID::Metadata LogSendReponse::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace ik
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::ik::LogSendRequest* Arena::CreateMaybeMessage< ::ik::LogSendRequest >(Arena* arena) {
  return Arena::CreateInternal< ::ik::LogSendRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::ik::LogSendReponse* Arena::CreateMaybeMessage< ::ik::LogSendReponse >(Arena* arena) {
  return Arena::CreateInternal< ::ik::LogSendReponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
