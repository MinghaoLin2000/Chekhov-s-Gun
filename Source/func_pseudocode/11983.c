__ZN6google8protobuf8internal13ReflectionOps5MergeERKNS0_7MessageEPS3_
void __fastcall google::protobuf::internal::ReflectionOps::Merge(
        google::protobuf::internal::ReflectionOps *this,
        const google::protobuf::Message *a2,
        google::protobuf::Message *a3)
{
  google::protobuf::internal::LogMessage *v5; // x0
  __int64 v6; // x21
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x0
  google::protobuf::internal::LogMessage *v15; // x0
  google::protobuf::Reflection *v16; // x21
  __int64 v17; // x1
  google::protobuf::Reflection *v18; // x22
  google::protobuf::MessageFactory *MessageFactory; // x23
  __int64 v20; // x24
  google::protobuf::MessageFactory *v21; // x25
  __int64 v22; // x26
  char *v23; // x27
  __int64 v24; // x23
  std::once_flag::_State_type *v25; // x0
  atomic_uint *MapData; // x24
  atomic_uint *v27; // x25
  std::once_flag::_State_type *v28; // x0
  int Int32; // w0
  int v30; // w24
  int i; // w25
  std::once_flag::_State_type *v32; // x0
  int RepeatedInt32; // w0
  __int64 RepeatedInt64; // x0
  int RepeatedUInt32; // w0
  __int64 RepeatedUInt64; // x0
  double RepeatedDouble; // d0
  float RepeatedFloat; // s0
  char RepeatedBool; // w0
  __int64 RepeatedEnum; // x0
  __int64 RepeatedMessage; // x0
  __int64 v42; // x26
  google::protobuf::MessageFactory *v43; // x3
  std::once_flag::_State_type **v44; // x0
  google::protobuf::Reflection *v45; // x1
  __int64 v46; // x0
  __int64 Int64; // x0
  unsigned int UInt32; // w0
  unsigned __int64 UInt64; // x0
  double Double; // d0
  float Float; // s0
  bool Bool; // w0
  const google::protobuf::EnumValueDescriptor *Enum; // x0
  __int64 Message; // x0
  __int64 v55; // x24
  google::protobuf::MessageFactory *v56; // x3
  std::once_flag::_State_type **v57; // x0
  google::protobuf::Reflection *v58; // x1
  __int64 v59; // x0
  google::protobuf::UnknownFieldSet *v60; // x20
  const google::protobuf::UnknownFieldSet *UnknownFields; // x0
  int v62; // [xsp+4h] [xbp-ECh]
  char *v63; // [xsp+8h] [xbp-E8h]
  void *v64[2]; // [xsp+10h] [xbp-E0h] BYREF
  char v65; // [xsp+27h] [xbp-C9h]
  void *__p[2]; // [xsp+28h] [xbp-C8h] BYREF
  char v67; // [xsp+3Fh] [xbp-B1h]
  void *v68; // [xsp+40h] [xbp-B0h] BYREF
  char *v69; // [xsp+48h] [xbp-A8h]
  __int64 v70; // [xsp+50h] [xbp-A0h]
  __int64 v71; // [xsp+70h] [xbp-80h] BYREF
  void (__fastcall *v72)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+78h] [xbp-78h] BYREF
  void (__fastcall ***v73)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+80h] [xbp-70h] BYREF
  void (__fastcall **v74)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+88h] [xbp-68h] BYREF
  __int64 *v75; // [xsp+90h] [xbp-60h]

  if ( this == a2 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v68,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/reflection_ops.cc",
      71LL);
    v5 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     &v68,
                                                     "CHECK failed: (&from) != (to): ");
    google::protobuf::internal::LogFinisher::operator=((int)&v74, v5);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&v68);
  }
  v6 = (*(__int64 (__fastcall **)(google::protobuf::internal::ReflectionOps *))(*(_QWORD *)this + 152LL))(this);
  if ( (*(__int64 (__fastcall **)(const google::protobuf::Message *))(*(_QWORD *)a2 + 152LL))(a2) != v6 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v68,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/reflection_ops.cc",
      74LL);
    v8 = google::protobuf::internal::LogMessage::operator<<(
           &v68,
           "CHECK failed: (to->GetDescriptor()) == (descriptor): ");
    v9 = google::protobuf::internal::LogMessage::operator<<(v8, "Tried to merge messages of different types ");
    v10 = google::protobuf::internal::LogMessage::operator<<(v9, "(merge ");
    v11 = google::protobuf::internal::LogMessage::operator<<(v10, *(_QWORD *)(v6 + 8));
    v12 = google::protobuf::internal::LogMessage::operator<<(v11, " to ");
    v13 = (*(__int64 (__fastcall **)(const google::protobuf::Message *))(*(_QWORD *)a2 + 152LL))(a2);
    v14 = google::protobuf::internal::LogMessage::operator<<(v12, *(_QWORD *)(v13 + 8));
    v15 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(v14, ")");
    google::protobuf::internal::LogFinisher::operator=((int)&v74, v15);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&v68);
  }
  v16 = (google::protobuf::Reflection *)sub_1000ED454(this, v7);
  v18 = (google::protobuf::Reflection *)sub_1000ED454(a2, v17);
  MessageFactory = (google::protobuf::MessageFactory *)google::protobuf::Reflection::GetMessageFactory(v16);
  v20 = google::protobuf::MessageFactory::generated_factory(MessageFactory);
  v21 = (google::protobuf::MessageFactory *)google::protobuf::Reflection::GetMessageFactory(v18);
  v22 = google::protobuf::MessageFactory::generated_factory(v21);
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  google::protobuf::Reflection::ListFieldsOmitStripped((__int64)v16, this, (char **)&v68);
  v23 = (char *)v68;
  v63 = v69;
  if ( v68 != v69 )
  {
    v62 = (MessageFactory != (google::protobuf::MessageFactory *)v20) ^ (v21 == (google::protobuf::MessageFactory *)v22);
    do
    {
      v24 = *(_QWORD *)v23;
      if ( *(_DWORD *)(*(_QWORD *)v23 + 60LL) == 3 )
      {
        if ( !v62 )
          goto LABEL_22;
        v25 = *(std::once_flag::_State_type **)(v24 + 48);
        if ( v25 )
        {
          v71 = *(_QWORD *)v23;
          v72 = google::protobuf::FieldDescriptor::TypeOnceInit;
          if ( atomic_load_explicit((atomic_ullong *volatile)v25, memory_order_acquire) != -1LL )
          {
            v74 = &v72;
            v75 = &v71;
            v73 = &v74;
            std::__call_once(v25, &v73, (void (__cdecl *)(void *))sub_10007A460);
          }
        }
        if ( *(_DWORD *)(v24 + 56) == 11
          && (unsigned int)google::protobuf::FieldDescriptor::is_map_message_type((google::protobuf::FieldDescriptor *)v24)
          && (MapData = (atomic_uint *)google::protobuf::Reflection::GetMapData(
                                         v16,
                                         this,
                                         (const google::protobuf::FieldDescriptor *)v24),
              v27 = (atomic_uint *)google::protobuf::Reflection::MutableMapData(
                                     v18,
                                     a2,
                                     (const google::protobuf::FieldDescriptor *)v24),
              google::protobuf::internal::MapFieldBase::IsMapValid(v27))
          && google::protobuf::internal::MapFieldBase::IsMapValid(MapData) )
        {
          (*(void (__fastcall **)(atomic_uint *, atomic_uint *))(*(_QWORD *)v27 + 72LL))(v27, MapData);
        }
        else
        {
LABEL_22:
          v30 = google::protobuf::Reflection::FieldSize(v16, this, (const google::protobuf::FieldDescriptor *)v24);
          if ( v30 >= 1 )
          {
            for ( i = 0; i != v30; ++i )
            {
              v32 = *(std::once_flag::_State_type **)(v24 + 48);
              if ( v32 )
              {
                v71 = v24;
                v72 = google::protobuf::FieldDescriptor::TypeOnceInit;
                if ( atomic_load_explicit((atomic_ullong *volatile)v32, memory_order_acquire) != -1LL )
                {
                  v74 = &v72;
                  v75 = &v71;
                  v73 = &v74;
                  std::__call_once(v32, &v73, (void (__cdecl *)(void *))sub_10007A460);
                }
              }
              switch ( *(_DWORD *)(v24 + 56) )
              {
                case 1:
                  RepeatedDouble = google::protobuf::Reflection::GetRepeatedDouble(
                                     v16,
                                     this,
                                     (const google::protobuf::FieldDescriptor *)v24,
                                     i);
                  google::protobuf::Reflection::AddDouble(
                    v18,
                    a2,
                    (const google::protobuf::FieldDescriptor *)v24,
                    RepeatedDouble);
                  break;
                case 2:
                  RepeatedFloat = google::protobuf::Reflection::GetRepeatedFloat(
                                    v16,
                                    this,
                                    (const google::protobuf::FieldDescriptor *)v24,
                                    i);
                  google::protobuf::Reflection::AddFloat(
                    v18,
                    a2,
                    (const google::protobuf::FieldDescriptor *)v24,
                    RepeatedFloat);
                  break;
                case 3:
                case 0x10:
                case 0x12:
                  RepeatedInt64 = google::protobuf::Reflection::GetRepeatedInt64(
                                    v16,
                                    this,
                                    (const google::protobuf::FieldDescriptor *)v24,
                                    i);
                  google::protobuf::Reflection::AddInt64(
                    v18,
                    a2,
                    (const google::protobuf::FieldDescriptor *)v24,
                    RepeatedInt64);
                  break;
                case 4:
                case 6:
                  RepeatedUInt64 = google::protobuf::Reflection::GetRepeatedUInt64(
                                     v16,
                                     this,
                                     (const google::protobuf::FieldDescriptor *)v24,
                                     i);
                  google::protobuf::Reflection::AddUInt64(
                    v18,
                    a2,
                    (const google::protobuf::FieldDescriptor *)v24,
                    RepeatedUInt64);
                  break;
                case 5:
                case 0xF:
                case 0x11:
                  RepeatedInt32 = google::protobuf::Reflection::GetRepeatedInt32(
                                    v16,
                                    this,
                                    (const google::protobuf::FieldDescriptor *)v24,
                                    i);
                  google::protobuf::Reflection::AddInt32(
                    v18,
                    a2,
                    (const google::protobuf::FieldDescriptor *)v24,
                    RepeatedInt32);
                  break;
                case 7:
                case 0xD:
                  RepeatedUInt32 = google::protobuf::Reflection::GetRepeatedUInt32(
                                     v16,
                                     this,
                                     (const google::protobuf::FieldDescriptor *)v24,
                                     i);
                  google::protobuf::Reflection::AddUInt32(
                    v18,
                    a2,
                    (const google::protobuf::FieldDescriptor *)v24,
                    RepeatedUInt32);
                  break;
                case 8:
                  RepeatedBool = google::protobuf::Reflection::GetRepeatedBool(
                                   v16,
                                   this,
                                   (const google::protobuf::FieldDescriptor *)v24,
                                   i);
                  google::protobuf::Reflection::AddBool(
                    v18,
                    a2,
                    (const google::protobuf::FieldDescriptor *)v24,
                    RepeatedBool);
                  break;
                case 9:
                case 0xC:
                  google::protobuf::Reflection::GetRepeatedString(
                    v16,
                    this,
                    (const google::protobuf::FieldDescriptor *)v24,
                    i,
                    __p);
                  google::protobuf::Reflection::AddString(
                    v18,
                    (__int64)a2,
                    (google::protobuf::FieldDescriptor *)v24,
                    (__int64 *)__p);
                  if ( v67 < 0 )
                    operator delete(__p[0]);
                  break;
                case 0xA:
                case 0xB:
                  RepeatedMessage = google::protobuf::Reflection::GetRepeatedMessage(
                                      v16,
                                      this,
                                      (const google::protobuf::FieldDescriptor *)v24,
                                      i);
                  v42 = RepeatedMessage;
                  if ( v16 == v18 )
                  {
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)RepeatedMessage + 152LL))(RepeatedMessage);
                    v43 = (google::protobuf::MessageFactory *)google::protobuf::Reflection::GetMessageFactory(v45);
                    v44 = (std::once_flag::_State_type **)v16;
                  }
                  else
                  {
                    v43 = 0LL;
                    v44 = (std::once_flag::_State_type **)v18;
                  }
                  v46 = google::protobuf::Reflection::AddMessage(v44, a2, (std::once_flag::_State_type **)v24, v43);
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v46 + 120LL))(v46, v42);
                  break;
                case 0xE:
                  RepeatedEnum = google::protobuf::Reflection::GetRepeatedEnum(
                                   v16,
                                   this,
                                   (const google::protobuf::FieldDescriptor *)v24,
                                   i);
                  google::protobuf::Reflection::AddEnum(v18, a2, (google::protobuf::FieldDescriptor *)v24, RepeatedEnum);
                  break;
                default:
                  continue;
              }
            }
          }
        }
      }
      else
      {
        v28 = *(std::once_flag::_State_type **)(v24 + 48);
        if ( v28 )
        {
          v71 = *(_QWORD *)v23;
          v72 = google::protobuf::FieldDescriptor::TypeOnceInit;
          if ( atomic_load_explicit((atomic_ullong *volatile)v28, memory_order_acquire) != -1LL )
          {
            v74 = &v72;
            v75 = &v71;
            v73 = &v74;
            std::__call_once(v28, &v73, (void (__cdecl *)(void *))sub_10007A460);
          }
        }
        switch ( *(_DWORD *)(v24 + 56) )
        {
          case 1:
            Double = google::protobuf::Reflection::GetDouble(v16, this, (const google::protobuf::FieldDescriptor *)v24);
            google::protobuf::Reflection::SetDouble(v18, a2, (const google::protobuf::FieldDescriptor *)v24, Double);
            break;
          case 2:
            Float = google::protobuf::Reflection::GetFloat(v16, this, (const google::protobuf::FieldDescriptor *)v24);
            google::protobuf::Reflection::SetFloat(v18, a2, (const google::protobuf::FieldDescriptor *)v24, Float);
            break;
          case 3:
          case 0x10:
          case 0x12:
            Int64 = google::protobuf::Reflection::GetInt64(v16, this, (const google::protobuf::FieldDescriptor *)v24);
            google::protobuf::Reflection::SetInt64(v18, a2, (const google::protobuf::FieldDescriptor *)v24, Int64);
            break;
          case 4:
          case 6:
            UInt64 = google::protobuf::Reflection::GetUInt64(v16, this, (const google::protobuf::FieldDescriptor *)v24);
            google::protobuf::Reflection::SetUInt64(v18, a2, (const google::protobuf::FieldDescriptor *)v24, UInt64);
            break;
          case 5:
          case 0xF:
          case 0x11:
            Int32 = google::protobuf::Reflection::GetInt32(v16, this, (const google::protobuf::FieldDescriptor *)v24);
            google::protobuf::Reflection::SetInt32(v18, a2, (const google::protobuf::FieldDescriptor *)v24, Int32);
            break;
          case 7:
          case 0xD:
            UInt32 = google::protobuf::Reflection::GetUInt32(v16, this, (const google::protobuf::FieldDescriptor *)v24);
            google::protobuf::Reflection::SetUInt32(v18, a2, (const google::protobuf::FieldDescriptor *)v24, UInt32);
            break;
          case 8:
            Bool = google::protobuf::Reflection::GetBool(v16, this, (const google::protobuf::FieldDescriptor *)v24);
            google::protobuf::Reflection::SetBool(v18, a2, (const google::protobuf::FieldDescriptor *)v24, Bool);
            break;
          case 9:
          case 0xC:
            google::protobuf::Reflection::GetString(
              (__int64 *)v64,
              v16,
              this,
              (const google::protobuf::FieldDescriptor *)v24);
            google::protobuf::Reflection::SetString(
              (unsigned int *)v18,
              a2,
              (google::protobuf::FieldDescriptor *)v24,
              (__int64 *)v64);
            if ( v65 < 0 )
              operator delete(v64[0]);
            break;
          case 0xA:
          case 0xB:
            Message = google::protobuf::Reflection::GetMessage(
                        v16,
                        this,
                        (const google::protobuf::FieldDescriptor *)v24,
                        0LL);
            v55 = Message;
            if ( v16 == v18 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)Message + 152LL))(Message);
              v56 = (google::protobuf::MessageFactory *)google::protobuf::Reflection::GetMessageFactory(v58);
              v57 = (std::once_flag::_State_type **)v16;
            }
            else
            {
              v56 = 0LL;
              v57 = (std::once_flag::_State_type **)v18;
            }
            v59 = google::protobuf::Reflection::MutableMessage(v57, a2, (std::once_flag::_State_type **)v24, v56);
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v59 + 120LL))(v59, v55);
            break;
          case 0xE:
            Enum = (const google::protobuf::EnumValueDescriptor *)google::protobuf::Reflection::GetEnum(
                                                                    v16,
                                                                    this,
                                                                    (const google::protobuf::FieldDescriptor *)v24);
            google::protobuf::Reflection::SetEnum(v18, a2, (const google::protobuf::FieldDescriptor *)v24, Enum);
            break;
          default:
            break;
        }
      }
      v23 += 8;
    }
    while ( v23 != v63 );
  }
  v60 = (google::protobuf::UnknownFieldSet *)google::protobuf::Reflection::MutableUnknownFields(v18, a2);
  UnknownFields = (const google::protobuf::UnknownFieldSet *)google::protobuf::Reflection::GetUnknownFields(
                                                               (unsigned int *)v16,
                                                               (__int64)this);
  google::protobuf::UnknownFieldSet::MergeFrom(v60, UnknownFields);
  if ( v68 )
  {
    v69 = (char *)v68;
    operator delete(v68);
  }
}