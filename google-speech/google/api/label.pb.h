// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/label.proto

#ifndef PROTOBUF_google_2fapi_2flabel_2eproto__INCLUDED
#define PROTOBUF_google_2fapi_2flabel_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace api {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_google_2fapi_2flabel_2eproto();
void protobuf_InitDefaults_google_2fapi_2flabel_2eproto();
void protobuf_AssignDesc_google_2fapi_2flabel_2eproto();
void protobuf_ShutdownFile_google_2fapi_2flabel_2eproto();

class LabelDescriptor;

enum LabelDescriptor_ValueType {
  LabelDescriptor_ValueType_STRING = 0,
  LabelDescriptor_ValueType_BOOL = 1,
  LabelDescriptor_ValueType_INT64 = 2,
  LabelDescriptor_ValueType_LabelDescriptor_ValueType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  LabelDescriptor_ValueType_LabelDescriptor_ValueType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool LabelDescriptor_ValueType_IsValid(int value);
const LabelDescriptor_ValueType LabelDescriptor_ValueType_ValueType_MIN = LabelDescriptor_ValueType_STRING;
const LabelDescriptor_ValueType LabelDescriptor_ValueType_ValueType_MAX = LabelDescriptor_ValueType_INT64;
const int LabelDescriptor_ValueType_ValueType_ARRAYSIZE = LabelDescriptor_ValueType_ValueType_MAX + 1;

const ::google::protobuf::EnumDescriptor* LabelDescriptor_ValueType_descriptor();
inline const ::std::string& LabelDescriptor_ValueType_Name(LabelDescriptor_ValueType value) {
  return ::google::protobuf::internal::NameOfEnum(
    LabelDescriptor_ValueType_descriptor(), value);
}
inline bool LabelDescriptor_ValueType_Parse(
    const ::std::string& name, LabelDescriptor_ValueType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<LabelDescriptor_ValueType>(
    LabelDescriptor_ValueType_descriptor(), name, value);
}
// ===================================================================

class LabelDescriptor : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.LabelDescriptor) */ {
 public:
  LabelDescriptor();
  virtual ~LabelDescriptor();

  LabelDescriptor(const LabelDescriptor& from);

  inline LabelDescriptor& operator=(const LabelDescriptor& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const LabelDescriptor& default_instance();

  static const LabelDescriptor* internal_default_instance();

  void UnsafeArenaSwap(LabelDescriptor* other);
  void Swap(LabelDescriptor* other);

  // implements Message ----------------------------------------------

  inline LabelDescriptor* New() const { return New(NULL); }

  LabelDescriptor* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LabelDescriptor& from);
  void MergeFrom(const LabelDescriptor& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
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
  void InternalSwap(LabelDescriptor* other);
  void UnsafeMergeFrom(const LabelDescriptor& from);
  protected:
  explicit LabelDescriptor(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
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

  typedef LabelDescriptor_ValueType ValueType;
  static const ValueType STRING =
    LabelDescriptor_ValueType_STRING;
  static const ValueType BOOL =
    LabelDescriptor_ValueType_BOOL;
  static const ValueType INT64 =
    LabelDescriptor_ValueType_INT64;
  static inline bool ValueType_IsValid(int value) {
    return LabelDescriptor_ValueType_IsValid(value);
  }
  static const ValueType ValueType_MIN =
    LabelDescriptor_ValueType_ValueType_MIN;
  static const ValueType ValueType_MAX =
    LabelDescriptor_ValueType_ValueType_MAX;
  static const int ValueType_ARRAYSIZE =
    LabelDescriptor_ValueType_ValueType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  ValueType_descriptor() {
    return LabelDescriptor_ValueType_descriptor();
  }
  static inline const ::std::string& ValueType_Name(ValueType value) {
    return LabelDescriptor_ValueType_Name(value);
  }
  static inline bool ValueType_Parse(const ::std::string& name,
      ValueType* value) {
    return LabelDescriptor_ValueType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional string key = 1;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);
  ::std::string* unsafe_arena_release_key();
  void unsafe_arena_set_allocated_key(
      ::std::string* key);

  // optional .google.api.LabelDescriptor.ValueType value_type = 2;
  void clear_value_type();
  static const int kValueTypeFieldNumber = 2;
  ::google::api::LabelDescriptor_ValueType value_type() const;
  void set_value_type(::google::api::LabelDescriptor_ValueType value);

  // optional string description = 3;
  void clear_description();
  static const int kDescriptionFieldNumber = 3;
  const ::std::string& description() const;
  void set_description(const ::std::string& value);
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  ::std::string* mutable_description();
  ::std::string* release_description();
  void set_allocated_description(::std::string* description);
  ::std::string* unsafe_arena_release_description();
  void unsafe_arena_set_allocated_description(
      ::std::string* description);

  // @@protoc_insertion_point(class_scope:google.api.LabelDescriptor)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::google::protobuf::internal::ArenaStringPtr description_;
  int value_type_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_google_2fapi_2flabel_2eproto_impl();
  friend void  protobuf_AddDesc_google_2fapi_2flabel_2eproto_impl();
  friend void protobuf_AssignDesc_google_2fapi_2flabel_2eproto();
  friend void protobuf_ShutdownFile_google_2fapi_2flabel_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<LabelDescriptor> LabelDescriptor_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// LabelDescriptor

// optional string key = 1;
inline void LabelDescriptor::clear_key() {
  key_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& LabelDescriptor::key() const {
  // @@protoc_insertion_point(field_get:google.api.LabelDescriptor.key)
  return key_.Get(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LabelDescriptor::set_key(const ::std::string& value) {
  
  key_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:google.api.LabelDescriptor.key)
}
inline void LabelDescriptor::set_key(const char* value) {
  
  key_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:google.api.LabelDescriptor.key)
}
inline void LabelDescriptor::set_key(const char* value,
    size_t size) {
  
  key_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:google.api.LabelDescriptor.key)
}
inline ::std::string* LabelDescriptor::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:google.api.LabelDescriptor.key)
  return key_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* LabelDescriptor::release_key() {
  // @@protoc_insertion_point(field_release:google.api.LabelDescriptor.key)
  
  return key_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* LabelDescriptor::unsafe_arena_release_key() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.api.LabelDescriptor.key)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return key_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void LabelDescriptor::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:google.api.LabelDescriptor.key)
}
inline void LabelDescriptor::unsafe_arena_set_allocated_key(
    ::std::string* key) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (key != NULL) {
    
  } else {
    
  }
  key_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      key, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.api.LabelDescriptor.key)
}

