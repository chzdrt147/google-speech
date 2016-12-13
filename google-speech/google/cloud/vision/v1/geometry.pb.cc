// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/cloud/vision/v1/geometry.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/cloud/vision/v1/geometry.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace cloud {
namespace vision {
namespace v1 {
class VertexDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Vertex> {};
VertexDefaultTypeInternal _Vertex_default_instance_;
class BoundingPolyDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<BoundingPoly> {};
BoundingPolyDefaultTypeInternal _BoundingPoly_default_instance_;
class PositionDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Position> {};
PositionDefaultTypeInternal _Position_default_instance_;

namespace {

::google::protobuf::Metadata file_level_metadata[3];

}  // namespace


const ::google::protobuf::uint32* protobuf_Offsets_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto() GOOGLE_ATTRIBUTE_COLD;
const ::google::protobuf::uint32* protobuf_Offsets_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto() {
  static const ::google::protobuf::uint32 offsets[] = {
    ~0u,  // no _has_bits_
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vertex, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vertex, x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vertex, y_),
    ~0u,  // no _has_bits_
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BoundingPoly, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BoundingPoly, vertices_),
    ~0u,  // no _has_bits_
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Position, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Position, x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Position, y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Position, z_),
  };
  return offsets;
}

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(Vertex)},
  { 6, -1, sizeof(BoundingPoly)},
  { 11, -1, sizeof(Position)},
};

static const ::google::protobuf::internal::DefaultInstanceData file_default_instances[] = {
  {reinterpret_cast<const ::google::protobuf::Message*>(&_Vertex_default_instance_), NULL},
  {reinterpret_cast<const ::google::protobuf::Message*>(&_BoundingPoly_default_instance_), NULL},
  {reinterpret_cast<const ::google::protobuf::Message*>(&_Position_default_instance_), NULL},
};

namespace {

void protobuf_AssignDescriptors() {
  protobuf_AddDesc_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/cloud/vision/v1/geometry.proto", schemas, file_default_instances, protobuf_Offsets_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto(), factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 3);
}

}  // namespace

void protobuf_ShutdownFile_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto() {
  _Vertex_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _BoundingPoly_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
  _Position_default_instance_.Shutdown();
  delete file_level_metadata[2].reflection;
}

void protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _Vertex_default_instance_.DefaultConstruct();
  _BoundingPoly_default_instance_.DefaultConstruct();
  _Position_default_instance_.DefaultConstruct();
}

void protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto_impl);
}
void protobuf_AddDesc_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto_impl() {
  protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
  static const char descriptor[] = {
      "\n%google/cloud/vision/v1/geometry.proto\022"
      "\026google.cloud.vision.v1\"\036\n\006Vertex\022\t\n\001x\030\001"
      " \001(\005\022\t\n\001y\030\002 \001(\005\"@\n\014BoundingPoly\0220\n\010verti"
      "ces\030\001 \003(\0132\036.google.cloud.vision.v1.Verte"
      "x\"+\n\010Position\022\t\n\001x\030\001 \001(\002\022\t\n\001y\030\002 \001(\002\022\t\n\001z"
      "\030\003 \001(\002Bn\n\032com.google.cloud.vision.v1B\rGe"
      "ometryProtoP\001Z<google.golang.org/genprot"
      "o/googleapis/cloud/vision/v1;vision\370\001\001b\006"
      "proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 326);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/cloud/vision/v1/geometry.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto_once_);
void protobuf_AddDesc_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto_once_,
                 &protobuf_AddDesc_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto {
  StaticDescriptorInitializer_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto() {
    protobuf_AddDesc_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
  }
} static_descriptor_initializer_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Vertex::kXFieldNumber;
const int Vertex::kYFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Vertex::Vertex()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.cloud.vision.v1.Vertex)
}
Vertex::Vertex(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.cloud.vision.v1.Vertex)
}
Vertex::Vertex(const Vertex& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    reinterpret_cast<char*>(&y_) -
    reinterpret_cast<char*>(&x_) + sizeof(y_));
  // @@protoc_insertion_point(copy_constructor:google.cloud.vision.v1.Vertex)
}

void Vertex::SharedCtor() {
  ::memset(&x_, 0, reinterpret_cast<char*>(&y_) -
    reinterpret_cast<char*>(&x_) + sizeof(y_));
  _cached_size_ = 0;
}

Vertex::~Vertex() {
  // @@protoc_insertion_point(destructor:google.cloud.vision.v1.Vertex)
  SharedDtor();
}

