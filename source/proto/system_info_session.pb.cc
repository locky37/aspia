// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: system_info_session.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "system_info_session.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace aspia {
namespace proto {
namespace system_info {
class HostToClientDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<HostToClient>
     _instance;
} _HostToClient_default_instance_;
class ClientToHostDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<ClientToHost>
     _instance;
} _ClientToHost_default_instance_;

namespace protobuf_system_5finfo_5fsession_2eproto {

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _HostToClient_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_HostToClient_default_instance_);_ClientToHost_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_ClientToHost_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}

}  // namespace protobuf_system_5finfo_5fsession_2eproto

bool HostToClient_Compressor_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const HostToClient_Compressor HostToClient::COMPRESSOR_RAW;
const HostToClient_Compressor HostToClient::COMPRESSOR_ZLIB;
const HostToClient_Compressor HostToClient::Compressor_MIN;
const HostToClient_Compressor HostToClient::Compressor_MAX;
const int HostToClient::Compressor_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int HostToClient::kGuidFieldNumber;
const int HostToClient::kCompressorFieldNumber;
const int HostToClient::kDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

HostToClient::HostToClient()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_system_5finfo_5fsession_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:aspia.proto.system_info.HostToClient)
}
HostToClient::HostToClient(const HostToClient& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  guid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.guid().size() > 0) {
    guid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.guid_);
  }
  data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.data().size() > 0) {
    data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
  compressor_ = from.compressor_;
  // @@protoc_insertion_point(copy_constructor:aspia.proto.system_info.HostToClient)
}

void HostToClient::SharedCtor() {
  guid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  compressor_ = 0;
  _cached_size_ = 0;
}

HostToClient::~HostToClient() {
  // @@protoc_insertion_point(destructor:aspia.proto.system_info.HostToClient)
  SharedDtor();
}

void HostToClient::SharedDtor() {
  guid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void HostToClient::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const HostToClient& HostToClient::default_instance() {
  protobuf_system_5finfo_5fsession_2eproto::InitDefaults();
  return *internal_default_instance();
}

HostToClient* HostToClient::New(::google::protobuf::Arena* arena) const {
  HostToClient* n = new HostToClient;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void HostToClient::Clear() {
// @@protoc_insertion_point(message_clear_start:aspia.proto.system_info.HostToClient)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  guid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  compressor_ = 0;
  _internal_metadata_.Clear();
}

bool HostToClient::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:aspia.proto.system_info.HostToClient)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string guid = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_guid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->guid().data(), static_cast<int>(this->guid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "aspia.proto.system_info.HostToClient.guid"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .aspia.proto.system_info.HostToClient.Compressor compressor = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_compressor(static_cast< ::aspia::proto::system_info::HostToClient_Compressor >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes data = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_data()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:aspia.proto.system_info.HostToClient)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:aspia.proto.system_info.HostToClient)
  return false;
#undef DO_
}

void HostToClient::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:aspia.proto.system_info.HostToClient)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string guid = 1;
  if (this->guid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->guid().data(), static_cast<int>(this->guid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "aspia.proto.system_info.HostToClient.guid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->guid(), output);
  }

  // .aspia.proto.system_info.HostToClient.Compressor compressor = 2;
  if (this->compressor() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->compressor(), output);
  }

  // bytes data = 3;
  if (this->data().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->data(), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:aspia.proto.system_info.HostToClient)
}

size_t HostToClient::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aspia.proto.system_info.HostToClient)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // string guid = 1;
  if (this->guid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->guid());
  }

  // bytes data = 3;
  if (this->data().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->data());
  }

  // .aspia.proto.system_info.HostToClient.Compressor compressor = 2;
  if (this->compressor() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->compressor());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HostToClient::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const HostToClient*>(&from));
}

void HostToClient::MergeFrom(const HostToClient& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aspia.proto.system_info.HostToClient)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.guid().size() > 0) {

    guid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.guid_);
  }
  if (from.data().size() > 0) {

    data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
  if (from.compressor() != 0) {
    set_compressor(from.compressor());
  }
}

void HostToClient::CopyFrom(const HostToClient& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aspia.proto.system_info.HostToClient)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HostToClient::IsInitialized() const {
  return true;
}

void HostToClient::Swap(HostToClient* other) {
  if (other == this) return;
  InternalSwap(other);
}
void HostToClient::InternalSwap(HostToClient* other) {
  using std::swap;
  guid_.Swap(&other->guid_);
  data_.Swap(&other->data_);
  swap(compressor_, other->compressor_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string HostToClient::GetTypeName() const {
  return "aspia.proto.system_info.HostToClient";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// HostToClient

// string guid = 1;
void HostToClient::clear_guid() {
  guid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& HostToClient::guid() const {
  // @@protoc_insertion_point(field_get:aspia.proto.system_info.HostToClient.guid)
  return guid_.GetNoArena();
}
void HostToClient::set_guid(const ::std::string& value) {
  
  guid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.system_info.HostToClient.guid)
}
#if LANG_CXX11
void HostToClient::set_guid(::std::string&& value) {
  
  guid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.system_info.HostToClient.guid)
}
#endif
void HostToClient::set_guid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  guid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.system_info.HostToClient.guid)
}
void HostToClient::set_guid(const char* value, size_t size) {
  
  guid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.system_info.HostToClient.guid)
}
::std::string* HostToClient::mutable_guid() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.system_info.HostToClient.guid)
  return guid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* HostToClient::release_guid() {
  // @@protoc_insertion_point(field_release:aspia.proto.system_info.HostToClient.guid)
  
  return guid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void HostToClient::set_allocated_guid(::std::string* guid) {
  if (guid != NULL) {
    
  } else {
    
  }
  guid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), guid);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.system_info.HostToClient.guid)
}

