// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: brpc/policy/sofa_pbrpc_meta.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012003 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto;
namespace brpc {
namespace policy {
class SofaRpcMeta;
class SofaRpcMetaDefaultTypeInternal;
extern SofaRpcMetaDefaultTypeInternal _SofaRpcMeta_default_instance_;
}  // namespace policy
}  // namespace brpc
PROTOBUF_NAMESPACE_OPEN
template<> ::brpc::policy::SofaRpcMeta* Arena::CreateMaybeMessage<::brpc::policy::SofaRpcMeta>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace brpc {
namespace policy {

enum SofaRpcMeta_Type : int {
  SofaRpcMeta_Type_REQUEST = 0,
  SofaRpcMeta_Type_RESPONSE = 1
};
bool SofaRpcMeta_Type_IsValid(int value);
constexpr SofaRpcMeta_Type SofaRpcMeta_Type_Type_MIN = SofaRpcMeta_Type_REQUEST;
constexpr SofaRpcMeta_Type SofaRpcMeta_Type_Type_MAX = SofaRpcMeta_Type_RESPONSE;
constexpr int SofaRpcMeta_Type_Type_ARRAYSIZE = SofaRpcMeta_Type_Type_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SofaRpcMeta_Type_descriptor();
template<typename T>
inline const std::string& SofaRpcMeta_Type_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SofaRpcMeta_Type>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SofaRpcMeta_Type_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    SofaRpcMeta_Type_descriptor(), enum_t_value);
}
inline bool SofaRpcMeta_Type_Parse(
    const std::string& name, SofaRpcMeta_Type* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<SofaRpcMeta_Type>(
    SofaRpcMeta_Type_descriptor(), name, value);
}
enum SofaCompressType : int {
  SOFA_COMPRESS_TYPE_NONE = 0,
  SOFA_COMPRESS_TYPE_GZIP = 1,
  SOFA_COMPRESS_TYPE_ZLIB = 2,
  SOFA_COMPRESS_TYPE_SNAPPY = 3,
  SOFA_COMPRESS_TYPE_LZ4 = 4
};
bool SofaCompressType_IsValid(int value);
constexpr SofaCompressType SofaCompressType_MIN = SOFA_COMPRESS_TYPE_NONE;
constexpr SofaCompressType SofaCompressType_MAX = SOFA_COMPRESS_TYPE_LZ4;
constexpr int SofaCompressType_ARRAYSIZE = SofaCompressType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SofaCompressType_descriptor();
template<typename T>
inline const std::string& SofaCompressType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SofaCompressType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SofaCompressType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    SofaCompressType_descriptor(), enum_t_value);
}
inline bool SofaCompressType_Parse(
    const std::string& name, SofaCompressType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<SofaCompressType>(
    SofaCompressType_descriptor(), name, value);
}
// ===================================================================

class SofaRpcMeta PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:brpc.policy.SofaRpcMeta) */ {
 public:
  inline SofaRpcMeta() : SofaRpcMeta(nullptr) {};
  virtual ~SofaRpcMeta();

  SofaRpcMeta(const SofaRpcMeta& from);
  SofaRpcMeta(SofaRpcMeta&& from) noexcept
    : SofaRpcMeta() {
    *this = ::std::move(from);
  }