void Vertex::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  if (arena != NULL) {
    return;
  }

}

void Vertex::ArenaDtor(void* object) {
  Vertex* _this = reinterpret_cast< Vertex* >(object);
  (void)_this;
}
void Vertex::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void Vertex::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Vertex::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return file_level_metadata[0].descriptor;
}

const Vertex& Vertex::default_instance() {
  protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
  return *internal_default_instance();
}

Vertex* Vertex::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<Vertex>(arena);
}

void Vertex::Clear() {
// @@protoc_insertion_point(message_clear_start:google.cloud.vision.v1.Vertex)
  ::memset(&x_, 0, reinterpret_cast<char*>(&y_) -
    reinterpret_cast<char*>(&x_) + sizeof(y_));
}

bool Vertex::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.cloud.vision.v1.Vertex)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 x = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &x_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 y = 2;
      case 2: {
        if (tag == 16u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &y_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.cloud.vision.v1.Vertex)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.cloud.vision.v1.Vertex)
  return false;
#undef DO_
}

void Vertex::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.cloud.vision.v1.Vertex)
  // int32 x = 1;
  if (this->x() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->x(), output);
  }

  // int32 y = 2;
  if (this->y() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->y(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.cloud.vision.v1.Vertex)
}

::google::protobuf::uint8* Vertex::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.cloud.vision.v1.Vertex)
  // int32 x = 1;
  if (this->x() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->x(), target);
  }

  // int32 y = 2;
  if (this->y() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->y(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.cloud.vision.v1.Vertex)
  return target;
}

size_t Vertex::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.cloud.vision.v1.Vertex)
  size_t total_size = 0;

  // int32 x = 1;
  if (this->x() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->x());
  }

  // int32 y = 2;
  if (this->y() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->y());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Vertex::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.cloud.vision.v1.Vertex)
  GOOGLE_DCHECK_NE(&from, this);
  const Vertex* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Vertex>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.cloud.vision.v1.Vertex)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.cloud.vision.v1.Vertex)
    MergeFrom(*source);
  }
}

void Vertex::MergeFrom(const Vertex& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.cloud.vision.v1.Vertex)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.x() != 0) {
    set_x(from.x());
  }
  if (from.y() != 0) {
    set_y(from.y());
  }
}

void Vertex::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.cloud.vision.v1.Vertex)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Vertex::CopyFrom(const Vertex& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.cloud.vision.v1.Vertex)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Vertex::IsInitialized() const {
  return true;
}

void Vertex::Swap(Vertex* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    Vertex* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void Vertex::UnsafeArenaSwap(Vertex* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void Vertex::InternalSwap(Vertex* other) {
  std::swap(x_, other->x_);
  std::swap(y_, other->y_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Vertex::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  return file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Vertex

// int32 x = 1;
void Vertex::clear_x() {
  x_ = 0;
}
::google::protobuf::int32 Vertex::x() const {
  // @@protoc_insertion_point(field_get:google.cloud.vision.v1.Vertex.x)
  return x_;
}
void Vertex::set_x(::google::protobuf::int32 value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.vision.v1.Vertex.x)
}

// int32 y = 2;
void Vertex::clear_y() {
  y_ = 0;
}
::google::protobuf::int32 Vertex::y() const {
  // @@protoc_insertion_point(field_get:google.cloud.vision.v1.Vertex.y)
  return y_;
}
void Vertex::set_y(::google::protobuf::int32 value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.vision.v1.Vertex.y)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BoundingPoly::kVerticesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BoundingPoly::BoundingPoly()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.cloud.vision.v1.BoundingPoly)
}
BoundingPoly::BoundingPoly(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena),
  vertices_(arena) {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.cloud.vision.v1.BoundingPoly)
}
BoundingPoly::BoundingPoly(const BoundingPoly& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      vertices_(from.vertices_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:google.cloud.vision.v1.BoundingPoly)
}

void BoundingPoly::SharedCtor() {
  _cached_size_ = 0;
}

BoundingPoly::~BoundingPoly() {
  // @@protoc_insertion_point(destructor:google.cloud.vision.v1.BoundingPoly)
  SharedDtor();
}

void BoundingPoly::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  if (arena != NULL) {
    return;
  }

}

void BoundingPoly::ArenaDtor(void* object) {
  BoundingPoly* _this = reinterpret_cast< BoundingPoly* >(object);
  (void)_this;
}
void BoundingPoly::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void BoundingPoly::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BoundingPoly::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return file_level_metadata[1].descriptor;
}