// .aspia.proto.system_info.HostToClient.Compressor compressor = 2;
void HostToClient::clear_compressor() {
  compressor_ = 0;
}
::aspia::proto::system_info::HostToClient_Compressor HostToClient::compressor() const {
  // @@protoc_insertion_point(field_get:aspia.proto.system_info.HostToClient.compressor)
  return static_cast< ::aspia::proto::system_info::HostToClient_Compressor >(compressor_);
}
void HostToClient::set_compressor(::aspia::proto::system_info::HostToClient_Compressor value) {
  
  compressor_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.system_info.HostToClient.compressor)
}

// bytes data = 3;
void HostToClient::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& HostToClient::data() const {
  // @@protoc_insertion_point(field_get:aspia.proto.system_info.HostToClient.data)
  return data_.GetNoArena();
}
void HostToClient::set_data(const ::std::string& value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.system_info.HostToClient.data)
}
#if LANG_CXX11
void HostToClient::set_data(::std::string&& value) {
  
  data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.system_info.HostToClient.data)
}
#endif
void HostToClient::set_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.system_info.HostToClient.data)
}
void HostToClient::set_data(const void* value, size_t size) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.system_info.HostToClient.data)
}
::std::string* HostToClient::mutable_data() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.system_info.HostToClient.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* HostToClient::release_data() {
  // @@protoc_insertion_point(field_release:aspia.proto.system_info.HostToClient.data)
  
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void HostToClient::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.system_info.HostToClient.data)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ClientToHost::kGuidFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ClientToHost::ClientToHost()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_system_5finfo_5fsession_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:aspia.proto.system_info.ClientToHost)
}
ClientToHost::ClientToHost(const ClientToHost& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  guid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.guid().size() > 0) {
    guid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.guid_);
  }
  // @@protoc_insertion_point(copy_constructor:aspia.proto.system_info.ClientToHost)
}

void ClientToHost::SharedCtor() {
  guid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

ClientToHost::~ClientToHost() {
  // @@protoc_insertion_point(destructor:aspia.proto.system_info.ClientToHost)
  SharedDtor();
}

void ClientToHost::SharedDtor() {
  guid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ClientToHost::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ClientToHost& ClientToHost::default_instance() {
  protobuf_system_5finfo_5fsession_2eproto::InitDefaults();
  return *internal_default_instance();
}

ClientToHost* ClientToHost::New(::google::protobuf::Arena* arena) const {
  ClientToHost* n = new ClientToHost;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ClientToHost::Clear() {
// @@protoc_insertion_point(message_clear_start:aspia.proto.system_info.ClientToHost)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  guid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool ClientToHost::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:aspia.proto.system_info.ClientToHost)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string guid = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_guid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->guid().data(), static_cast<int>(this->guid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "aspia.proto.system_info.ClientToHost.guid"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:aspia.proto.system_info.ClientToHost)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:aspia.proto.system_info.ClientToHost)
  return false;
#undef DO_
}

void ClientToHost::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:aspia.proto.system_info.ClientToHost)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string guid = 1;
  if (this->guid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->guid().data(), static_cast<int>(this->guid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "aspia.proto.system_info.ClientToHost.guid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->guid(), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:aspia.proto.system_info.ClientToHost)
}

size_t ClientToHost::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aspia.proto.system_info.ClientToHost)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // string guid = 1;
  if (this->guid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ClientToHost::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ClientToHost*>(&from));
}

void ClientToHost::MergeFrom(const ClientToHost& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aspia.proto.system_info.ClientToHost)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.guid().size() > 0) {

    guid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.guid_);
  }
}

void ClientToHost::CopyFrom(const ClientToHost& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aspia.proto.system_info.ClientToHost)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClientToHost::IsInitialized() const {
  return true;
}

void ClientToHost::Swap(ClientToHost* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ClientToHost::InternalSwap(ClientToHost* other) {
  using std::swap;
  guid_.Swap(&other->guid_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string ClientToHost::GetTypeName() const {
  return "aspia.proto.system_info.ClientToHost";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ClientToHost

// string guid = 1;
void ClientToHost::clear_guid() {
  guid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& ClientToHost::guid() const {
  // @@protoc_insertion_point(field_get:aspia.proto.system_info.ClientToHost.guid)
  return guid_.GetNoArena();
}
void ClientToHost::set_guid(const ::std::string& value) {
  
  guid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.system_info.ClientToHost.guid)
}
#if LANG_CXX11
void ClientToHost::set_guid(::std::string&& value) {
  
  guid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.system_info.ClientToHost.guid)
}
#endif
void ClientToHost::set_guid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  guid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.system_info.ClientToHost.guid)
}
void ClientToHost::set_guid(const char* value, size_t size) {
  
  guid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.system_info.ClientToHost.guid)
}
::std::string* ClientToHost::mutable_guid() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.system_info.ClientToHost.guid)
  return guid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* ClientToHost::release_guid() {
  // @@protoc_insertion_point(field_release:aspia.proto.system_info.ClientToHost.guid)
  
  return guid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ClientToHost::set_allocated_guid(::std::string* guid) {
  if (guid != NULL) {
    
  } else {
    
  }
  guid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), guid);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.system_info.ClientToHost.guid)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace system_info
}  // namespace proto
}  // namespace aspia

// @@protoc_insertion_point(global_scope)