// optional .google.api.LabelDescriptor.ValueType value_type = 2;
inline void LabelDescriptor::clear_value_type() {
  value_type_ = 0;
}
inline ::google::api::LabelDescriptor_ValueType LabelDescriptor::value_type() const {
  // @@protoc_insertion_point(field_get:google.api.LabelDescriptor.value_type)
  return static_cast< ::google::api::LabelDescriptor_ValueType >(value_type_);
}
inline void LabelDescriptor::set_value_type(::google::api::LabelDescriptor_ValueType value) {
  
  value_type_ = value;
  // @@protoc_insertion_point(field_set:google.api.LabelDescriptor.value_type)
}

// optional string description = 3;
inline void LabelDescriptor::clear_description() {
  description_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& LabelDescriptor::description() const {
  // @@protoc_insertion_point(field_get:google.api.LabelDescriptor.description)
  return description_.Get(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LabelDescriptor::set_description(const ::std::string& value) {
  
  description_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:google.api.LabelDescriptor.description)
}
inline void LabelDescriptor::set_description(const char* value) {
  
  description_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:google.api.LabelDescriptor.description)
}
inline void LabelDescriptor::set_description(const char* value,
    size_t size) {
  
  description_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:google.api.LabelDescriptor.description)
}
inline ::std::string* LabelDescriptor::mutable_description() {
  
  // @@protoc_insertion_point(field_mutable:google.api.LabelDescriptor.description)
  return description_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* LabelDescriptor::release_description() {
  // @@protoc_insertion_point(field_release:google.api.LabelDescriptor.description)
  
  return description_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* LabelDescriptor::unsafe_arena_release_description() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.api.LabelDescriptor.description)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return description_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void LabelDescriptor::set_allocated_description(::std::string* description) {
  if (description != NULL) {
    
  } else {
    
  }
  description_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:google.api.LabelDescriptor.description)
}
inline void LabelDescriptor::unsafe_arena_set_allocated_description(
    ::std::string* description) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (description != NULL) {
    
  } else {
    
  }
  description_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      description, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.api.LabelDescriptor.description)
}

inline const LabelDescriptor* LabelDescriptor::internal_default_instance() {
  return &LabelDescriptor_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::google::api::LabelDescriptor_ValueType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::api::LabelDescriptor_ValueType>() {
  return ::google::api::LabelDescriptor_ValueType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fapi_2flabel_2eproto__INCLUDED
