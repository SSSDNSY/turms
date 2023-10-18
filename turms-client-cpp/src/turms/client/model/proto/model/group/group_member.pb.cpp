// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model/group/group_member.proto

#include "turms/client/model/proto/model/group/group_member.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/io/zero_copy_stream_impl_lite.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace turms {
namespace client {
namespace model {
namespace proto {
        template <typename>
PROTOBUF_CONSTEXPR GroupMember::GroupMember(::_pbi::ConstantInitialized)
    : _impl_{
      /*decltype(_impl_._has_bits_)*/ {},
      /*decltype(_impl_._cached_size_)*/ {},
      /*decltype(_impl_.using_device_types_)*/ {},
      /*decltype(_impl_._using_device_types_cached_byte_size_)*/ {0},
      /*decltype(_impl_.name_)*/ {
          &::_pbi::fixed_address_empty_string,
          ::_pbi::ConstantInitialized{},
      },
      /*decltype(_impl_.group_id_)*/ ::int64_t{0},
      /*decltype(_impl_.user_id_)*/ ::int64_t{0},
      /*decltype(_impl_.join_date_)*/ ::int64_t{0},
      /*decltype(_impl_.role_)*/ 0,
      /*decltype(_impl_.user_status_)*/ 0,
      /*decltype(_impl_.mute_end_date_)*/ ::int64_t{0},
    } {}
struct GroupMemberDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GroupMemberDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~GroupMemberDefaultTypeInternal() {}
  union {
    GroupMember _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GroupMemberDefaultTypeInternal _GroupMember_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace turms {
namespace client {
namespace model {
namespace proto {
// ===================================================================

class GroupMember::_Internal {
 public:
  using HasBits = decltype(std::declval<GroupMember>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(GroupMember, _impl_._has_bits_);
  static void set_has_group_id(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_user_id(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_role(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_join_date(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_mute_end_date(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_user_status(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
};

GroupMember::GroupMember(::google::protobuf::Arena* arena)
    : ::google::protobuf::MessageLite(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:turms.client.model.proto.GroupMember)
}
GroupMember::GroupMember(const GroupMember& from) : ::google::protobuf::MessageLite() {
  GroupMember* const _this = this;
  (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.using_device_types_){from._internal_using_device_types()},
      /*decltype(_impl_._using_device_types_cached_byte_size_)*/ {0},
      decltype(_impl_.name_){},
      decltype(_impl_.group_id_){},
      decltype(_impl_.user_id_){},
      decltype(_impl_.join_date_){},
      decltype(_impl_.role_){},
      decltype(_impl_.user_status_){},
      decltype(_impl_.mute_end_date_){},
  };
  _internal_metadata_.MergeFrom<std::string>(
      from._internal_metadata_);
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.name_.Set(from._internal_name(), _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.group_id_, &from._impl_.group_id_,
    static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.mute_end_date_) -
    reinterpret_cast<char*>(&_impl_.group_id_)) + sizeof(_impl_.mute_end_date_));

  // @@protoc_insertion_point(copy_constructor:turms.client.model.proto.GroupMember)
}
inline void GroupMember::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.using_device_types_){arena},
      /*decltype(_impl_._using_device_types_cached_byte_size_)*/ {0},
      decltype(_impl_.name_){},
      decltype(_impl_.group_id_){::int64_t{0}},
      decltype(_impl_.user_id_){::int64_t{0}},
      decltype(_impl_.join_date_){::int64_t{0}},
      decltype(_impl_.role_){0},
      decltype(_impl_.user_status_){0},
      decltype(_impl_.mute_end_date_){::int64_t{0}},
  };
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}
GroupMember::~GroupMember() {
  // @@protoc_insertion_point(destructor:turms.client.model.proto.GroupMember)
  _internal_metadata_.Delete<std::string>();
  SharedDtor();
}
inline void GroupMember::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _internal_mutable_using_device_types()->~RepeatedField();
  _impl_.name_.Destroy();
}
void GroupMember::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

PROTOBUF_NOINLINE void GroupMember::Clear() {
// @@protoc_insertion_point(message_clear_start:turms.client.model.proto.GroupMember)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_using_device_types()->Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.name_.ClearNonDefaultToEmpty();
  }
  if (cached_has_bits & 0x0000007eu) {
    ::memset(&_impl_.group_id_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.mute_end_date_) -
        reinterpret_cast<char*>(&_impl_.group_id_)) + sizeof(_impl_.mute_end_date_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* GroupMember::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<3, 8, 0, 57, 2> GroupMember::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(GroupMember, _impl_._has_bits_),
    0, // no _extensions_
    8, 56,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967040,  // skipmap
    offsetof(decltype(_table_), field_entries),
    8,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_GroupMember_default_instance_._instance,
    ::_pbi::TcParser::GenericFallbackLite,  // fallback
  }, {{
    // repeated .turms.client.model.proto.DeviceType using_device_types = 8;
    {::_pbi::TcParser::FastV32P1,
     {66, 63, 0, PROTOBUF_FIELD_OFFSET(GroupMember, _impl_.using_device_types_)}},
    // optional int64 group_id = 1;
    {::_pbi::TcParser::FastV64S1,
     {8, 1, 0, PROTOBUF_FIELD_OFFSET(GroupMember, _impl_.group_id_)}},
    // optional int64 user_id = 2;
    {::_pbi::TcParser::FastV64S1,
     {16, 2, 0, PROTOBUF_FIELD_OFFSET(GroupMember, _impl_.user_id_)}},
    // optional string name = 3;
    {::_pbi::TcParser::FastUS1,
     {26, 0, 0, PROTOBUF_FIELD_OFFSET(GroupMember, _impl_.name_)}},
    // optional .turms.client.model.proto.GroupMemberRole role = 4;
    {::_pbi::TcParser::FastV32S1,
     {32, 4, 0, PROTOBUF_FIELD_OFFSET(GroupMember, _impl_.role_)}},
    // optional int64 join_date = 5;
    {::_pbi::TcParser::FastV64S1,
     {40, 3, 0, PROTOBUF_FIELD_OFFSET(GroupMember, _impl_.join_date_)}},
    // optional int64 mute_end_date = 6;
    {::_pbi::TcParser::FastV64S1,
     {48, 6, 0, PROTOBUF_FIELD_OFFSET(GroupMember, _impl_.mute_end_date_)}},
    // optional .turms.client.model.proto.UserStatus user_status = 7;
    {::_pbi::TcParser::FastV32S1,
     {56, 5, 0, PROTOBUF_FIELD_OFFSET(GroupMember, _impl_.user_status_)}},
  }}, {{
    65535, 65535
  }}, {{
    // optional int64 group_id = 1;
    {PROTOBUF_FIELD_OFFSET(GroupMember, _impl_.group_id_), _Internal::kHasBitsOffset + 1, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kInt64)},
    // optional int64 user_id = 2;
    {PROTOBUF_FIELD_OFFSET(GroupMember, _impl_.user_id_), _Internal::kHasBitsOffset + 2, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kInt64)},
    // optional string name = 3;
    {PROTOBUF_FIELD_OFFSET(GroupMember, _impl_.name_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // optional .turms.client.model.proto.GroupMemberRole role = 4;
    {PROTOBUF_FIELD_OFFSET(GroupMember, _impl_.role_), _Internal::kHasBitsOffset + 4, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kOpenEnum)},
    // optional int64 join_date = 5;
    {PROTOBUF_FIELD_OFFSET(GroupMember, _impl_.join_date_), _Internal::kHasBitsOffset + 3, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kInt64)},
    // optional int64 mute_end_date = 6;
    {PROTOBUF_FIELD_OFFSET(GroupMember, _impl_.mute_end_date_), _Internal::kHasBitsOffset + 6, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kInt64)},
    // optional .turms.client.model.proto.UserStatus user_status = 7;
    {PROTOBUF_FIELD_OFFSET(GroupMember, _impl_.user_status_), _Internal::kHasBitsOffset + 5, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kOpenEnum)},
    // repeated .turms.client.model.proto.DeviceType using_device_types = 8;
    {PROTOBUF_FIELD_OFFSET(GroupMember, _impl_.using_device_types_), -1, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kPackedOpenEnum)},
  }},
  // no aux_entries
  {{
    "\44\0\0\4\0\0\0\0\0\0\0\0\0\0\0\0"
    "turms.client.model.proto.GroupMember"
    "name"
  }},
};

::uint8_t* GroupMember::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:turms.client.model.proto.GroupMember)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional int64 group_id = 1;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt64ToArrayWithField<1>(
            stream, this->_internal_group_id(), target);
  }

  // optional int64 user_id = 2;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt64ToArrayWithField<2>(
            stream, this->_internal_user_id(), target);
  }

  // optional string name = 3;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_name();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "turms.client.model.proto.GroupMember.name");
    target = stream->WriteStringMaybeAliased(3, _s, target);
  }

  // optional .turms.client.model.proto.GroupMemberRole role = 4;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        4, this->_internal_role(), target);
  }

  // optional int64 join_date = 5;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt64ToArrayWithField<5>(
            stream, this->_internal_join_date(), target);
  }

  // optional int64 mute_end_date = 6;
  if (cached_has_bits & 0x00000040u) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt64ToArrayWithField<6>(
            stream, this->_internal_mute_end_date(), target);
  }

  // optional .turms.client.model.proto.UserStatus user_status = 7;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        7, this->_internal_user_status(), target);
  }

  // repeated .turms.client.model.proto.DeviceType using_device_types = 8;
  {
    int byte_size = _impl_._using_device_types_cached_byte_size_.Get();
    if (byte_size > 0) {
      target = stream->WriteEnumPacked(8, _internal_using_device_types(),
                                       byte_size, target);
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(
        _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:turms.client.model.proto.GroupMember)
  return target;
}

::size_t GroupMember::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:turms.client.model.proto.GroupMember)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .turms.client.model.proto.DeviceType using_device_types = 8;
  {
    std::size_t data_size = 0;
    auto count = static_cast<std::size_t>(this->_internal_using_device_types_size());

    for (std::size_t i = 0; i < count; ++i) {
      data_size += ::_pbi::WireFormatLite::EnumSize(
          this->_internal_using_device_types().Get(static_cast<int>(i)));
    }
    total_size += data_size;
    if (data_size > 0) {
      total_size += 1;
      total_size += ::_pbi::WireFormatLite::Int32Size(
          static_cast<int32_t>(data_size));
    }
    _impl_._using_device_types_cached_byte_size_.Set(::_pbi::ToCachedSize(data_size));
  }
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    // optional string name = 3;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                      this->_internal_name());
    }

    // optional int64 group_id = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
          this->_internal_group_id());
    }

    // optional int64 user_id = 2;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
          this->_internal_user_id());
    }

    // optional int64 join_date = 5;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
          this->_internal_join_date());
    }

    // optional .turms.client.model.proto.GroupMemberRole role = 4;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
                    ::_pbi::WireFormatLite::EnumSize(this->_internal_role());
    }

    // optional .turms.client.model.proto.UserStatus user_status = 7;
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 +
                    ::_pbi::WireFormatLite::EnumSize(this->_internal_user_status());
    }

    // optional int64 mute_end_date = 6;
    if (cached_has_bits & 0x00000040u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
          this->_internal_mute_end_date());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GroupMember::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const GroupMember*>(
      &from));
}

