// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/endpoint.proto

#ifndef PROTOBUF_google_2fapi_2fendpoint_2eproto__INCLUDED
#define PROTOBUF_google_2fapi_2fendpoint_2eproto__INCLUDED

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
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "google/api/annotations.pb.h"
// @@protoc_insertion_point(includes)
namespace google {
namespace api {
class Endpoint;
class EndpointDefaultTypeInternal;
extern EndpointDefaultTypeInternal _Endpoint_default_instance_;
}  // namespace api
}  // namespace google

namespace google {
namespace api {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_google_2fapi_2fendpoint_2eproto();
void protobuf_InitDefaults_google_2fapi_2fendpoint_2eproto();

// ===================================================================

class Endpoint : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.Endpoint) */ {
 public:
  Endpoint();
  virtual ~Endpoint();

  Endpoint(const Endpoint& from);

  inline Endpoint& operator=(const Endpoint& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Endpoint& default_instance();

  static inline const Endpoint* internal_default_instance() {
    return reinterpret_cast<const Endpoint*>(
               &_Endpoint_default_instance_);
  }

  void Swap(Endpoint* other);

  // implements Message ----------------------------------------------

  inline Endpoint* New() const PROTOBUF_FINAL { return New(NULL); }

  Endpoint* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Endpoint& from);
  void MergeFrom(const Endpoint& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Endpoint* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // repeated string aliases = 2;
  int aliases_size() const;
  void clear_aliases();
  static const int kAliasesFieldNumber = 2;
  const ::std::string& aliases(int index) const;
  ::std::string* mutable_aliases(int index);
  void set_aliases(int index, const ::std::string& value);
  void set_aliases(int index, const char* value);
  void set_aliases(int index, const char* value, size_t size);
  ::std::string* add_aliases();
  void add_aliases(const ::std::string& value);
  void add_aliases(const char* value);
  void add_aliases(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& aliases() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_aliases();

  // repeated string apis = 3;
  int apis_size() const;
  void clear_apis();
  static const int kApisFieldNumber = 3;
  const ::std::string& apis(int index) const;
  ::std::string* mutable_apis(int index);
  void set_apis(int index, const ::std::string& value);
  void set_apis(int index, const char* value);
  void set_apis(int index, const char* value, size_t size);
  ::std::string* add_apis();
  void add_apis(const ::std::string& value);
  void add_apis(const char* value);
  void add_apis(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& apis() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_apis();

  // repeated string features = 4;
  int features_size() const;
  void clear_features();
  static const int kFeaturesFieldNumber = 4;
  const ::std::string& features(int index) const;
  ::std::string* mutable_features(int index);
  void set_features(int index, const ::std::string& value);
  void set_features(int index, const char* value);
  void set_features(int index, const char* value, size_t size);
  ::std::string* add_features();
  void add_features(const ::std::string& value);
  void add_features(const char* value);
  void add_features(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& features() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_features();

  // bool allow_cors = 5;
  void clear_allow_cors();
  static const int kAllowCorsFieldNumber = 5;
  bool allow_cors() const;
  void set_allow_cors(bool value);

  // @@protoc_insertion_point(class_scope:google.api.Endpoint)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> aliases_;
  ::google::protobuf::RepeatedPtrField< ::std::string> apis_;
  ::google::protobuf::RepeatedPtrField< ::std::string> features_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  bool allow_cors_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_google_2fapi_2fendpoint_2eproto_impl();
  friend void  protobuf_AddDesc_google_2fapi_2fendpoint_2eproto_impl();
  friend const ::google::protobuf::uint32* protobuf_Offsets_google_2fapi_2fendpoint_2eproto();
  friend void protobuf_ShutdownFile_google_2fapi_2fendpoint_2eproto();

};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Endpoint

// string name = 1;
inline void Endpoint::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Endpoint::name() const {
  // @@protoc_insertion_point(field_get:google.api.Endpoint.name)
  return name_.GetNoArena();
}
inline void Endpoint::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.Endpoint.name)
}
inline void Endpoint::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.Endpoint.name)
}
inline void Endpoint::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.Endpoint.name)
}
inline ::std::string* Endpoint::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.api.Endpoint.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Endpoint::release_name() {
  // @@protoc_insertion_point(field_release:google.api.Endpoint.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Endpoint::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.api.Endpoint.name)
}

