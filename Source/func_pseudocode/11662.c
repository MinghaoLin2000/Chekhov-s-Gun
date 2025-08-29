__ZNK6google8protobuf10Reflection14SwapOneofFieldEPNS0_7MessageES3_PKNS0_15OneofDescriptorE
void __fastcall google::protobuf::Reflection::SwapOneofField(
        google::protobuf::Reflection *this,
        google::protobuf::Message *a2,
        google::protobuf::Message *a3,
        const google::protobuf::OneofDescriptor *a4)
{
  unsigned int v8; // w8
  int v9; // w24
  int v10; // w28
  __int64 FieldByNumber; // x19
  std::once_flag::_State_type *v12; // x0
  void (__fastcall **v13)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // x20
  char v14; // w26
  google::protobuf::Message *v15; // x27
  __int64 v16; // x28
  std::once_flag::_State_type *v17; // x0
  unsigned int v18; // w0
  std::once_flag::_State_type *v19; // x0
  int *v20; // x3
  __int64 v21; // x20
  std::once_flag::_State_type *v22; // x0
  google::protobuf::internal::LogMessage *v23; // x0
  __int64 v24; // x25
  std::once_flag::_State_type *v25; // x0
  google::protobuf::internal::LogMessage *v26; // x0
  unsigned int v27; // w0
  unsigned int v28; // w0
  unsigned int v29; // w0
  unsigned int v30; // w0
  google::protobuf::Message *v31; // x0
  __int64 v32; // x21
  std::once_flag::_State_type *v33; // x0
  google::protobuf::internal::LogMessage *v34; // x0
  void (__fastcall **v35)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+8h] [xbp-128h]
  void *__dst[2]; // [xsp+10h] [xbp-120h] BYREF
  _BYTE v37[7]; // [xsp+20h] [xbp-110h]
  char v38; // [xsp+27h] [xbp-109h]
  void *__p; // [xsp+28h] [xbp-108h] BYREF
  char v40; // [xsp+3Fh] [xbp-F1h]
  void (__fastcall **v41)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+40h] [xbp-F0h] BYREF
  void (__fastcall **v42)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+48h] [xbp-E8h]
  _BYTE v43[7]; // [xsp+50h] [xbp-E0h]
  char v44; // [xsp+57h] [xbp-D9h]
  _DWORD v45[2]; // [xsp+70h] [xbp-C0h] BYREF
  int v46; // [xsp+78h] [xbp-B8h] BYREF
  char v47; // [xsp+7Fh] [xbp-B1h] BYREF
  __int64 v48; // [xsp+80h] [xbp-B0h] BYREF
  int v49; // [xsp+8Ch] [xbp-A4h] BYREF
  __int64 v50; // [xsp+90h] [xbp-A0h] BYREF
  int v51; // [xsp+9Ch] [xbp-94h] BYREF
  __int64 v52; // [xsp+A0h] [xbp-90h] BYREF
  int v53; // [xsp+ACh] [xbp-84h] BYREF
  __int64 v54; // [xsp+B0h] [xbp-80h] BYREF
  void (__fastcall *v55)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+B8h] [xbp-78h] BYREF
  void (__fastcall *v56)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+C0h] [xbp-70h] BYREF
  void (__fastcall **v57)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+C8h] [xbp-68h] BYREF
  __int64 *v58; // [xsp+D0h] [xbp-60h]

  v8 = *((_DWORD *)this + 11) - 1431655764 * (((unsigned __int64)a4 - *(_QWORD *)(*((_QWORD *)a4 + 2) + 48LL)) >> 4);
  v9 = *(_DWORD *)((char *)a2 + v8);
  v10 = *(_DWORD *)((char *)a3 + v8);
  v53 = 0;
  v52 = 0LL;
  v51 = 0;
  v50 = 0LL;
  v49 = 0;
  v48 = 0LL;
  v47 = 0;
  v46 = 0;
  memset(v45, 0, 7);
  if ( v9 )
  {
    FieldByNumber = google::protobuf::Descriptor::FindFieldByNumber(*(google::protobuf::Descriptor **)this, v9);
    v12 = *(std::once_flag::_State_type **)(FieldByNumber + 48);
    if ( v12 )
    {
      v55 = (void (__fastcall *)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *))FieldByNumber;
      v56 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v12, memory_order_acquire) != -1LL )
      {
        v41 = &v56;
        v42 = &v55;
        v57 = (void (__fastcall **)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *))&v41;
        std::__call_once(v12, &v57, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    switch ( *(_DWORD *)(FieldByNumber + 56) )
    {
      case 1:
        v13 = 0LL;
        v35 = 0LL;
        v14 = 0;
        v15 = 0LL;
        v48 = *(_QWORD *)((char *)a2 + (unsigned int)sub_1000DF774((char *)this + 8, FieldByNumber));
        break;
      case 2:
        v13 = 0LL;
        v35 = 0LL;
        v14 = 0;
        v15 = 0LL;
        v49 = *(_DWORD *)((char *)a2 + (unsigned int)sub_1000DF774((char *)this + 8, FieldByNumber));
        break;
      case 3:
      case 0x10:
      case 0x12:
        v13 = 0LL;
        v35 = 0LL;
        v14 = 0;
        v15 = 0LL;
        v52 = *(_QWORD *)((char *)a2 + (unsigned int)sub_1000DF774((char *)this + 8, FieldByNumber));
        break;
      case 4:
      case 6:
        v13 = 0LL;
        v35 = 0LL;
        v14 = 0;
        v15 = 0LL;
        v50 = *(_QWORD *)((char *)a2 + (unsigned int)sub_1000DF774((char *)this + 8, FieldByNumber));
        break;
      case 5:
      case 0xF:
      case 0x11:
        v13 = 0LL;
        v35 = 0LL;
        v14 = 0;
        v15 = 0LL;
        v53 = *(_DWORD *)((char *)a2 + (unsigned int)sub_1000DF774((char *)this + 8, FieldByNumber));
        break;
      case 7:
      case 0xD:
        v13 = 0LL;
        v35 = 0LL;
        v14 = 0;
        v15 = 0LL;
        v51 = *(_DWORD *)((char *)a2 + (unsigned int)sub_1000DF774((char *)this + 8, FieldByNumber));
        break;
      case 8:
        v13 = 0LL;
        v35 = 0LL;
        v14 = 0;
        v15 = 0LL;
        v47 = *((_BYTE *)a2 + (unsigned int)sub_1000DF774((char *)this + 8, FieldByNumber));
        break;
      case 9:
      case 0xC:
        google::protobuf::Reflection::GetString(
          (__int64 *)&v41,
          this,
          a2,
          (const google::protobuf::FieldDescriptor *)FieldByNumber);
        v15 = 0LL;
        v13 = v41;
        v35 = v42;
        v45[0] = *(_DWORD *)v43;
        *(_DWORD *)((char *)v45 + 3) = *(_DWORD *)&v43[3];
        v14 = v44;
        break;
      case 0xA:
      case 0xB:
        v14 = 0;
        v15 = (google::protobuf::Message *)google::protobuf::Reflection::ReleaseMessage(
                                             this,
                                             a2,
                                             (const google::protobuf::FieldDescriptor *)FieldByNumber,
                                             0LL);
        v13 = 0LL;
        v35 = 0LL;
        break;
      case 0xE:
        v13 = 0LL;
        v35 = 0LL;
        v14 = 0;
        v15 = 0LL;
        v46 = *(_DWORD *)((char *)a2 + (unsigned int)sub_1000DF774((char *)this + 8, FieldByNumber));
        break;
      default:
        google::protobuf::internal::LogMessage::LogMessage(
          &v41,
          3LL,
          "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/persistence/google/protobuf/generated_message_reflection.cc",
          522LL);
        v21 = google::protobuf::internal::LogMessage::operator<<(&v41, "Unimplemented type: ");
        v22 = *(std::once_flag::_State_type **)(FieldByNumber + 48);
        if ( v22 )
        {
          v54 = FieldByNumber;
          v55 = google::protobuf::FieldDescriptor::TypeOnceInit;
          if ( atomic_load_explicit((atomic_ullong *volatile)v22, memory_order_acquire) != -1LL )
          {
            v57 = &v55;
            v58 = &v54;
            v56 = (void (__fastcall *)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *))&v57;
            std::__call_once(v22, &v56, (void (__cdecl *)(void *))sub_10007A460);
          }
        }
        v23 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                          v21,
                                                          (unsigned int)google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*(unsigned int *)(FieldByNumber + 56)]);
        google::protobuf::internal::LogFinisher::operator=((int)&v57, v23);
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&v41);
        v13 = 0LL;
        v35 = 0LL;
        v14 = 0;
        v15 = 0LL;
        break;
    }
  }
  else
  {
    v13 = 0LL;
    v35 = 0LL;
    v14 = 0;
    v15 = 0LL;
    FieldByNumber = 0LL;
  }
  if ( v10 )
  {
    v16 = google::protobuf::Descriptor::FindFieldByNumber(*(google::protobuf::Descriptor **)this, v10);
    v17 = *(std::once_flag::_State_type **)(v16 + 48);
    if ( v17 )
    {
      v55 = (void (__fastcall *)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *))v16;
      v56 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v17, memory_order_acquire) != -1LL )
      {
        v41 = &v56;
        v42 = &v55;
        v57 = (void (__fastcall **)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *))&v41;
        std::__call_once(v17, &v57, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    switch ( *(_DWORD *)(v16 + 56) )
    {
      case 1:
        v28 = sub_1000DF774((char *)this + 8, v16);
        sub_1000D7C3C(this, a2, v16, (char *)a3 + v28);
        break;
      case 2:
        v29 = sub_1000DF774((char *)this + 8, v16);
        sub_1000D7B10(this, a2, v16, (char *)a3 + v29);
        break;
      case 3:
      case 4:
      case 6:
      case 0x10:
      case 0x12:
        v27 = sub_1000DF774((char *)this + 8, v16);
        sub_1000D79EC(this, a2, v16, (char *)a3 + v27);
        break;
      case 5:
      case 7:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x11:
        v18 = sub_1000DF774((char *)this + 8, v16);
        sub_1000D78C8(this, a2, v16, (char *)a3 + v18);
        break;
      case 8:
        v30 = sub_1000DF774((char *)this + 8, v16);
        sub_1000D7D68(this, a2, v16, (char *)a3 + v30);
        break;
      case 9:
      case 0xC:
        google::protobuf::Reflection::GetString(
          (__int64 *)&__p,
          this,
          a3,
          (const google::protobuf::FieldDescriptor *)v16);
        google::protobuf::Reflection::SetString((int)this, (int)a2, (google::protobuf::FieldDescriptor *)v16);
        if ( v40 < 0 )
          operator delete(__p);
        break;
      case 0xA:
      case 0xB:
        v31 = (google::protobuf::Message *)google::protobuf::Reflection::ReleaseMessage(
                                             this,
                                             a3,
                                             (const google::protobuf::FieldDescriptor *)v16,
                                             0LL);
        google::protobuf::Reflection::SetAllocatedMessage(this, a2, v31, (const google::protobuf::FieldDescriptor *)v16);
        break;
      default:
        google::protobuf::internal::LogMessage::LogMessage(
          &v41,
          3LL,
          "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/persistence/google/protobuf/generated_message_reflection.cc",
          553LL);
        v24 = google::protobuf::internal::LogMessage::operator<<(&v41, "Unimplemented type: ");
        v25 = *(std::once_flag::_State_type **)(v16 + 48);
        if ( v25 )
        {
          v54 = v16;
          v55 = google::protobuf::FieldDescriptor::TypeOnceInit;
          if ( atomic_load_explicit((atomic_ullong *volatile)v25, memory_order_acquire) != -1LL )
          {
            v57 = &v55;
            v58 = &v54;
            v56 = (void (__fastcall *)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *))&v57;
            std::__call_once(v25, &v56, (void (__cdecl *)(void *))sub_10007A460);
          }
        }
        v26 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                          v24,
                                                          (unsigned int)google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*(unsigned int *)(v16 + 56)]);
        google::protobuf::internal::LogFinisher::operator=((int)&v57, v26);
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&v41);
        break;
    }
  }
  else
  {
    google::protobuf::Reflection::ClearOneof(this, a2, a4);
  }
  if ( v9 )
  {
    v19 = *(std::once_flag::_State_type **)(FieldByNumber + 48);
    if ( v19 )
    {
      v55 = (void (__fastcall *)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *))FieldByNumber;
      v56 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v19, memory_order_acquire) != -1LL )
      {
        v41 = &v56;
        v42 = &v55;
        v57 = (void (__fastcall **)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *))&v41;
        std::__call_once(v19, &v57, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    v20 = &v53;
    switch ( *(_DWORD *)(FieldByNumber + 56) )
    {
      case 1:
        sub_1000D7C3C(this, a3, FieldByNumber, &v48);
        break;
      case 2:
        sub_1000D7B10(this, a3, FieldByNumber, &v49);
        break;
      case 3:
      case 0x10:
      case 0x12:
        sub_1000D79EC(this, a3, FieldByNumber, &v52);
        break;
      case 4:
      case 6:
        sub_1000D79EC(this, a3, FieldByNumber, &v50);
        break;
      case 5:
      case 0xF:
      case 0x11:
        goto LABEL_56;
      case 7:
      case 0xD:
        sub_1000D78C8(this, a3, FieldByNumber, &v51);
        break;
      case 8:
        sub_1000D7D68(this, a3, FieldByNumber, &v47);
        break;
      case 9:
      case 0xC:
        if ( v14 < 0 )
        {
          sub_10007A474(__dst, v13);
        }
        else
        {
          __dst[0] = v13;
          __dst[1] = v35;
          *(_DWORD *)v37 = v45[0];
          *(_DWORD *)&v37[3] = *(_DWORD *)((char *)v45 + 3);
          v38 = v14;
        }
        google::protobuf::Reflection::SetString((int)this, (int)a3, (google::protobuf::FieldDescriptor *)FieldByNumber);
        if ( v38 < 0 )
          operator delete(__dst[0]);
        break;
      case 0xA:
      case 0xB:
        google::protobuf::Reflection::SetAllocatedMessage(
          this,
          a3,
          v15,
          (const google::protobuf::FieldDescriptor *)FieldByNumber);
        break;
      case 0xE:
        v20 = &v46;
LABEL_56:
        sub_1000D78C8(this, a3, FieldByNumber, v20);
        break;
      default:
        google::protobuf::internal::LogMessage::LogMessage(
          &v41,
          3LL,
          "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/persistence/google/protobuf/generated_message_reflection.cc",
          585LL);
        v32 = google::protobuf::internal::LogMessage::operator<<(&v41, "Unimplemented type: ");
        v33 = *(std::once_flag::_State_type **)(FieldByNumber + 48);
        if ( v33 )
        {
          v54 = FieldByNumber;
          v55 = google::protobuf::FieldDescriptor::TypeOnceInit;
          if ( atomic_load_explicit((atomic_ullong *volatile)v33, memory_order_acquire) != -1LL )
          {
            v57 = &v55;
            v58 = &v54;
            v56 = (void (__fastcall *)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *))&v57;
            std::__call_once(v33, &v56, (void (__cdecl *)(void *))sub_10007A460);
          }
        }
        v34 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                          v32,
                                                          (unsigned int)google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*(unsigned int *)(FieldByNumber + 56)]);
        google::protobuf::internal::LogFinisher::operator=((int)&v57, v34);
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&v41);
        break;
    }
  }
  else
  {
    google::protobuf::Reflection::ClearOneof(this, a3, a4);
  }
  if ( v14 < 0 )
    operator delete(v13);
}