void GroupMember::MergeFrom(const GroupMember& from) {
  GroupMember* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:turms.client.model.proto.GroupMember)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_using_device_types()->MergeFrom(from._internal_using_device_types());
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_name(from._internal_name());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.group_id_ = from._impl_.group_id_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.user_id_ = from._impl_.user_id_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.join_date_ = from._impl_.join_date_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.role_ = from._impl_.role_;
    }
    if (cached_has_bits & 0x00000020u) {
      _this->_impl_.user_status_ = from._impl_.user_status_;
    }
    if (cached_has_bits & 0x00000040u) {
      _this->_impl_.mute_end_date_ = from._impl_.mute_end_date_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void GroupMember::CopyFrom(const GroupMember& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:turms.client.model.proto.GroupMember)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool GroupMember::IsInitialized() const {
  return true;
}

void GroupMember::InternalSwap(GroupMember* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.using_device_types_.InternalSwap(&other->_impl_.using_device_types_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.name_, lhs_arena,
                                       &other->_impl_.name_, rhs_arena);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(GroupMember, _impl_.mute_end_date_)
      + sizeof(GroupMember::_impl_.mute_end_date_)
      - PROTOBUF_FIELD_OFFSET(GroupMember, _impl_.group_id_)>(
          reinterpret_cast<char*>(&_impl_.group_id_),
          reinterpret_cast<char*>(&other->_impl_.group_id_));
}

std::string GroupMember::GetTypeName() const {
  return "turms.client.model.proto.GroupMember";
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"