const BoundingPoly& BoundingPoly::default_instance() {
  protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
  return *internal_default_instance();
}

BoundingPoly* BoundingPoly::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<BoundingPoly>(arena);
}

void BoundingPoly::Clear() {
// @@protoc_insertion_point(message_clear_start:google.cloud.vision.v1.BoundingPoly)
  vertices_.Clear();
}

bool BoundingPoly::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.cloud.vision.v1.BoundingPoly)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .google.cloud.vision.v1.Vertex vertices = 1;
      case 1: {
        if (tag == 10u) {
          DO_(input->IncrementRecursionDepth());
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_vertices()));
        } else {
          goto handle_unusual;
        }
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.cloud.vision.v1.BoundingPoly)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.cloud.vision.v1.BoundingPoly)
  return false;
#undef DO_
}

void BoundingPoly::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.cloud.vision.v1.BoundingPoly)
  // repeated .google.cloud.vision.v1.Vertex vertices = 1;
  for (unsigned int i = 0, n = this->vertices_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->vertices(i), output);
  }

  // @@protoc_insertion_point(serialize_end:google.cloud.vision.v1.BoundingPoly)
}

::google::protobuf::uint8* BoundingPoly::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.cloud.vision.v1.BoundingPoly)
  // repeated .google.cloud.vision.v1.Vertex vertices = 1;
  for (unsigned int i = 0, n = this->vertices_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->vertices(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.cloud.vision.v1.BoundingPoly)
  return target;
}

size_t BoundingPoly::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.cloud.vision.v1.BoundingPoly)
  size_t total_size = 0;

  // repeated .google.cloud.vision.v1.Vertex vertices = 1;
  {
    unsigned int count = this->vertices_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->vertices(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BoundingPoly::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.cloud.vision.v1.BoundingPoly)
  GOOGLE_DCHECK_NE(&from, this);
  const BoundingPoly* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const BoundingPoly>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.cloud.vision.v1.BoundingPoly)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.cloud.vision.v1.BoundingPoly)
    MergeFrom(*source);
  }
}

void BoundingPoly::MergeFrom(const BoundingPoly& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.cloud.vision.v1.BoundingPoly)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  vertices_.MergeFrom(from.vertices_);
}

void BoundingPoly::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.cloud.vision.v1.BoundingPoly)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BoundingPoly::CopyFrom(const BoundingPoly& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.cloud.vision.v1.BoundingPoly)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BoundingPoly::IsInitialized() const {
  return true;
}

void BoundingPoly::Swap(BoundingPoly* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    BoundingPoly* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void BoundingPoly::UnsafeArenaSwap(BoundingPoly* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void BoundingPoly::InternalSwap(BoundingPoly* other) {
  vertices_.UnsafeArenaSwap(&other->vertices_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata BoundingPoly::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  return file_level_metadata[1];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// BoundingPoly

// repeated .google.cloud.vision.v1.Vertex vertices = 1;
int BoundingPoly::vertices_size() const {
  return vertices_.size();
}
void BoundingPoly::clear_vertices() {
  vertices_.Clear();
}
const ::google::cloud::vision::v1::Vertex& BoundingPoly::vertices(int index) const {
  // @@protoc_insertion_point(field_get:google.cloud.vision.v1.BoundingPoly.vertices)
  return vertices_.Get(index);
}
::google::cloud::vision::v1::Vertex* BoundingPoly::mutable_vertices(int index) {
  // @@protoc_insertion_point(field_mutable:google.cloud.vision.v1.BoundingPoly.vertices)
  return vertices_.Mutable(index);
}
::google::cloud::vision::v1::Vertex* BoundingPoly::add_vertices() {
  // @@protoc_insertion_point(field_add:google.cloud.vision.v1.BoundingPoly.vertices)
  return vertices_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::cloud::vision::v1::Vertex >*
BoundingPoly::mutable_vertices() {
  // @@protoc_insertion_point(field_mutable_list:google.cloud.vision.v1.BoundingPoly.vertices)
  return &vertices_;
}
const ::google::protobuf::RepeatedPtrField< ::google::cloud::vision::v1::Vertex >&
BoundingPoly::vertices() const {
  // @@protoc_insertion_point(field_list:google.cloud.vision.v1.BoundingPoly.vertices)
  return vertices_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Position::kXFieldNumber;
const int Position::kYFieldNumber;
const int Position::kZFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Position::Position()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.cloud.vision.v1.Position)
}
Position::Position(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.cloud.vision.v1.Position)
}
Position::Position(const Position& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    reinterpret_cast<char*>(&z_) -
    reinterpret_cast<char*>(&x_) + sizeof(z_));
  // @@protoc_insertion_point(copy_constructor:google.cloud.vision.v1.Position)
}

void Position::SharedCtor() {
  ::memset(&x_, 0, reinterpret_cast<char*>(&z_) -
    reinterpret_cast<char*>(&x_) + sizeof(z_));
  _cached_size_ = 0;
}

Position::~Position() {
  // @@protoc_insertion_point(destructor:google.cloud.vision.v1.Position)
  SharedDtor();
}

void Position::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  if (arena != NULL) {
    return;
  }

}

void Position::ArenaDtor(void* object) {
  Position* _this = reinterpret_cast< Position* >(object);
  (void)_this;
}
void Position::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void Position::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Position::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return file_level_metadata[2].descriptor;
}

