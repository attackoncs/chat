// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: OfflineServer.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_OfflineServer_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_OfflineServer_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_OfflineServer_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_OfflineServer_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_OfflineServer_2eproto;
namespace ik_OfflineServer {
class ReadOfflineRequest;
class ReadOfflineRequestDefaultTypeInternal;
extern ReadOfflineRequestDefaultTypeInternal _ReadOfflineRequest_default_instance_;
class ReadOfflineResponse;
class ReadOfflineResponseDefaultTypeInternal;
extern ReadOfflineResponseDefaultTypeInternal _ReadOfflineResponse_default_instance_;
class Request;
class RequestDefaultTypeInternal;
extern RequestDefaultTypeInternal _Request_default_instance_;
class WriteOfflineRequest;
class WriteOfflineRequestDefaultTypeInternal;
extern WriteOfflineRequestDefaultTypeInternal _WriteOfflineRequest_default_instance_;
}  // namespace ik_OfflineServer
PROTOBUF_NAMESPACE_OPEN
template<> ::ik_OfflineServer::ReadOfflineRequest* Arena::CreateMaybeMessage<::ik_OfflineServer::ReadOfflineRequest>(Arena*);
template<> ::ik_OfflineServer::ReadOfflineResponse* Arena::CreateMaybeMessage<::ik_OfflineServer::ReadOfflineResponse>(Arena*);
template<> ::ik_OfflineServer::Request* Arena::CreateMaybeMessage<::ik_OfflineServer::Request>(Arena*);
template<> ::ik_OfflineServer::WriteOfflineRequest* Arena::CreateMaybeMessage<::ik_OfflineServer::WriteOfflineRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ik_OfflineServer {

// ===================================================================

class Request :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ik_OfflineServer.Request) */ {
 public:
  Request();
  virtual ~Request();

  Request(const Request& from);
  Request(Request&& from) noexcept
    : Request() {
    *this = ::std::move(from);
  }

  inline Request& operator=(const Request& from) {
    CopyFrom(from);
    return *this;
  }
  inline Request& operator=(Request&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Request& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Request* internal_default_instance() {
    return reinterpret_cast<const Request*>(
               &_Request_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Request& a, Request& b) {
    a.Swap(&b);
  }
  inline void Swap(Request* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Request* New() const final {
    return CreateMaybeMessage<Request>(nullptr);
  }

  Request* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Request>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Request& from);
  void MergeFrom(const Request& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Request* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ik_OfflineServer.Request";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_OfflineServer_2eproto);
    return ::descriptor_table_OfflineServer_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTypeFieldNumber = 1,
    kRequestMsgFieldNumber = 2,
  };
  // bytes type = 1;
  void clear_type();
  const std::string& type() const;
  void set_type(const std::string& value);
  void set_type(std::string&& value);
  void set_type(const char* value);
  void set_type(const void* value, size_t size);
  std::string* mutable_type();
  std::string* release_type();
  void set_allocated_type(std::string* type);
  private:
  const std::string& _internal_type() const;
  void _internal_set_type(const std::string& value);
  std::string* _internal_mutable_type();
  public:

  // bytes request_msg = 2;
  void clear_request_msg();
  const std::string& request_msg() const;
  void set_request_msg(const std::string& value);
  void set_request_msg(std::string&& value);
  void set_request_msg(const char* value);
  void set_request_msg(const void* value, size_t size);
  std::string* mutable_request_msg();
  std::string* release_request_msg();
  void set_allocated_request_msg(std::string* request_msg);
  private:
  const std::string& _internal_request_msg() const;
  void _internal_set_request_msg(const std::string& value);
  std::string* _internal_mutable_request_msg();
  public:

  // @@protoc_insertion_point(class_scope:ik_OfflineServer.Request)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr type_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr request_msg_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_OfflineServer_2eproto;
};
// -------------------------------------------------------------------

class WriteOfflineRequest :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ik_OfflineServer.WriteOfflineRequest) */ {
 public:
  WriteOfflineRequest();
  virtual ~WriteOfflineRequest();

  WriteOfflineRequest(const WriteOfflineRequest& from);
  WriteOfflineRequest(WriteOfflineRequest&& from) noexcept
    : WriteOfflineRequest() {
    *this = ::std::move(from);
  }

