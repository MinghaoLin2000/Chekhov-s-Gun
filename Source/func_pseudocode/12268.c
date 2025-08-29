__ZN6google8protobuf5Value14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::Value::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v5; // x21
  _DWORD *v6; // x22
  char *TagFallback; // x2
  unsigned int v8; // w24
  unsigned int v9; // w9
  google::protobuf::internal *v10; // x8
  int v11; // w24
  int v12; // w8
  int v13; // w9
  __int64 v14; // d8
  _QWORD *v15; // x1
  std::string *v16; // x24
  char v17; // w0
  int v18; // w8
  google::protobuf::internal *v19; // x0
  __int64 v20; // x24
  int v21; // w9
  __int64 v22; // x1
  __int64 v23; // x1
  bool v24; // zf
  __int64 v25; // x1
  google::protobuf::internal *v26; // x0
  unsigned int v27; // w1
  __int64 v28; // x8
  _QWORD *v29; // x0
  __int64 v30; // x0
  __int64 v31; // x8
  _QWORD *v32; // x0
  __int64 v33; // x0
  int v34; // w1
  __int64 v35; // x1
  google::protobuf::internal *v37; // [xsp+8h] [xbp-78h] BYREF
  google::protobuf::internal *v38[2]; // [xsp+10h] [xbp-70h] BYREF

  v37 = a2;
  v5 = (_QWORD *)(a1 + 8);
  v6 = (_DWORD *)(a1 + 16);
  while ( (sub_10003A040(a3, &v37, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    TagFallback = (char *)v37 + 1;
    v8 = *(unsigned __int8 *)v37;
    if ( *(char *)v37 < 0 )
    {
      v9 = v8 + ((unsigned __int8)*TagFallback << 7);
      v8 = v9 - 128;
      if ( *TagFallback < 0 )
      {
        TagFallback = (char *)google::protobuf::internal::ReadTagFallback(v37, (const char *)(v9 - 128));
        v37 = (google::protobuf::internal *)TagFallback;
        if ( !TagFallback )
          return (google::protobuf::internal *)TagFallback;
        v8 = v27;
        goto LABEL_7;
      }
      TagFallback = (char *)v37 + 2;
    }
    v37 = (google::protobuf::internal *)TagFallback;
LABEL_7:
    switch ( v8 >> 3 )
    {
      case 1u:
        if ( (unsigned __int8)v8 != 8 )
          goto LABEL_40;
        v10 = (google::protobuf::internal *)(TagFallback + 1);
        v11 = (unsigned __int8)*TagFallback;
        if ( (*TagFallback & 0x80000000) == 0 )
          goto LABEL_12;
        v12 = *(char *)v10;
        v13 = v11 + ((unsigned __int8)v12 << 7);
        v11 = v13 - 128;
        if ( v12 < 0 )
        {
          v37 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                (google::protobuf::internal *)TagFallback,
                                                (unsigned int)(v13 - 128));
          if ( !v37 )
            return 0LL;
          v11 = v34;
        }
        else
        {
          v10 = (google::protobuf::internal *)(TagFallback + 2);
LABEL_12:
          v37 = v10;
        }
        if ( *(_DWORD *)(a1 + 28) != 1 )
        {
          google::protobuf::Value::clear_kind(a1);
          *(_DWORD *)(a1 + 28) = 1;
        }
        *v6 = v11;
        goto LABEL_65;
      case 2u:
        if ( (unsigned __int8)v8 != 17 )
          goto LABEL_40;
        v14 = *(_QWORD *)TagFallback;
        if ( *(_DWORD *)(a1 + 28) != 2 )
        {
          google::protobuf::Value::clear_kind(a1);
          *(_DWORD *)(a1 + 28) = 2;
          TagFallback = (char *)v37;
        }
        *(_QWORD *)v6 = v14;
        v37 = (google::protobuf::internal *)(TagFallback + 8);
        goto LABEL_65;
      case 3u:
        if ( (unsigned __int8)v8 != 26 )
          goto LABEL_40;
        if ( *(_DWORD *)(a1 + 28) != 3 )
        {
          google::protobuf::Value::clear_kind(a1);
          *(_DWORD *)(a1 + 28) = 3;
          *(_QWORD *)(a1 + 16) = &google::protobuf::internal::fixed_address_empty_string;
        }
        v15 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFELL);
        if ( (*v5 & 1) != 0 )
          v15 = (_QWORD *)*v15;
        v16 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v6, v15);
        v37 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(
                                              v16,
                                              (std::string::value_type *)v37,
                                              a3);
        sub_10007A644(v38, v16);
        v17 = google::protobuf::internal::VerifyUTF8(
                v38[0],
                (const char *)v38[1],
                (google::protobuf::internal *)"google.protobuf.Value.string_value");
        if ( v37 )
          v18 = 2;
        else
          v18 = 4;
        if ( (v17 & 1) == 0 )
          return 0LL;
        goto LABEL_66;
      case 4u:
        if ( (unsigned __int8)v8 != 32 )
          goto LABEL_40;
        v19 = (google::protobuf::internal *)(TagFallback + 1);
        v20 = (unsigned __int8)*TagFallback;
        if ( *TagFallback < 0 )
        {
          v21 = v20 + (*(unsigned __int8 *)v19 << 7);
          v20 = (unsigned int)(v21 - 128);
          if ( *(char *)v19 < 0 )
          {
            v19 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                  (google::protobuf::internal *)TagFallback,
                                                  (unsigned int)(v21 - 128));
            v20 = v35;
          }
          else
          {
            v19 = (google::protobuf::internal *)(TagFallback + 2);
          }
        }
        v37 = v19;
        if ( *(_DWORD *)(a1 + 28) != 4 )
        {
          google::protobuf::Value::clear_kind(a1);
          *(_DWORD *)(a1 + 28) = 4;
          v19 = v37;
        }
        *(_BYTE *)v6 = v20 != 0;
        if ( v19 )
          goto LABEL_65;
        return 0LL;
      case 5u:
        if ( (unsigned __int8)v8 != 42 )
          goto LABEL_40;
        if ( *(_DWORD *)(a1 + 28) == 5 )
        {
          v22 = *(_QWORD *)v6;
        }
        else
        {
          google::protobuf::Value::clear_kind(a1);
          *(_DWORD *)(a1 + 28) = 5;
          v28 = *(_QWORD *)(a1 + 8);
          v29 = (_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v28 & 1) != 0 )
            v29 = (_QWORD *)*v29;
          v30 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::Struct>(v29);
          LODWORD(v22) = v30;
          *(_QWORD *)v6 = v30;
          TagFallback = (char *)v37;
        }
        v26 = (google::protobuf::internal *)sub_1001113D0(a3, v22, (google::protobuf::internal *)TagFallback);
        goto LABEL_57;
      case 6u:
        if ( (unsigned __int8)v8 != 50 )
          goto LABEL_40;
        if ( *(_DWORD *)(a1 + 28) == 6 )
        {
          v23 = *(_QWORD *)v6;
        }
        else
        {
          google::protobuf::Value::clear_kind(a1);
          *(_DWORD *)(a1 + 28) = 6;
          v31 = *(_QWORD *)(a1 + 8);
          v32 = (_QWORD *)(v31 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v31 & 1) != 0 )
            v32 = (_QWORD *)*v32;
          v33 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::ListValue>(v32);
          LODWORD(v23) = v33;
          *(_QWORD *)v6 = v33;
          TagFallback = (char *)v37;
        }
        v26 = (google::protobuf::internal *)sub_1001114A0(a3, v23, (google::protobuf::internal *)TagFallback);
        goto LABEL_57;
      default:
LABEL_40:
        if ( v8 )
          v24 = (v8 & 7) == 4;
        else
          v24 = 1;
        if ( v24 )
        {
          *(_DWORD *)(a3 + 80) = v8 - 1;
          return (google::protobuf::internal *)TagFallback;
        }
        if ( (*v5 & 1) != 0 )
        {
          v25 = (*v5 & 0xFFFFFFFFFFFFFFFELL) + 8;
        }
        else
        {
          v25 = sub_10003A0B4(v5);
          TagFallback = (char *)v37;
        }
        v26 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(
                                              v8,
                                              v25,
                                              (google::protobuf::internal *)TagFallback);
LABEL_57:
        v37 = v26;
        if ( !v26 )
          return 0LL;
LABEL_65:
        v18 = 2;
LABEL_66:
        if ( v18 != 2 )
          return 0LL;
        break;
    }
  }
  return v37;
}