__ZN6google8protobuf14DynamicMessage19CrossLinkPrototypesEv
void __fastcall google::protobuf::DynamicMessage::CrossLinkPrototypes(google::protobuf::DynamicMessage *this)
{
  _QWORD *v2; // x8
  google::protobuf::DynamicMessage *v3; // x9
  google::protobuf::internal::LogMessage *v5; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  __int64 v8; // x24
  google::protobuf::DynamicMessageFactory *v9; // x20
  __int64 v10; // x27
  __int64 v11; // x26
  std::once_flag::_State_type *v12; // x0
  const google::protobuf::Descriptor *v13; // x0
  _QWORD v14[6]; // [xsp+8h] [xbp-98h] BYREF
  __int64 v15; // [xsp+38h] [xbp-68h] BYREF
  void (__fastcall *v16)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+40h] [xbp-60h] BYREF
  _QWORD *v17; // [xsp+48h] [xbp-58h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 2);
  v3 = (google::protobuf::DynamicMessage *)v2[8];
  if ( v3 != this && v3 != 0LL )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v14,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/dynamic_message.cc",
      603LL);
    v5 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     v14,
                                                     "CHECK failed: is_prototype(): ");
    google::protobuf::internal::LogFinisher::operator=((int)&v17, v5);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v14);
    v2 = (_QWORD *)*((_QWORD *)this + 2);
  }
  v6 = v2[4];
  if ( *(int *)(v6 + 104) >= 1 )
  {
    v7 = 0LL;
    v8 = 0LL;
    v9 = (google::protobuf::DynamicMessageFactory *)v2[2];
    do
    {
      v10 = *(_QWORD *)(v6 + 40);
      v11 = *(int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 4 * v8);
      v12 = *(std::once_flag::_State_type **)(v10 + v7 + 48);
      if ( v12 )
      {
        v15 = v10 + v7;
        v16 = google::protobuf::FieldDescriptor::TypeOnceInit;
        if ( atomic_load_explicit((atomic_ullong *volatile)v12, memory_order_acquire) != -1LL )
        {
          v14[0] = &v16;
          v14[1] = &v15;
          v17 = v14;
          std::__call_once(v12, &v17, (void (__cdecl *)(void *))sub_10007A460);
        }
      }
      if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*(unsigned int *)(v10 + v7 + 56)] == 10
        && *(_DWORD *)(v10 + v7 + 60) != 3 )
      {
        v13 = (const google::protobuf::Descriptor *)google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)(v10 + v7));
        *(_QWORD *)((char *)this + v11) = google::protobuf::DynamicMessageFactory::GetPrototypeNoLock(v9, v13);
      }
      ++v8;
      v7 += 152LL;
    }
    while ( v8 < *(int *)(v6 + 104) );
  }
}