// repeated string aliases = 2;
inline int Endpoint::aliases_size() const {
  return aliases_.size();
}
inline void Endpoint::clear_aliases() {
  aliases_.Clear();
}
inline const ::std::string& Endpoint::aliases(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Endpoint.aliases)
  return aliases_.Get(index);
}
inline ::std::string* Endpoint::mutable_aliases(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Endpoint.aliases)
  return aliases_.Mutable(index);
}
inline void Endpoint::set_aliases(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.api.Endpoint.aliases)
  aliases_.Mutable(index)->assign(value);
}
inline void Endpoint::set_aliases(int index, const char* value) {
  aliases_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.api.Endpoint.aliases)
}
inline void Endpoint::set_aliases(int index, const char* value, size_t size) {
  aliases_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.api.Endpoint.aliases)
}
inline ::std::string* Endpoint::add_aliases() {
  // @@protoc_insertion_point(field_add_mutable:google.api.Endpoint.aliases)
  return aliases_.Add();
}
inline void Endpoint::add_aliases(const ::std::string& value) {
  aliases_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.api.Endpoint.aliases)
}
inline void Endpoint::add_aliases(const char* value) {
  aliases_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.api.Endpoint.aliases)
}
inline void Endpoint::add_aliases(const char* value, size_t size) {
  aliases_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.api.Endpoint.aliases)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Endpoint::aliases() const {
  // @@protoc_insertion_point(field_list:google.api.Endpoint.aliases)
  return aliases_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Endpoint::mutable_aliases() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Endpoint.aliases)
  return &aliases_;
}

// repeated string apis = 3;
inline int Endpoint::apis_size() const {
  return apis_.size();
}
inline void Endpoint::clear_apis() {
  apis_.Clear();
}
inline const ::std::string& Endpoint::apis(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Endpoint.apis)
  return apis_.Get(index);
}
inline ::std::string* Endpoint::mutable_apis(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Endpoint.apis)
  return apis_.Mutable(index);
}
inline void Endpoint::set_apis(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.api.Endpoint.apis)
  apis_.Mutable(index)->assign(value);
}
inline void Endpoint::set_apis(int index, const char* value) {
  apis_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.api.Endpoint.apis)
}
inline void Endpoint::set_apis(int index, const char* value, size_t size) {
  apis_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.api.Endpoint.apis)
}
inline ::std::string* Endpoint::add_apis() {
  // @@protoc_insertion_point(field_add_mutable:google.api.Endpoint.apis)
  return apis_.Add();
}
inline void Endpoint::add_apis(const ::std::string& value) {
  apis_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.api.Endpoint.apis)
}
inline void Endpoint::add_apis(const char* value) {
  apis_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.api.Endpoint.apis)
}
inline void Endpoint::add_apis(const char* value, size_t size) {
  apis_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.api.Endpoint.apis)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Endpoint::apis() const {
  // @@protoc_insertion_point(field_list:google.api.Endpoint.apis)
  return apis_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Endpoint::mutable_apis() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Endpoint.apis)
  return &apis_;
}

// repeated string features = 4;
inline int Endpoint::features_size() const {
  return features_.size();
}
inline void Endpoint::clear_features() {
  features_.Clear();
}
inline const ::std::string& Endpoint::features(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Endpoint.features)
  return features_.Get(index);
}
inline ::std::string* Endpoint::mutable_features(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Endpoint.features)
  return features_.Mutable(index);
}
inline void Endpoint::set_features(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.api.Endpoint.features)
  features_.Mutable(index)->assign(value);
}
inline void Endpoint::set_features(int index, const char* value) {
  features_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.api.Endpoint.features)
}
inline void Endpoint::set_features(int index, const char* value, size_t size) {
  features_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.api.Endpoint.features)
}
inline ::std::string* Endpoint::add_features() {
  // @@protoc_insertion_point(field_add_mutable:google.api.Endpoint.features)
  return features_.Add();
}
inline void Endpoint::add_features(const ::std::string& value) {
  features_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.api.Endpoint.features)
}
inline void Endpoint::add_features(const char* value) {
  features_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.api.Endpoint.features)
}
inline void Endpoint::add_features(const char* value, size_t size) {
  features_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.api.Endpoint.features)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Endpoint::features() const {
  // @@protoc_insertion_point(field_list:google.api.Endpoint.features)
  return features_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Endpoint::mutable_features() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Endpoint.features)
  return &features_;
}

// bool allow_cors = 5;
inline void Endpoint::clear_allow_cors() {
  allow_cors_ = false;
}
inline bool Endpoint::allow_cors() const {
  // @@protoc_insertion_point(field_get:google.api.Endpoint.allow_cors)
  return allow_cors_;
}
inline void Endpoint::set_allow_cors(bool value) {
  
  allow_cors_ = value;
  // @@protoc_insertion_point(field_set:google.api.Endpoint.allow_cors)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fapi_2fendpoint_2eproto__INCLUDED