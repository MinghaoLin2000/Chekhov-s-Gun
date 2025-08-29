__ZNK6google8protobuf10TextFormat7Printer8PrintAnyERKNS0_7MessageEPNS2_13TextGeneratorE
__int64 __fastcall google::protobuf::TextFormat::Printer::PrintAny(
        __int64 a1,
        const google::protobuf::Message *a2,
        __int64 a3)
{
  google::protobuf::Reflection *v6; // x1
  google::protobuf::Reflection *v7; // x23
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x23
  const google::protobuf::Descriptor *v11; // x22
  google::protobuf::DynamicMessageFactory *v12; // x0
  _QWORD *Prototype; // x0
  const google::protobuf::Message *v14; // x22
  void **v15; // x1
  unsigned __int64 v16; // x2
  _QWORD *v17; // x11
  __int64 v18; // x8
  unsigned __int64 v19; // x12
  bool v20; // cf
  _QWORD *v21; // x12
  _QWORD *v22; // x8
  __int64 v23; // x24
  const google::protobuf::Descriptor *v24; // x1
  const unsigned int *v25; // x2
  const void *v26; // x3
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x0
  google::protobuf::internal::LogMessage *v30; // x0
  __int64 v31; // x0
  google::protobuf::internal::LogMessage *v32; // x0
  char v34; // [xsp+7h] [xbp-159h] BYREF
  _BYTE v35[48]; // [xsp+8h] [xbp-158h] BYREF
  void *__p[2]; // [xsp+38h] [xbp-128h] BYREF
  char v37; // [xsp+4Fh] [xbp-111h]
  void *v38[2]; // [xsp+50h] [xbp-110h] BYREF
  void *v39[2]; // [xsp+60h] [xbp-100h] BYREF
  __int64 v40; // [xsp+70h] [xbp-F0h]
  void *v41[2]; // [xsp+78h] [xbp-E8h] BYREF
  __int64 v42; // [xsp+88h] [xbp-D8h]
  void *v43[2]; // [xsp+90h] [xbp-D0h] BYREF
  unsigned __int8 v44; // [xsp+A7h] [xbp-B9h]
  const google::protobuf::FieldDescriptor *v45; // [xsp+A8h] [xbp-B8h] BYREF
  const google::protobuf::FieldDescriptor *v46; // [xsp+B0h] [xbp-B0h] BYREF
  _BYTE v47[96]; // [xsp+B8h] [xbp-A8h] BYREF

  v45 = 0LL;
  v46 = 0LL;
  if ( !google::protobuf::internal::GetAnyFieldDescriptors((__int64)a2, (__int64 *)&v46, (__int64 *)&v45) )
    return 0LL;
  (*(void (__fastcall **)(const google::protobuf::Message *))(*(_QWORD *)a2 + 152LL))(a2);
  v7 = v6;
  google::protobuf::Reflection::GetString((__int64 *)v43, v6, a2, v46);
  v41[0] = 0LL;
  v41[1] = 0LL;
  v42 = 0LL;
  v39[0] = 0LL;
  v39[1] = 0LL;
  v40 = 0LL;
  sub_10007A644(v38, v43);
  if ( (google::protobuf::internal::ParseAnyTypeUrl(v38[0], v38[1], v41, v39) & 1) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 80);
    if ( v8 )
      v9 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::Message *, void **, void **))(*(_QWORD *)v8 + 32LL))(
             v8,
             a2,
             v41,
             v39);
    else
      v9 = sub_1000F8370(a2, v41, v39);
    v11 = (const google::protobuf::Descriptor *)v9;
    if ( v9 )
    {
      v12 = google::protobuf::DynamicMessageFactory::DynamicMessageFactory((google::protobuf::DynamicMessageFactory *)v47);
      Prototype = google::protobuf::DynamicMessageFactory::GetPrototype(v12, v11);
      v14 = (const google::protobuf::Message *)(*(__int64 (__fastcall **)(_QWORD *))(*Prototype + 24LL))(Prototype);
      google::protobuf::Reflection::GetString((__int64 *)__p, v7, a2, v45);
      v10 = google::protobuf::MessageLite::ParseFromString((__int64)v14, (__int64)__p);
      if ( (v10 & 1) != 0 )
      {
        (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a3 + 40LL))(a3, "[", 1LL);
        if ( (v44 & 0x80u) == 0 )
          v15 = v43;
        else
          v15 = (void **)v43[0];
        if ( (v44 & 0x80u) == 0 )
          v16 = v44;
        else
          v16 = (unsigned __int64)v43[1];
        (*(void (__fastcall **)(__int64, void **, unsigned __int64))(*(_QWORD *)a3 + 40LL))(a3, v15, v16);
        (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a3 + 40LL))(a3, "]", 1LL);
        v17 = *(_QWORD **)(a1 + 40);
        if ( !v17 )
          goto LABEL_26;
        v18 = a1 + 40;
        do
        {
          v19 = v17[4];
          v20 = v19 >= (unsigned __int64)v45;
          if ( v19 >= (unsigned __int64)v45 )
            v21 = v17;
          else
            v21 = v17 + 1;
          if ( v20 )
            v18 = (__int64)v17;
          v17 = (_QWORD *)*v21;
        }
        while ( *v21 );
        if ( v18 != a1 + 40 && *(_QWORD *)(v18 + 32) <= (unsigned __int64)v45 )
          v22 = (_QWORD *)(v18 + 40);
        else