const Position& Position::default_instance() {
  protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
  return *internal_default_instance();
}

Position* Position::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<Position>(arena);
}

void Position::Clear() {
// @@protoc_insertion_point(message_clear_start:google.cloud.vision.v1.Position)
  ::memset(&x_, 0, reinterpret_cast<char*>(&z_) -
    reinterpret_cast<char*>(&x_) + sizeof(z_));
}

bool Position::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.cloud.vision.v1.Position)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // float x = 1;
      case 1: {
        if (tag == 13u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &x_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float y = 2;
      case 2: {
        if (tag == 21u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &y_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float z = 3;
      case 3: {
        if (tag == 29u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &z_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.cloud.vision.v1.Position)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.cloud.vision.v1.Position)
  return false;
#undef DO_
}

void Position::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.cloud.vision.v1.Position)
  // float x = 1;
  if (this->x() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->x(), output);
  }

  // float y = 2;
  if (this->y() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->y(), output);
  }

  // float z = 3;
  if (this->z() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->z(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.cloud.vision.v1.Position)
}

::google::protobuf::uint8* Position::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.cloud.vision.v1.Position)
  // float x = 1;
  if (this->x() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->x(), target);
  }

  // float y = 2;
  if (this->y() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->y(), target);
  }

  // float z = 3;
  if (this->z() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->z(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.cloud.vision.v1.Position)
  return target;
}

size_t Position::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.cloud.vision.v1.Position)
  size_t total_size = 0;

  // float x = 1;
  if (this->x() != 0) {
    total_size += 1 + 4;
  }

  // float y = 2;
  if (this->y() != 0) {
    total_size += 1 + 4;
  }

  // float z = 3;
  if (this->z() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Position::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.cloud.vision.v1.Position)
  GOOGLE_DCHECK_NE(&from, this);
  const Position* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Position>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.cloud.vision.v1.Position)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.cloud.vision.v1.Position)
    MergeFrom(*source);
  }
}

void Position::MergeFrom(const Position& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.cloud.vision.v1.Position)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.x() != 0) {
    set_x(from.x());
  }
  if (from.y() != 0) {
    set_y(from.y());
  }
  if (from.z() != 0) {
    set_z(from.z());
  }
}

void Position::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.cloud.vision.v1.Position)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Position::CopyFrom(const Position& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.cloud.vision.v1.Position)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Position::IsInitialized() const {
  return true;
}

void Position::Swap(Position* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    Position* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void Position::UnsafeArenaSwap(Position* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void Position::InternalSwap(Position* other) {
  std::swap(x_, other->x_);
  std::swap(y_, other->y_);
  std::swap(z_, other->z_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Position::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  return file_level_metadata[2];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Position

// float x = 1;
void Position::clear_x() {
  x_ = 0;
}
float Position::x() const {
  // @@protoc_insertion_point(field_get:google.cloud.vision.v1.Position.x)
  return x_;
}
void Position::set_x(float value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.vision.v1.Position.x)
}

// float y = 2;
void Position::clear_y() {
  y_ = 0;
}
float Position::y() const {
  // @@protoc_insertion_point(field_get:google.cloud.vision.v1.Position.y)
  return y_;
}
void Position::set_y(float value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.vision.v1.Position.y)
}

// float z = 3;
void Position::clear_z() {
  z_ = 0;
}
float Position::z() const {
  // @@protoc_insertion_point(field_get:google.cloud.vision.v1.Position.z)
  return z_;
}
void Position::set_z(float value) {
  
  z_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.vision.v1.Position.z)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace vision
}  // namespace cloud
}  // namespace google

// @@protoc_insertion_point(global_scope)