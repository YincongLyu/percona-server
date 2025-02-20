// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: brpc/streaming_rpc_meta.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_brpc_2fstreaming_5frpc_5fmeta_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_brpc_2fstreaming_5frpc_5fmeta_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_brpc_2fstreaming_5frpc_5fmeta_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_brpc_2fstreaming_5frpc_5fmeta_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_brpc_2fstreaming_5frpc_5fmeta_2eproto;
namespace brpc {
class Feedback;
class FeedbackDefaultTypeInternal;
extern FeedbackDefaultTypeInternal _Feedback_default_instance_;
class StreamFrameMeta;
class StreamFrameMetaDefaultTypeInternal;
extern StreamFrameMetaDefaultTypeInternal _StreamFrameMeta_default_instance_;
class StreamSettings;
class StreamSettingsDefaultTypeInternal;
extern StreamSettingsDefaultTypeInternal _StreamSettings_default_instance_;
}  // namespace brpc
PROTOBUF_NAMESPACE_OPEN
template<> ::brpc::Feedback* Arena::CreateMaybeMessage<::brpc::Feedback>(Arena*);
template<> ::brpc::StreamFrameMeta* Arena::CreateMaybeMessage<::brpc::StreamFrameMeta>(Arena*);
template<> ::brpc::StreamSettings* Arena::CreateMaybeMessage<::brpc::StreamSettings>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace brpc {

enum FrameType : int {
  FRAME_TYPE_UNKNOWN = 0,
  FRAME_TYPE_RST = 1,
  FRAME_TYPE_CLOSE = 2,
  FRAME_TYPE_DATA = 3,
  FRAME_TYPE_FEEDBACK = 4
};
bool FrameType_IsValid(int value);
constexpr FrameType FrameType_MIN = FRAME_TYPE_UNKNOWN;
constexpr FrameType FrameType_MAX = FRAME_TYPE_FEEDBACK;
constexpr int FrameType_ARRAYSIZE = FrameType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* FrameType_descriptor();
template<typename T>
inline const std::string& FrameType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, FrameType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function FrameType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    FrameType_descriptor(), enum_t_value);
}
inline bool FrameType_Parse(
    const std::string& name, FrameType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<FrameType>(
    FrameType_descriptor(), name, value);
}
// ===================================================================

class StreamSettings PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:brpc.StreamSettings) */ {
 public:
  inline StreamSettings() : StreamSettings(nullptr) {};
  virtual ~StreamSettings();

  StreamSettings(const StreamSettings& from);
  StreamSettings(StreamSettings&& from) noexcept
    : StreamSettings() {
    *this = ::std::move(from);
  }