LABEL_26:
          v22 = (_QWORD *)(a1 + 24);
        v23 = *v22;
        (*(void (__fastcall **)(_QWORD, const google::protobuf::Message *, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)*v22 + 112LL))(
          *v22,
          a2,
          0xFFFFFFFFLL,
          0LL,
          *(unsigned __int8 *)(a1 + 4),
          a3);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
        google::protobuf::TextFormat::Printer::Print(a1, v14, a3);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 24LL))(a3);
        (*(void (__fastcall **)(__int64, const google::protobuf::Message *, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v23 + 128LL))(
          v23,
          a2,
          0xFFFFFFFFLL,
          0LL,
          *(unsigned __int8 *)(a1 + 4),
          a3);
      }
      else
      {
        google::protobuf::internal::LogMessage::LogMessage(
          v35,
          1LL,
          "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/persistence/google/protobuf/text_format.cc",
          2001LL);
        v31 = google::protobuf::internal::LogMessage::operator<<(v35, v43);
        v32 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                          v31,
                                                          ": failed to parse contents");
        google::protobuf::internal::LogFinisher::operator=((int)&v34, v32);
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v35);
      }
      if ( v37 < 0 )
        operator delete(__p[0]);
      if ( v14 )
        (*(void (__fastcall **)(const google::protobuf::Message *))(*(_QWORD *)v14 + 8LL))(v14);
      google::protobuf::DynamicMessageFactory::~DynamicMessageFactory(
        (google::protobuf::DynamicMessageFactory *)v47,
        v24,
        v25,
        v26);
      goto LABEL_36;
    }
    v27 = google::protobuf::internal::LogMessage::LogMessage(
            v47,
            1LL,
            "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/persistence/google/protobuf/text_format.cc",
            1992LL);
    v28 = google::protobuf::internal::LogMessage::operator<<(v27, "Can't print proto content: proto type ");
    v29 = google::protobuf::internal::LogMessage::operator<<(v28, v43);
    v30 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                      v29,
                                                      " not found");
    google::protobuf::internal::LogFinisher::operator=((int)v35, v30);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v47);
  }
  v10 = 0LL;
LABEL_36:
  if ( SHIBYTE(v40) < 0 )
    operator delete(v39[0]);
  if ( SHIBYTE(v42) < 0 )
    operator delete(v41[0]);
  if ( (char)v44 < 0 )
    operator delete(v43[0]);
  return v10;
}