  inline WriteOfflineRequest& operator=(const WriteOfflineRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline WriteOfflineRequest& operator=(WriteOfflineRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const WriteOfflineRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const WriteOfflineRequest* internal_default_instance() {
    return reinterpret_cast<const WriteOfflineRequest*>(
               &_WriteOfflineRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(WriteOfflineRequest& a, WriteOfflineRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(WriteOfflineRequest* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline WriteOfflineRequest* New() const final {
    return CreateMaybeMessage<WriteOfflineRequest>(nullptr);
  }

  WriteOfflineRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<WriteOfflineRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const WriteOfflineRequest& from);
  void MergeFrom(const WriteOfflineRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(WriteOfflineRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ik_OfflineServer.WriteOfflineRequest";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_OfflineServer_2eproto);
    return ::descriptor_table_OfflineServer_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMsgFieldNumber = 2,
    kFriendIdFieldNumber = 1,
  };
  // bytes msg = 2;
  void clear_msg();
  const std::string& msg() const;
  void set_msg(const std::string& value);
  void set_msg(std::string&& value);
  void set_msg(const char* value);
  void set_msg(const void* value, size_t size);
  std::string* mutable_msg();
  std::string* release_msg();
  void set_allocated_msg(std::string* msg);
  private:
  const std::string& _internal_msg() const;
  void _internal_set_msg(const std::string& value);
  std::string* _internal_mutable_msg();
  public:

  // int32 friend_id = 1;
  void clear_friend_id();
  ::PROTOBUF_NAMESPACE_ID::int32 friend_id() const;
  void set_friend_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_friend_id() const;
  void _internal_set_friend_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:ik_OfflineServer.WriteOfflineRequest)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr msg_;
  ::PROTOBUF_NAMESPACE_ID::int32 friend_id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_OfflineServer_2eproto;
};
// -------------------------------------------------------------------

class ReadOfflineRequest :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ik_OfflineServer.ReadOfflineRequest) */ {
 public:
  ReadOfflineRequest();
  virtual ~ReadOfflineRequest();

  ReadOfflineRequest(const ReadOfflineRequest& from);
  ReadOfflineRequest(ReadOfflineRequest&& from) noexcept
    : ReadOfflineRequest() {
    *this = ::std::move(from);
  }

  inline ReadOfflineRequest& operator=(const ReadOfflineRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline ReadOfflineRequest& operator=(ReadOfflineRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ReadOfflineRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ReadOfflineRequest* internal_default_instance() {
    return reinterpret_cast<const ReadOfflineRequest*>(
               &_ReadOfflineRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(ReadOfflineRequest& a, ReadOfflineRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(ReadOfflineRequest* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ReadOfflineRequest* New() const final {
    return CreateMaybeMessage<ReadOfflineRequest>(nullptr);
  }

  ReadOfflineRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ReadOfflineRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ReadOfflineRequest& from);
  void MergeFrom(const ReadOfflineRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ReadOfflineRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ik_OfflineServer.ReadOfflineRequest";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_OfflineServer_2eproto);
    return ::descriptor_table_OfflineServer_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMyidFieldNumber = 1,
  };
  // int32 myid = 1;
  void clear_myid();
  ::PROTOBUF_NAMESPACE_ID::int32 myid() const;
  void set_myid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_myid() const;
  void _internal_set_myid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:ik_OfflineServer.ReadOfflineRequest)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::int32 myid_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_OfflineServer_2eproto;
};
// -------------------------------------------------------------------

class ReadOfflineResponse :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ik_OfflineServer.ReadOfflineResponse) */ {
 public:
  ReadOfflineResponse();
  virtual ~ReadOfflineResponse();

  ReadOfflineResponse(const ReadOfflineResponse& from);
  ReadOfflineResponse(ReadOfflineResponse&& from) noexcept
    : ReadOfflineResponse() {
    *this = ::std::move(from);
  }

  inline ReadOfflineResponse& operator=(const ReadOfflineResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline ReadOfflineResponse& operator=(ReadOfflineResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ReadOfflineResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ReadOfflineResponse* internal_default_instance() {
    return reinterpret_cast<const ReadOfflineResponse*>(
               &_ReadOfflineResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(ReadOfflineResponse& a, ReadOfflineResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(ReadOfflineResponse* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ReadOfflineResponse* New() const final {
    return CreateMaybeMessage<ReadOfflineResponse>(nullptr);
  }

  ReadOfflineResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ReadOfflineResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ReadOfflineResponse& from);
  void MergeFrom(const ReadOfflineResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ReadOfflineResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ik_OfflineServer.ReadOfflineResponse";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_OfflineServer_2eproto);
    return ::descriptor_table_OfflineServer_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMsgFieldNumber = 1,
  };
  // repeated bytes msg = 1;
  int msg_size() const;
  private:
  int _internal_msg_size() const;
  public:
  void clear_msg();
  const std::string& msg(int index) const;
  std::string* mutable_msg(int index);
  void set_msg(int index, const std::string& value);
  void set_msg(int index, std::string&& value);
  void set_msg(int index, const char* value);
  void set_msg(int index, const void* value, size_t size);
  std::string* add_msg();
  void add_msg(const std::string& value);
  void add_msg(std::string&& value);
  void add_msg(const char* value);
  void add_msg(const void* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& msg() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_msg();
  private:
  const std::string& _internal_msg(int index) const;
  std::string* _internal_add_msg();
  public:

  // @@protoc_insertion_point(class_scope:ik_OfflineServer.ReadOfflineResponse)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> msg_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_OfflineServer_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Request

// bytes type = 1;
inline void Request::clear_type() {
  type_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Request::type() const {
  // @@protoc_insertion_point(field_get:ik_OfflineServer.Request.type)
  return _internal_type();
}
inline void Request::set_type(const std::string& value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:ik_OfflineServer.Request.type)
}
inline std::string* Request::mutable_type() {
  // @@protoc_insertion_point(field_mutable:ik_OfflineServer.Request.type)
  return _internal_mutable_type();
}
inline const std::string& Request::_internal_type() const {
  return type_.GetNoArena();
}
inline void Request::_internal_set_type(const std::string& value) {
  
  type_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Request::set_type(std::string&& value) {
  
  type_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ik_OfflineServer.Request.type)
}
inline void Request::set_type(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  type_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ik_OfflineServer.Request.type)
}
inline void Request::set_type(const void* value, size_t size) {
  
  type_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ik_OfflineServer.Request.type)
}
inline std::string* Request::_internal_mutable_type() {
  
  return type_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Request::release_type() {
  // @@protoc_insertion_point(field_release:ik_OfflineServer.Request.type)
  
  return type_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_allocated_type(std::string* type) {
  if (type != nullptr) {
    
  } else {
    
  }
  type_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), type);
  // @@protoc_insertion_point(field_set_allocated:ik_OfflineServer.Request.type)
}

// bytes request_msg = 2;
inline void Request::clear_request_msg() {
  request_msg_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Request::request_msg() const {
  // @@protoc_insertion_point(field_get:ik_OfflineServer.Request.request_msg)
  return _internal_request_msg();
}
inline void Request::set_request_msg(const std::string& value) {
  _internal_set_request_msg(value);
  // @@protoc_insertion_point(field_set:ik_OfflineServer.Request.request_msg)
}
inline std::string* Request::mutable_request_msg() {
  // @@protoc_insertion_point(field_mutable:ik_OfflineServer.Request.request_msg)
  return _internal_mutable_request_msg();
}
inline const std::string& Request::_internal_request_msg() const {
  return request_msg_.GetNoArena();
}
inline void Request::_internal_set_request_msg(const std::string& value) {
  
  request_msg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Request::set_request_msg(std::string&& value) {
  
  request_msg_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ik_OfflineServer.Request.request_msg)
}
inline void Request::set_request_msg(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  request_msg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ik_OfflineServer.Request.request_msg)
}
inline void Request::set_request_msg(const void* value, size_t size) {
  
  request_msg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ik_OfflineServer.Request.request_msg)
}
inline std::string* Request::_internal_mutable_request_msg() {
  
  return request_msg_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Request::release_request_msg() {
  // @@protoc_insertion_point(field_release:ik_OfflineServer.Request.request_msg)
  
  return request_msg_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_allocated_request_msg(std::string* request_msg) {
  if (request_msg != nullptr) {
    
  } else {
    
  }
  request_msg_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), request_msg);
  // @@protoc_insertion_point(field_set_allocated:ik_OfflineServer.Request.request_msg)
}

// -------------------------------------------------------------------

// WriteOfflineRequest

// int32 friend_id = 1;
inline void WriteOfflineRequest::clear_friend_id() {
  friend_id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 WriteOfflineRequest::_internal_friend_id() const {
  return friend_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 WriteOfflineRequest::friend_id() const {
  // @@protoc_insertion_point(field_get:ik_OfflineServer.WriteOfflineRequest.friend_id)
  return _internal_friend_id();
}
inline void WriteOfflineRequest::_internal_set_friend_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  friend_id_ = value;
}
inline void WriteOfflineRequest::set_friend_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_friend_id(value);
  // @@protoc_insertion_point(field_set:ik_OfflineServer.WriteOfflineRequest.friend_id)
}

// bytes msg = 2;
inline void WriteOfflineRequest::clear_msg() {
  msg_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& WriteOfflineRequest::msg() const {
  // @@protoc_insertion_point(field_get:ik_OfflineServer.WriteOfflineRequest.msg)
  return _internal_msg();
}
inline void WriteOfflineRequest::set_msg(const std::string& value) {
  _internal_set_msg(value);
  // @@protoc_insertion_point(field_set:ik_OfflineServer.WriteOfflineRequest.msg)
}
inline std::string* WriteOfflineRequest::mutable_msg() {
  // @@protoc_insertion_point(field_mutable:ik_OfflineServer.WriteOfflineRequest.msg)
  return _internal_mutable_msg();
}
inline const std::string& WriteOfflineRequest::_internal_msg() const {
  return msg_.GetNoArena();
}
inline void WriteOfflineRequest::_internal_set_msg(const std::string& value) {
  
  msg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void WriteOfflineRequest::set_msg(std::string&& value) {
  
  msg_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ik_OfflineServer.WriteOfflineRequest.msg)
}
inline void WriteOfflineRequest::set_msg(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  msg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ik_OfflineServer.WriteOfflineRequest.msg)
}
inline void WriteOfflineRequest::set_msg(const void* value, size_t size) {
  
  msg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ik_OfflineServer.WriteOfflineRequest.msg)
}
inline std::string* WriteOfflineRequest::_internal_mutable_msg() {
  
  return msg_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* WriteOfflineRequest::release_msg() {
  // @@protoc_insertion_point(field_release:ik_OfflineServer.WriteOfflineRequest.msg)
  
  return msg_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void WriteOfflineRequest::set_allocated_msg(std::string* msg) {
  if (msg != nullptr) {
    
  } else {
    
  }
  msg_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), msg);
  // @@protoc_insertion_point(field_set_allocated:ik_OfflineServer.WriteOfflineRequest.msg)
}

// -------------------------------------------------------------------

// ReadOfflineRequest

// int32 myid = 1;
inline void ReadOfflineRequest::clear_myid() {
  myid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ReadOfflineRequest::_internal_myid() const {
  return myid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ReadOfflineRequest::myid() const {
  // @@protoc_insertion_point(field_get:ik_OfflineServer.ReadOfflineRequest.myid)
  return _internal_myid();
}
inline void ReadOfflineRequest::_internal_set_myid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  myid_ = value;
}
inline void ReadOfflineRequest::set_myid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_myid(value);
  // @@protoc_insertion_point(field_set:ik_OfflineServer.ReadOfflineRequest.myid)
}

// -------------------------------------------------------------------

// ReadOfflineResponse

// repeated bytes msg = 1;
inline int ReadOfflineResponse::_internal_msg_size() const {
  return msg_.size();
}
inline int ReadOfflineResponse::msg_size() const {
  return _internal_msg_size();
}
inline void ReadOfflineResponse::clear_msg() {
  msg_.Clear();
}
inline std::string* ReadOfflineResponse::add_msg() {
  // @@protoc_insertion_point(field_add_mutable:ik_OfflineServer.ReadOfflineResponse.msg)
  return _internal_add_msg();
}
inline const std::string& ReadOfflineResponse::_internal_msg(int index) const {
  return msg_.Get(index);
}
inline const std::string& ReadOfflineResponse::msg(int index) const {
  // @@protoc_insertion_point(field_get:ik_OfflineServer.ReadOfflineResponse.msg)
  return _internal_msg(index);
}
inline std::string* ReadOfflineResponse::mutable_msg(int index) {
  // @@protoc_insertion_point(field_mutable:ik_OfflineServer.ReadOfflineResponse.msg)
  return msg_.Mutable(index);
}
inline void ReadOfflineResponse::set_msg(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:ik_OfflineServer.ReadOfflineResponse.msg)
  msg_.Mutable(index)->assign(value);
}
inline void ReadOfflineResponse::set_msg(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:ik_OfflineServer.ReadOfflineResponse.msg)
  msg_.Mutable(index)->assign(std::move(value));
}
inline void ReadOfflineResponse::set_msg(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  msg_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:ik_OfflineServer.ReadOfflineResponse.msg)
}
inline void ReadOfflineResponse::set_msg(int index, const void* value, size_t size) {
  msg_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:ik_OfflineServer.ReadOfflineResponse.msg)
}
inline std::string* ReadOfflineResponse::_internal_add_msg() {
  return msg_.Add();
}
inline void ReadOfflineResponse::add_msg(const std::string& value) {
  msg_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:ik_OfflineServer.ReadOfflineResponse.msg)
}
inline void ReadOfflineResponse::add_msg(std::string&& value) {
  msg_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:ik_OfflineServer.ReadOfflineResponse.msg)
}
inline void ReadOfflineResponse::add_msg(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  msg_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:ik_OfflineServer.ReadOfflineResponse.msg)
}
inline void ReadOfflineResponse::add_msg(const void* value, size_t size) {
  msg_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:ik_OfflineServer.ReadOfflineResponse.msg)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
ReadOfflineResponse::msg() const {
  // @@protoc_insertion_point(field_list:ik_OfflineServer.ReadOfflineResponse.msg)
  return msg_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
ReadOfflineResponse::mutable_msg() {
  // @@protoc_insertion_point(field_mutable_list:ik_OfflineServer.ReadOfflineResponse.msg)
  return &msg_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace ik_OfflineServer

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_OfflineServer_2eproto