  inline StreamSettings& operator=(const StreamSettings& from) {
    CopyFrom(from);
    return *this;
  }
  inline StreamSettings& operator=(StreamSettings&& from) noexcept {
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
  static const StreamSettings& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StreamSettings* internal_default_instance() {
    return reinterpret_cast<const StreamSettings*>(
               &_StreamSettings_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(StreamSettings& a, StreamSettings& b) {
    a.Swap(&b);
  }
  inline void Swap(StreamSettings* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StreamSettings* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline StreamSettings* New() const final {
    return CreateMaybeMessage<StreamSettings>(nullptr);
  }

  StreamSettings* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<StreamSettings>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const StreamSettings& from);
  void MergeFrom(const StreamSettings& from);
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
  void InternalSwap(StreamSettings* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "brpc.StreamSettings";
  }
  protected:
  explicit StreamSettings(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_brpc_2fstreaming_5frpc_5fmeta_2eproto);
    return ::descriptor_table_brpc_2fstreaming_5frpc_5fmeta_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStreamIdFieldNumber = 1,
    kNeedFeedbackFieldNumber = 2,
    kWritableFieldNumber = 3,
  };
  // required int64 stream_id = 1;
  bool has_stream_id() const;
  private:
  bool _internal_has_stream_id() const;
  public:
  void clear_stream_id();
  ::PROTOBUF_NAMESPACE_ID::int64 stream_id() const;
  void set_stream_id(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_stream_id() const;
  void _internal_set_stream_id(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // optional bool need_feedback = 2 [default = false];
  bool has_need_feedback() const;
  private:
  bool _internal_has_need_feedback() const;
  public:
  void clear_need_feedback();
  bool need_feedback() const;
  void set_need_feedback(bool value);
  private:
  bool _internal_need_feedback() const;
  void _internal_set_need_feedback(bool value);
  public:

  // optional bool writable = 3 [default = false];
  bool has_writable() const;
  private:
  bool _internal_has_writable() const;
  public:
  void clear_writable();
  bool writable() const;
  void set_writable(bool value);
  private:
  bool _internal_writable() const;
  void _internal_set_writable(bool value);
  public:

  // @@protoc_insertion_point(class_scope:brpc.StreamSettings)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int64 stream_id_;
  bool need_feedback_;
  bool writable_;
  friend struct ::TableStruct_brpc_2fstreaming_5frpc_5fmeta_2eproto;
};
// -------------------------------------------------------------------

class StreamFrameMeta PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:brpc.StreamFrameMeta) */ {
 public:
  inline StreamFrameMeta() : StreamFrameMeta(nullptr) {};
  virtual ~StreamFrameMeta();

  StreamFrameMeta(const StreamFrameMeta& from);
  StreamFrameMeta(StreamFrameMeta&& from) noexcept
    : StreamFrameMeta() {
    *this = ::std::move(from);
  }

  inline StreamFrameMeta& operator=(const StreamFrameMeta& from) {
    CopyFrom(from);
    return *this;
  }
  inline StreamFrameMeta& operator=(StreamFrameMeta&& from) noexcept {
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
  static const StreamFrameMeta& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StreamFrameMeta* internal_default_instance() {
    return reinterpret_cast<const StreamFrameMeta*>(
               &_StreamFrameMeta_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(StreamFrameMeta& a, StreamFrameMeta& b) {
    a.Swap(&b);
  }
  inline void Swap(StreamFrameMeta* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StreamFrameMeta* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline StreamFrameMeta* New() const final {
    return CreateMaybeMessage<StreamFrameMeta>(nullptr);
  }

  StreamFrameMeta* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<StreamFrameMeta>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const StreamFrameMeta& from);
  void MergeFrom(const StreamFrameMeta& from);
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
  void InternalSwap(StreamFrameMeta* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "brpc.StreamFrameMeta";
  }
  protected:
  explicit StreamFrameMeta(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_brpc_2fstreaming_5frpc_5fmeta_2eproto);
    return ::descriptor_table_brpc_2fstreaming_5frpc_5fmeta_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFeedbackFieldNumber = 5,
    kStreamIdFieldNumber = 1,
    kSourceStreamIdFieldNumber = 2,
    kFrameTypeFieldNumber = 3,
    kHasContinuationFieldNumber = 4,
  };
  // optional .brpc.Feedback feedback = 5;
  bool has_feedback() const;
  private:
  bool _internal_has_feedback() const;
  public:
  void clear_feedback();
  const ::brpc::Feedback& feedback() const;
  ::brpc::Feedback* release_feedback();
  ::brpc::Feedback* mutable_feedback();
  void set_allocated_feedback(::brpc::Feedback* feedback);
  private:
  const ::brpc::Feedback& _internal_feedback() const;
  ::brpc::Feedback* _internal_mutable_feedback();
  public:
  void unsafe_arena_set_allocated_feedback(
      ::brpc::Feedback* feedback);
  ::brpc::Feedback* unsafe_arena_release_feedback();

  // required int64 stream_id = 1;
  bool has_stream_id() const;
  private:
  bool _internal_has_stream_id() const;
  public:
  void clear_stream_id();
  ::PROTOBUF_NAMESPACE_ID::int64 stream_id() const;
  void set_stream_id(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_stream_id() const;
  void _internal_set_stream_id(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // optional int64 source_stream_id = 2;
  bool has_source_stream_id() const;
  private:
  bool _internal_has_source_stream_id() const;
  public:
  void clear_source_stream_id();
  ::PROTOBUF_NAMESPACE_ID::int64 source_stream_id() const;
  void set_source_stream_id(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_source_stream_id() const;
  void _internal_set_source_stream_id(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // optional .brpc.FrameType frame_type = 3;
  bool has_frame_type() const;
  private:
  bool _internal_has_frame_type() const;
  public:
  void clear_frame_type();
  ::brpc::FrameType frame_type() const;
  void set_frame_type(::brpc::FrameType value);
  private:
  ::brpc::FrameType _internal_frame_type() const;
  void _internal_set_frame_type(::brpc::FrameType value);
  public:

  // optional bool has_continuation = 4;
  bool has_has_continuation() const;
  private:
  bool _internal_has_has_continuation() const;
  public:
  void clear_has_continuation();
  bool has_continuation() const;
  void set_has_continuation(bool value);
  private:
  bool _internal_has_continuation() const;
  void _internal_set_has_continuation(bool value);
  public:

  // @@protoc_insertion_point(class_scope:brpc.StreamFrameMeta)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::brpc::Feedback* feedback_;
  ::PROTOBUF_NAMESPACE_ID::int64 stream_id_;
  ::PROTOBUF_NAMESPACE_ID::int64 source_stream_id_;
  int frame_type_;
  bool has_continuation_;
  friend struct ::TableStruct_brpc_2fstreaming_5frpc_5fmeta_2eproto;
};
// -------------------------------------------------------------------

class Feedback PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:brpc.Feedback) */ {
 public:
  inline Feedback() : Feedback(nullptr) {};
  virtual ~Feedback();

  Feedback(const Feedback& from);
  Feedback(Feedback&& from) noexcept
    : Feedback() {
    *this = ::std::move(from);
  }

  inline Feedback& operator=(const Feedback& from) {
    CopyFrom(from);
    return *this;
  }
  inline Feedback& operator=(Feedback&& from) noexcept {
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
  static const Feedback& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Feedback* internal_default_instance() {
    return reinterpret_cast<const Feedback*>(
               &_Feedback_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Feedback& a, Feedback& b) {
    a.Swap(&b);
  }
  inline void Swap(Feedback* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Feedback* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Feedback* New() const final {
    return CreateMaybeMessage<Feedback>(nullptr);
  }

  Feedback* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Feedback>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Feedback& from);
  void MergeFrom(const Feedback& from);
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
  void InternalSwap(Feedback* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "brpc.Feedback";
  }
  protected:
  explicit Feedback(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_brpc_2fstreaming_5frpc_5fmeta_2eproto);
    return ::descriptor_table_brpc_2fstreaming_5frpc_5fmeta_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kConsumedSizeFieldNumber = 1,
  };
  // optional int64 consumed_size = 1;
  bool has_consumed_size() const;
  private:
  bool _internal_has_consumed_size() const;
  public:
  void clear_consumed_size();
  ::PROTOBUF_NAMESPACE_ID::int64 consumed_size() const;
  void set_consumed_size(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_consumed_size() const;
  void _internal_set_consumed_size(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // @@protoc_insertion_point(class_scope:brpc.Feedback)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int64 consumed_size_;
  friend struct ::TableStruct_brpc_2fstreaming_5frpc_5fmeta_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StreamSettings

// required int64 stream_id = 1;
inline bool StreamSettings::_internal_has_stream_id() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool StreamSettings::has_stream_id() const {
  return _internal_has_stream_id();
}
inline void StreamSettings::clear_stream_id() {
  stream_id_ = PROTOBUF_LONGLONG(0);
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 StreamSettings::_internal_stream_id() const {
  return stream_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 StreamSettings::stream_id() const {
  // @@protoc_insertion_point(field_get:brpc.StreamSettings.stream_id)
  return _internal_stream_id();
}
inline void StreamSettings::_internal_set_stream_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _has_bits_[0] |= 0x00000001u;
  stream_id_ = value;
}
inline void StreamSettings::set_stream_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_stream_id(value);
  // @@protoc_insertion_point(field_set:brpc.StreamSettings.stream_id)
}

// optional bool need_feedback = 2 [default = false];
inline bool StreamSettings::_internal_has_need_feedback() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool StreamSettings::has_need_feedback() const {
  return _internal_has_need_feedback();
}
inline void StreamSettings::clear_need_feedback() {
  need_feedback_ = false;
  _has_bits_[0] &= ~0x00000002u;
}
inline bool StreamSettings::_internal_need_feedback() const {
  return need_feedback_;
}
inline bool StreamSettings::need_feedback() const {
  // @@protoc_insertion_point(field_get:brpc.StreamSettings.need_feedback)
  return _internal_need_feedback();
}
inline void StreamSettings::_internal_set_need_feedback(bool value) {
  _has_bits_[0] |= 0x00000002u;
  need_feedback_ = value;
}
inline void StreamSettings::set_need_feedback(bool value) {
  _internal_set_need_feedback(value);
  // @@protoc_insertion_point(field_set:brpc.StreamSettings.need_feedback)
}

// optional bool writable = 3 [default = false];
inline bool StreamSettings::_internal_has_writable() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool StreamSettings::has_writable() const {
  return _internal_has_writable();
}
inline void StreamSettings::clear_writable() {
  writable_ = false;
  _has_bits_[0] &= ~0x00000004u;
}
inline bool StreamSettings::_internal_writable() const {
  return writable_;
}
inline bool StreamSettings::writable() const {
  // @@protoc_insertion_point(field_get:brpc.StreamSettings.writable)
  return _internal_writable();
}
inline void StreamSettings::_internal_set_writable(bool value) {
  _has_bits_[0] |= 0x00000004u;
  writable_ = value;
}
inline void StreamSettings::set_writable(bool value) {
  _internal_set_writable(value);
  // @@protoc_insertion_point(field_set:brpc.StreamSettings.writable)
}

// -------------------------------------------------------------------

// StreamFrameMeta

// required int64 stream_id = 1;
inline bool StreamFrameMeta::_internal_has_stream_id() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool StreamFrameMeta::has_stream_id() const {
  return _internal_has_stream_id();
}
inline void StreamFrameMeta::clear_stream_id() {
  stream_id_ = PROTOBUF_LONGLONG(0);
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 StreamFrameMeta::_internal_stream_id() const {
  return stream_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 StreamFrameMeta::stream_id() const {
  // @@protoc_insertion_point(field_get:brpc.StreamFrameMeta.stream_id)
  return _internal_stream_id();
}
inline void StreamFrameMeta::_internal_set_stream_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _has_bits_[0] |= 0x00000002u;
  stream_id_ = value;
}
inline void StreamFrameMeta::set_stream_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_stream_id(value);
  // @@protoc_insertion_point(field_set:brpc.StreamFrameMeta.stream_id)
}

// optional int64 source_stream_id = 2;
inline bool StreamFrameMeta::_internal_has_source_stream_id() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool StreamFrameMeta::has_source_stream_id() const {
  return _internal_has_source_stream_id();
}
inline void StreamFrameMeta::clear_source_stream_id() {
  source_stream_id_ = PROTOBUF_LONGLONG(0);
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 StreamFrameMeta::_internal_source_stream_id() const {
  return source_stream_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 StreamFrameMeta::source_stream_id() const {
  // @@protoc_insertion_point(field_get:brpc.StreamFrameMeta.source_stream_id)
  return _internal_source_stream_id();
}
inline void StreamFrameMeta::_internal_set_source_stream_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _has_bits_[0] |= 0x00000004u;
  source_stream_id_ = value;
}
inline void StreamFrameMeta::set_source_stream_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_source_stream_id(value);
  // @@protoc_insertion_point(field_set:brpc.StreamFrameMeta.source_stream_id)
}

// optional .brpc.FrameType frame_type = 3;
inline bool StreamFrameMeta::_internal_has_frame_type() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool StreamFrameMeta::has_frame_type() const {
  return _internal_has_frame_type();
}
inline void StreamFrameMeta::clear_frame_type() {
  frame_type_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::brpc::FrameType StreamFrameMeta::_internal_frame_type() const {
  return static_cast< ::brpc::FrameType >(frame_type_);
}
inline ::brpc::FrameType StreamFrameMeta::frame_type() const {
  // @@protoc_insertion_point(field_get:brpc.StreamFrameMeta.frame_type)
  return _internal_frame_type();
}
inline void StreamFrameMeta::_internal_set_frame_type(::brpc::FrameType value) {
  assert(::brpc::FrameType_IsValid(value));
  _has_bits_[0] |= 0x00000008u;
  frame_type_ = value;
}
inline void StreamFrameMeta::set_frame_type(::brpc::FrameType value) {
  _internal_set_frame_type(value);
  // @@protoc_insertion_point(field_set:brpc.StreamFrameMeta.frame_type)
}

// optional bool has_continuation = 4;
inline bool StreamFrameMeta::_internal_has_has_continuation() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool StreamFrameMeta::has_has_continuation() const {
  return _internal_has_has_continuation();
}
inline void StreamFrameMeta::clear_has_continuation() {
  has_continuation_ = false;
  _has_bits_[0] &= ~0x00000010u;
}
inline bool StreamFrameMeta::_internal_has_continuation() const {
  return has_continuation_;
}
inline bool StreamFrameMeta::has_continuation() const {
  // @@protoc_insertion_point(field_get:brpc.StreamFrameMeta.has_continuation)
  return _internal_has_continuation();
}
inline void StreamFrameMeta::_internal_set_has_continuation(bool value) {
  _has_bits_[0] |= 0x00000010u;
  has_continuation_ = value;
}
inline void StreamFrameMeta::set_has_continuation(bool value) {
  _internal_set_has_continuation(value);
  // @@protoc_insertion_point(field_set:brpc.StreamFrameMeta.has_continuation)
}

// optional .brpc.Feedback feedback = 5;
inline bool StreamFrameMeta::_internal_has_feedback() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || feedback_ != nullptr);
  return value;
}
inline bool StreamFrameMeta::has_feedback() const {
  return _internal_has_feedback();
}
inline void StreamFrameMeta::clear_feedback() {
  if (feedback_ != nullptr) feedback_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::brpc::Feedback& StreamFrameMeta::_internal_feedback() const {
  const ::brpc::Feedback* p = feedback_;
  return p != nullptr ? *p : *reinterpret_cast<const ::brpc::Feedback*>(
      &::brpc::_Feedback_default_instance_);
}
inline const ::brpc::Feedback& StreamFrameMeta::feedback() const {
  // @@protoc_insertion_point(field_get:brpc.StreamFrameMeta.feedback)
  return _internal_feedback();
}
inline void StreamFrameMeta::unsafe_arena_set_allocated_feedback(
    ::brpc::Feedback* feedback) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(feedback_);
  }
  feedback_ = feedback;
  if (feedback) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:brpc.StreamFrameMeta.feedback)
}
inline ::brpc::Feedback* StreamFrameMeta::release_feedback() {
  auto temp = unsafe_arena_release_feedback();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::brpc::Feedback* StreamFrameMeta::unsafe_arena_release_feedback() {
  // @@protoc_insertion_point(field_release:brpc.StreamFrameMeta.feedback)
  _has_bits_[0] &= ~0x00000001u;
  ::brpc::Feedback* temp = feedback_;
  feedback_ = nullptr;
  return temp;
}
inline ::brpc::Feedback* StreamFrameMeta::_internal_mutable_feedback() {
  _has_bits_[0] |= 0x00000001u;
  if (feedback_ == nullptr) {
    auto* p = CreateMaybeMessage<::brpc::Feedback>(GetArena());
    feedback_ = p;
  }
  return feedback_;
}
inline ::brpc::Feedback* StreamFrameMeta::mutable_feedback() {
  // @@protoc_insertion_point(field_mutable:brpc.StreamFrameMeta.feedback)
  return _internal_mutable_feedback();
}
inline void StreamFrameMeta::set_allocated_feedback(::brpc::Feedback* feedback) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete feedback_;
  }
  if (feedback) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      ::PROTOBUF_NAMESPACE_ID::Arena::GetArena(feedback);
    if (message_arena != submessage_arena) {
      feedback = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, feedback, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  feedback_ = feedback;
  // @@protoc_insertion_point(field_set_allocated:brpc.StreamFrameMeta.feedback)
}

// -------------------------------------------------------------------

// Feedback

// optional int64 consumed_size = 1;
inline bool Feedback::_internal_has_consumed_size() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Feedback::has_consumed_size() const {
  return _internal_has_consumed_size();
}
inline void Feedback::clear_consumed_size() {
  consumed_size_ = PROTOBUF_LONGLONG(0);
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Feedback::_internal_consumed_size() const {
  return consumed_size_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Feedback::consumed_size() const {
  // @@protoc_insertion_point(field_get:brpc.Feedback.consumed_size)
  return _internal_consumed_size();
}
inline void Feedback::_internal_set_consumed_size(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _has_bits_[0] |= 0x00000001u;
  consumed_size_ = value;
}
inline void Feedback::set_consumed_size(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_consumed_size(value);
  // @@protoc_insertion_point(field_set:brpc.Feedback.consumed_size)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace brpc

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::brpc::FrameType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::brpc::FrameType>() {
  return ::brpc::FrameType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_brpc_2fstreaming_5frpc_5fmeta_2eproto
