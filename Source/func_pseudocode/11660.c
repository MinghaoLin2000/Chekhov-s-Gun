__ZNK6google8protobuf10Reflection4SwapEPNS0_7MessageES3_
unsigned int *__fastcall google::protobuf::Reflection::Swap(
        unsigned int *this,
        google::protobuf::Message *a2,
        google::protobuf::Message *a3)
{
  unsigned int *v5; // x20
  unsigned int *v6; // x1
  __int64 v7; // x0
  __int64 v8; // x22
  __int64 v9; // x0
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x0
  google::protobuf::internal::LogMessage *v13; // x0
  unsigned int *v14; // x1
  __int64 v15; // x0
  __int64 v16; // x22
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  google::protobuf::internal::LogMessage *v21; // x0
  __int64 v22; // x10
  __int64 v23; // x8
  unsigned __int64 v24; // x9
  __int64 v25; // x11
  _QWORD *v26; // x10
  google::protobuf::Message *v27; // x22
  __int64 v28; // x9
  _QWORD *v29; // x8
  __int64 v30; // x9
  __int64 v31; // x10
  int v32; // w11
  int *v33; // x8
  int *v34; // x9
  __int64 v35; // x13
  int *v36; // x12
  int v37; // t1
  __int64 v38; // x13
  __int64 v39; // x10
  int v40; // w11
  signed int v41; // w8
  __int64 v42; // x22
  __int64 v43; // x23
  const google::protobuf::FieldDescriptor *v44; // x3
  __int64 v45; // x9
  __int64 v46; // x8
  __int64 v47; // x22
  __int64 v48; // x23
  __int64 v49; // x3
  __int64 v50; // x8
  __int64 v51; // x8
  __int64 v52; // x9
  __int64 *v53; // x21
  char *v54; // x0
  __int64 v55; // x8
  __int64 v56; // x8
  __int64 v57; // x8
  __int64 v58; // x8
  char v59; // [xsp+Fh] [xbp-61h] BYREF
  _BYTE v60[48]; // [xsp+10h] [xbp-60h] BYREF

  if ( a2 != a3 )
  {
    v5 = this;
    (*(void (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)a2 + 152LL))(a2);
    if ( v6 != v5 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        v60,
        3LL,
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/persistence/google/protobuf/generated_message_reflection.cc",
        596LL);
      v7 = google::protobuf::internal::LogMessage::operator<<(
             v60,
             "CHECK failed: (message1->GetReflection()) == (this): ");
      v8 = google::protobuf::internal::LogMessage::operator<<(v7, "First argument to Swap() (of type \"");
      v9 = (*(__int64 (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)a2 + 152LL))(a2);
      v10 = google::protobuf::internal::LogMessage::operator<<(v8, *(_QWORD *)(v9 + 8));
      v11 = google::protobuf::internal::LogMessage::operator<<(
              v10,
              "\") is not compatible with this reflection object (which is for type \"");
      v12 = google::protobuf::internal::LogMessage::operator<<(v11, *(_QWORD *)(*(_QWORD *)v5 + 8LL));
      v13 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                        v12,
                                                        "\").  Note that the exact same class is required; not just the same descriptor.");
      google::protobuf::internal::LogFinisher::operator=((int)&v59, v13);
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v60);
    }
    (*(void (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)a3 + 152LL))(a3);
    if ( v14 != v5 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        v60,
        3LL,
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/persistence/google/protobuf/generated_message_reflection.cc",
        604LL);
      v15 = google::protobuf::internal::LogMessage::operator<<(
              v60,
              "CHECK failed: (message2->GetReflection()) == (this): ");
      v16 = google::protobuf::internal::LogMessage::operator<<(v15, "Second argument to Swap() (of type \"");
      v17 = (*(__int64 (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)a3 + 152LL))(a3);
      v18 = google::protobuf::internal::LogMessage::operator<<(v16, *(_QWORD *)(v17 + 8));
      v19 = google::protobuf::internal::LogMessage::operator<<(
              v18,
              "\") is not compatible with this reflection object (which is for type \"");
      v20 = google::protobuf::internal::LogMessage::operator<<(v19, *(_QWORD *)(*(_QWORD *)v5 + 8LL));
      v21 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                        v20,
                                                        "\").  Note that the exact same class is required; not just the same descriptor.");
      google::protobuf::internal::LogFinisher::operator=((int)&v59, v21);
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v60);
    }
    v22 = v5[9];
    v23 = *(_QWORD *)((char *)a2 + v22);
    v24 = v23 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v23 & 1) != 0 )
      v24 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFELL);
    v25 = *(_QWORD *)((char *)a3 + v22);
    v26 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v25 & 1) != 0 )
      v26 = (_QWORD *)*v26;
    if ( (_QWORD *)v24 == v26 )
    {
      v30 = v5[8];
      if ( (_DWORD)v30 != -1 )
      {
        v31 = *(unsigned int *)(*(_QWORD *)v5 + 104LL);
        if ( (int)v31 >= 1 )
        {
          v32 = 0;
          v33 = (int *)((char *)a2 + v30);
          v34 = (int *)((char *)a3 + v30);
          v35 = *(_QWORD *)(*(_QWORD *)v5 + 40LL) + 60LL;
          v36 = (int *)v35;
          do
          {
            v37 = *v36;
            v36 += 38;
            if ( v37 != 3 )
            {
              v38 = *(_QWORD *)(v35 + 28);
              if ( !v38 || *(_DWORD *)(v38 + 24) == 1 && *(_BYTE *)(**(_QWORD **)(v38 + 32) + 65LL) )
                ++v32;
            }
            v35 = (__int64)v36;
            --v31;
          }
          while ( v31 );
          if ( v32 >= 1 )
          {
            v39 = (unsigned int)(v32 + 31) >> 5;
            do
            {
              v40 = *v33;
              *v33++ = *v34;
              *v34++ = v40;
              --v39;
            }
            while ( v39 );
          }
        }
      }
      v41 = v5[18];
      if ( (v41 & 0x80000000) == 0 )
      {
        v42 = 0LL;
        v43 = -1LL;
        do
        {
          v44 = (const google::protobuf::FieldDescriptor *)(*(_QWORD *)(*(_QWORD *)v5 + 40LL) + v42);
          v45 = *((_QWORD *)v44 + 11);
          if ( !v45 || *(_DWORD *)(v45 + 24) == 1 && *(_BYTE *)(**(_QWORD **)(v45 + 32) + 65LL) )
          {
            google::protobuf::Reflection::SwapField((google::protobuf::Reflection *)v5, a2, a3, v44);
            v41 = v5[18];
          }
          ++v43;
          v42 += 152LL;
        }
        while ( v43 < v41 );
      }
      v46 = *(unsigned int *)(*(_QWORD *)v5 + 108LL);
      if ( (int)v46 >= 1 )
      {
        v47 = 0LL;
        v48 = 48 * v46;
        do
        {
          v49 = *(_QWORD *)(*(_QWORD *)v5 + 48LL) + v47;
          if ( *(_DWORD *)(v49 + 24) != 1 || !*(_BYTE *)(**(_QWORD **)(v49 + 32) + 65LL) )
            google::protobuf::Reflection::SwapOneofField(
              (google::protobuf::Reflection *)v5,
              a2,
              a3,
              (const google::protobuf::OneofDescriptor *)v49);
          v47 += 48LL;
        }
        while ( v48 != v47 );
      }
      v50 = v5[10];
      if ( (_DWORD)v50 != -1 )
        google::protobuf::internal::ExtensionSet::Swap(
          (google::protobuf::Message *)((char *)a2 + v50),
          (google::protobuf::Message *)((char *)a3 + v50));
      v51 = v5[9];
      v52 = *(_QWORD *)((char *)a2 + v51);
      if ( (v52 & 1) != 0 )
      {
        v53 = (__int64 *)((v52 & 0xFFFFFFFFFFFFFFFELL) + 8);
      }
      else
      {
        v53 = (__int64 *)sub_10003A0B4((char *)a2 + v51);
        v51 = v5[9];
      }
      v54 = (char *)a3 + v51;
      v55 = *(_QWORD *)((char *)a3 + v51);
      if ( (v55 & 1) != 0 )
        this = (unsigned int *)((v55 & 0xFFFFFFFFFFFFFFFELL) + 8);
      else
        this = (unsigned int *)sub_10003A0B4(v54);
      v56 = *v53;
      *v53 = *(_QWORD *)this;
      *(_QWORD *)this = v56;
      v57 = v53[1];
      v53[1] = *((_QWORD *)this + 1);
      *((_QWORD *)this + 1) = v57;
      v58 = v53[2];
      v53[2] = *((_QWORD *)this + 2);
      *((_QWORD *)this + 2) = v58;
    }
    else
    {
      v27 = (google::protobuf::Message *)(*(__int64 (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)a2 + 32LL))(a2);
      (*(void (__fastcall **)(google::protobuf::Message *, google::protobuf::Message *))(*(_QWORD *)v27 + 120LL))(
        v27,
        a3);
      (*(void (__fastcall **)(google::protobuf::Message *, google::protobuf::Message *))(*(_QWORD *)a3 + 112LL))(a3, a2);
      this = (unsigned int *)google::protobuf::Reflection::Swap((google::protobuf::Reflection *)v5, a2, v27);
      v28 = *(_QWORD *)((char *)a2 + v5[9]);
      v29 = (_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v28 & 1) != 0 )
      {
        if ( !*v29 )
          return (unsigned int *)(*(__int64 (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)v27 + 8LL))(v27);
      }
      else if ( !v29 )
      {
        return (unsigned int *)(*(__int64 (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)v27 + 8LL))(v27);
      }
    }
  }
  return this;
}