  inline SofaRpcMeta& operator=(const SofaRpcMeta& from) {
    CopyFrom(from);
    return *this;
  }
  inline SofaRpcMeta& operator=(SofaRpcMeta&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const SofaRpcMeta& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SofaRpcMeta* internal_default_instance() {
    return reinterpret_cast<const SofaRpcMeta*>(
               &_SofaRpcMeta_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SofaRpcMeta& a, SofaRpcMeta& b) {
    a.Swap(&b);
  }
  inline void Swap(SofaRpcMeta* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SofaRpcMeta* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SofaRpcMeta* New() const final {
    return CreateMaybeMessage<SofaRpcMeta>(nullptr);
  }

  SofaRpcMeta* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SofaRpcMeta>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SofaRpcMeta& from);
  void MergeFrom(const SofaRpcMeta& from);
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
  void InternalSwap(SofaRpcMeta* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "brpc.policy.SofaRpcMeta";
  }
  protected:
  explicit SofaRpcMeta(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto);
    return ::descriptor_table_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef SofaRpcMeta_Type Type;
  static constexpr Type REQUEST =
    SofaRpcMeta_Type_REQUEST;
  static constexpr Type RESPONSE =
    SofaRpcMeta_Type_RESPONSE;
  static inline bool Type_IsValid(int value) {
    return SofaRpcMeta_Type_IsValid(value);
  }
  static constexpr Type Type_MIN =
    SofaRpcMeta_Type_Type_MIN;
  static constexpr Type Type_MAX =
    SofaRpcMeta_Type_Type_MAX;
  static constexpr int Type_ARRAYSIZE =
    SofaRpcMeta_Type_Type_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Type_descriptor() {
    return SofaRpcMeta_Type_descriptor();
  }
  template<typename T>
  static inline const std::string& Type_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Type>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Type_Name.");
    return SofaRpcMeta_Type_Name(enum_t_value);
  }
  static inline bool Type_Parse(const std::string& name,
      Type* value) {
    return SofaRpcMeta_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kMethodFieldNumber = 100,
    kReasonFieldNumber = 202,
    kSequenceIdFieldNumber = 2,
    kExpectedResponseCompressTypeFieldNumber = 301,
    kTypeFieldNumber = 1,
    kFailedFieldNumber = 200,
    kErrorCodeFieldNumber = 201,
    kCompressTypeFieldNumber = 300,
  };
  // optional string method = 100;
  bool has_method() const;
  private:
  bool _internal_has_method() const;
  public:
  void clear_method();
  const std::string& method() const;
  void set_method(const std::string& value);
  void set_method(std::string&& value);
  void set_method(const char* value);
  void set_method(const char* value, size_t size);
  std::string* mutable_method();
  std::string* release_method();
  void set_allocated_method(std::string* method);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_method();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_method(
      std::string* method);
  private:
  const std::string& _internal_method() const;
  void _internal_set_method(const std::string& value);
  std::string* _internal_mutable_method();
  public:

  // optional string reason = 202;
  bool has_reason() const;
  private:
  bool _internal_has_reason() const;
  public:
  void clear_reason();
  const std::string& reason() const;
  void set_reason(const std::string& value);
  void set_reason(std::string&& value);
  void set_reason(const char* value);
  void set_reason(const char* value, size_t size);
  std::string* mutable_reason();
  std::string* release_reason();
  void set_allocated_reason(std::string* reason);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_reason();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_reason(
      std::string* reason);
  private:
  const std::string& _internal_reason() const;
  void _internal_set_reason(const std::string& value);
  std::string* _internal_mutable_reason();
  public:

  // required uint64 sequence_id = 2;
  bool has_sequence_id() const;
  private:
  bool _internal_has_sequence_id() const;
  public:
  void clear_sequence_id();
  ::PROTOBUF_NAMESPACE_ID::uint64 sequence_id() const;
  void set_sequence_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_sequence_id() const;
  void _internal_set_sequence_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // optional .brpc.policy.SofaCompressType expected_response_compress_type = 301;
  bool has_expected_response_compress_type() const;
  private:
  bool _internal_has_expected_response_compress_type() const;
  public:
  void clear_expected_response_compress_type();
  ::brpc::policy::SofaCompressType expected_response_compress_type() const;
  void set_expected_response_compress_type(::brpc::policy::SofaCompressType value);
  private:
  ::brpc::policy::SofaCompressType _internal_expected_response_compress_type() const;
  void _internal_set_expected_response_compress_type(::brpc::policy::SofaCompressType value);
  public:

  // required .brpc.policy.SofaRpcMeta.Type type = 1;
  bool has_type() const;
  private:
  bool _internal_has_type() const;
  public:
  void clear_type();
  ::brpc::policy::SofaRpcMeta_Type type() const;
  void set_type(::brpc::policy::SofaRpcMeta_Type value);
  private:
  ::brpc::policy::SofaRpcMeta_Type _internal_type() const;
  void _internal_set_type(::brpc::policy::SofaRpcMeta_Type value);
  public:

  // optional bool failed = 200;
  bool has_failed() const;
  private:
  bool _internal_has_failed() const;
  public:
  void clear_failed();
  bool failed() const;
  void set_failed(bool value);
  private:
  bool _internal_failed() const;
  void _internal_set_failed(bool value);
  public:

  // optional int32 error_code = 201;
  bool has_error_code() const;
  private:
  bool _internal_has_error_code() const;
  public:
  void clear_error_code();
  ::PROTOBUF_NAMESPACE_ID::int32 error_code() const;
  void set_error_code(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_error_code() const;
  void _internal_set_error_code(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // optional .brpc.policy.SofaCompressType compress_type = 300;
  bool has_compress_type() const;
  private:
  bool _internal_has_compress_type() const;
  public:
  void clear_compress_type();
  ::brpc::policy::SofaCompressType compress_type() const;
  void set_compress_type(::brpc::policy::SofaCompressType value);
  private:
  ::brpc::policy::SofaCompressType _internal_compress_type() const;
  void _internal_set_compress_type(::brpc::policy::SofaCompressType value);
  public:

  // @@protoc_insertion_point(class_scope:brpc.policy.SofaRpcMeta)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr method_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr reason_;
  ::PROTOBUF_NAMESPACE_ID::uint64 sequence_id_;
  int expected_response_compress_type_;
  int type_;
  bool failed_;
  ::PROTOBUF_NAMESPACE_ID::int32 error_code_;
  int compress_type_;
  friend struct ::TableStruct_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SofaRpcMeta

// required .brpc.policy.SofaRpcMeta.Type type = 1;
inline bool SofaRpcMeta::_internal_has_type() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool SofaRpcMeta::has_type() const {
  return _internal_has_type();
}
inline void SofaRpcMeta::clear_type() {
  type_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::brpc::policy::SofaRpcMeta_Type SofaRpcMeta::_internal_type() const {
  return static_cast< ::brpc::policy::SofaRpcMeta_Type >(type_);
}
inline ::brpc::policy::SofaRpcMeta_Type SofaRpcMeta::type() const {
  // @@protoc_insertion_point(field_get:brpc.policy.SofaRpcMeta.type)
  return _internal_type();
}
inline void SofaRpcMeta::_internal_set_type(::brpc::policy::SofaRpcMeta_Type value) {
  assert(::brpc::policy::SofaRpcMeta_Type_IsValid(value));
  _has_bits_[0] |= 0x00000010u;
  type_ = value;
}
inline void SofaRpcMeta::set_type(::brpc::policy::SofaRpcMeta_Type value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:brpc.policy.SofaRpcMeta.type)
}

// required uint64 sequence_id = 2;
inline bool SofaRpcMeta::_internal_has_sequence_id() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool SofaRpcMeta::has_sequence_id() const {
  return _internal_has_sequence_id();
}
inline void SofaRpcMeta::clear_sequence_id() {
  sequence_id_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 SofaRpcMeta::_internal_sequence_id() const {
  return sequence_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 SofaRpcMeta::sequence_id() const {
  // @@protoc_insertion_point(field_get:brpc.policy.SofaRpcMeta.sequence_id)
  return _internal_sequence_id();
}
inline void SofaRpcMeta::_internal_set_sequence_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000004u;
  sequence_id_ = value;
}
inline void SofaRpcMeta::set_sequence_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_sequence_id(value);
  // @@protoc_insertion_point(field_set:brpc.policy.SofaRpcMeta.sequence_id)
}

// optional string method = 100;
inline bool SofaRpcMeta::_internal_has_method() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool SofaRpcMeta::has_method() const {
  return _internal_has_method();
}
inline void SofaRpcMeta::clear_method() {
  method_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& SofaRpcMeta::method() const {
  // @@protoc_insertion_point(field_get:brpc.policy.SofaRpcMeta.method)
  return _internal_method();
}
inline void SofaRpcMeta::set_method(const std::string& value) {
  _internal_set_method(value);
  // @@protoc_insertion_point(field_set:brpc.policy.SofaRpcMeta.method)
}
inline std::string* SofaRpcMeta::mutable_method() {
  // @@protoc_insertion_point(field_mutable:brpc.policy.SofaRpcMeta.method)
  return _internal_mutable_method();
}
inline const std::string& SofaRpcMeta::_internal_method() const {
  return method_.Get();
}
inline void SofaRpcMeta::_internal_set_method(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  method_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void SofaRpcMeta::set_method(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  method_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:brpc.policy.SofaRpcMeta.method)
}
inline void SofaRpcMeta::set_method(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  method_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:brpc.policy.SofaRpcMeta.method)
}
inline void SofaRpcMeta::set_method(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000001u;
  method_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:brpc.policy.SofaRpcMeta.method)
}
inline std::string* SofaRpcMeta::_internal_mutable_method() {
  _has_bits_[0] |= 0x00000001u;
  return method_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* SofaRpcMeta::release_method() {
  // @@protoc_insertion_point(field_release:brpc.policy.SofaRpcMeta.method)
  if (!_internal_has_method()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return method_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SofaRpcMeta::set_allocated_method(std::string* method) {
  if (method != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  method_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), method,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:brpc.policy.SofaRpcMeta.method)
}
inline std::string* SofaRpcMeta::unsafe_arena_release_method() {
  // @@protoc_insertion_point(field_unsafe_arena_release:brpc.policy.SofaRpcMeta.method)
  GOOGLE_DCHECK(GetArena() != nullptr);
  _has_bits_[0] &= ~0x00000001u;
  return method_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void SofaRpcMeta::unsafe_arena_set_allocated_method(
    std::string* method) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (method != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  method_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      method, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:brpc.policy.SofaRpcMeta.method)
}

// optional bool failed = 200;
inline bool SofaRpcMeta::_internal_has_failed() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool SofaRpcMeta::has_failed() const {
  return _internal_has_failed();
}
inline void SofaRpcMeta::clear_failed() {
  failed_ = false;
  _has_bits_[0] &= ~0x00000020u;
}
inline bool SofaRpcMeta::_internal_failed() const {
  return failed_;
}
inline bool SofaRpcMeta::failed() const {
  // @@protoc_insertion_point(field_get:brpc.policy.SofaRpcMeta.failed)
  return _internal_failed();
}
inline void SofaRpcMeta::_internal_set_failed(bool value) {
  _has_bits_[0] |= 0x00000020u;
  failed_ = value;
}
inline void SofaRpcMeta::set_failed(bool value) {
  _internal_set_failed(value);
  // @@protoc_insertion_point(field_set:brpc.policy.SofaRpcMeta.failed)
}

// optional int32 error_code = 201;
inline bool SofaRpcMeta::_internal_has_error_code() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool SofaRpcMeta::has_error_code() const {
  return _internal_has_error_code();
}
inline void SofaRpcMeta::clear_error_code() {
  error_code_ = 0;
  _has_bits_[0] &= ~0x00000040u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SofaRpcMeta::_internal_error_code() const {
  return error_code_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SofaRpcMeta::error_code() const {
  // @@protoc_insertion_point(field_get:brpc.policy.SofaRpcMeta.error_code)
  return _internal_error_code();
}
inline void SofaRpcMeta::_internal_set_error_code(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000040u;
  error_code_ = value;
}
inline void SofaRpcMeta::set_error_code(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_error_code(value);
  // @@protoc_insertion_point(field_set:brpc.policy.SofaRpcMeta.error_code)
}

// optional string reason = 202;
inline bool SofaRpcMeta::_internal_has_reason() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool SofaRpcMeta::has_reason() const {
  return _internal_has_reason();
}
inline void SofaRpcMeta::clear_reason() {
  reason_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& SofaRpcMeta::reason() const {
  // @@protoc_insertion_point(field_get:brpc.policy.SofaRpcMeta.reason)
  return _internal_reason();
}
inline void SofaRpcMeta::set_reason(const std::string& value) {
  _internal_set_reason(value);
  // @@protoc_insertion_point(field_set:brpc.policy.SofaRpcMeta.reason)
}
inline std::string* SofaRpcMeta::mutable_reason() {
  // @@protoc_insertion_point(field_mutable:brpc.policy.SofaRpcMeta.reason)
  return _internal_mutable_reason();
}
inline const std::string& SofaRpcMeta::_internal_reason() const {
  return reason_.Get();
}
inline void SofaRpcMeta::_internal_set_reason(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  reason_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void SofaRpcMeta::set_reason(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  reason_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:brpc.policy.SofaRpcMeta.reason)
}
inline void SofaRpcMeta::set_reason(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  reason_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:brpc.policy.SofaRpcMeta.reason)
}
inline void SofaRpcMeta::set_reason(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000002u;
  reason_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:brpc.policy.SofaRpcMeta.reason)
}
inline std::string* SofaRpcMeta::_internal_mutable_reason() {
  _has_bits_[0] |= 0x00000002u;
  return reason_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* SofaRpcMeta::release_reason() {
  // @@protoc_insertion_point(field_release:brpc.policy.SofaRpcMeta.reason)
  if (!_internal_has_reason()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return reason_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SofaRpcMeta::set_allocated_reason(std::string* reason) {
  if (reason != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  reason_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), reason,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:brpc.policy.SofaRpcMeta.reason)
}
inline std::string* SofaRpcMeta::unsafe_arena_release_reason() {
  // @@protoc_insertion_point(field_unsafe_arena_release:brpc.policy.SofaRpcMeta.reason)
  GOOGLE_DCHECK(GetArena() != nullptr);
  _has_bits_[0] &= ~0x00000002u;
  return reason_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void SofaRpcMeta::unsafe_arena_set_allocated_reason(
    std::string* reason) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (reason != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  reason_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      reason, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:brpc.policy.SofaRpcMeta.reason)
}

// optional .brpc.policy.SofaCompressType compress_type = 300;
inline bool SofaRpcMeta::_internal_has_compress_type() const {
  bool value = (_has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool SofaRpcMeta::has_compress_type() const {
  return _internal_has_compress_type();
}
inline void SofaRpcMeta::clear_compress_type() {
  compress_type_ = 0;
  _has_bits_[0] &= ~0x00000080u;
}
inline ::brpc::policy::SofaCompressType SofaRpcMeta::_internal_compress_type() const {
  return static_cast< ::brpc::policy::SofaCompressType >(compress_type_);
}
inline ::brpc::policy::SofaCompressType SofaRpcMeta::compress_type() const {
  // @@protoc_insertion_point(field_get:brpc.policy.SofaRpcMeta.compress_type)
  return _internal_compress_type();
}
inline void SofaRpcMeta::_internal_set_compress_type(::brpc::policy::SofaCompressType value) {
  assert(::brpc::policy::SofaCompressType_IsValid(value));
  _has_bits_[0] |= 0x00000080u;
  compress_type_ = value;
}
inline void SofaRpcMeta::set_compress_type(::brpc::policy::SofaCompressType value) {
  _internal_set_compress_type(value);
  // @@protoc_insertion_point(field_set:brpc.policy.SofaRpcMeta.compress_type)
}

// optional .brpc.policy.SofaCompressType expected_response_compress_type = 301;
inline bool SofaRpcMeta::_internal_has_expected_response_compress_type() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool SofaRpcMeta::has_expected_response_compress_type() const {
  return _internal_has_expected_response_compress_type();
}
inline void SofaRpcMeta::clear_expected_response_compress_type() {
  expected_response_compress_type_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::brpc::policy::SofaCompressType SofaRpcMeta::_internal_expected_response_compress_type() const {
  return static_cast< ::brpc::policy::SofaCompressType >(expected_response_compress_type_);
}
inline ::brpc::policy::SofaCompressType SofaRpcMeta::expected_response_compress_type() const {
  // @@protoc_insertion_point(field_get:brpc.policy.SofaRpcMeta.expected_response_compress_type)
  return _internal_expected_response_compress_type();
}
inline void SofaRpcMeta::_internal_set_expected_response_compress_type(::brpc::policy::SofaCompressType value) {
  assert(::brpc::policy::SofaCompressType_IsValid(value));
  _has_bits_[0] |= 0x00000008u;
  expected_response_compress_type_ = value;
}
inline void SofaRpcMeta::set_expected_response_compress_type(::brpc::policy::SofaCompressType value) {
  _internal_set_expected_response_compress_type(value);
  // @@protoc_insertion_point(field_set:brpc.policy.SofaRpcMeta.expected_response_compress_type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace policy
}  // namespace brpc

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::brpc::policy::SofaRpcMeta_Type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::brpc::policy::SofaRpcMeta_Type>() {
  return ::brpc::policy::SofaRpcMeta_Type_descriptor();
}
template <> struct is_proto_enum< ::brpc::policy::SofaCompressType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::brpc::policy::SofaCompressType>() {
  return ::brpc::policy::SofaCompressType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto
