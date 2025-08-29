__ZNK6google8protobuf10TextFormat7Printer5PrintERKNS0_7MessageEPNS2_13TextGeneratorE
void __fastcall google::protobuf::TextFormat::Printer::Print(
        __int64 a1,
        const google::protobuf::Message *a2,
        __int64 a3)
{
  unsigned int *v6; // x1
  unsigned int *v7; // x22
  unsigned __int64 v8; // x0
  unsigned __int64 v9; // x23
  _QWORD *v10; // x10
  _QWORD *v11; // x8
  unsigned __int64 v12; // x11
  bool v13; // cf
  _QWORD *v14; // x11
  _QWORD *v15; // x24
  size_t v16; // x0
  int v17; // w2
  std::string *p_p; // x1
  void *v19; // x0
  google::protobuf::FieldDescriptor *v20; // x24
  google::protobuf::FieldDescriptor **v21; // x0
  __int64 v22; // x23
  __int64 v23; // x0
  char *v24; // x8
  __int64 v25; // x1
  __int64 v26; // x9
  google::protobuf::FieldDescriptor **v27; // x23
  char *v28; // x0
  google::protobuf::FieldDescriptor **v29; // x10
  __int64 v30; // t1
  google::protobuf::FieldDescriptor **v31; // x23
  google::protobuf::FieldDescriptor **v32; // x24
  unsigned __int64 UnknownFields; // x0
  void (*v34)(void); // x4
  void *v35; // [xsp+0h] [xbp-80h] BYREF
  google::protobuf::FieldDescriptor **v36; // [xsp+8h] [xbp-78h]
  _QWORD *v37; // [xsp+10h] [xbp-70h] BYREF
  std::string __p; // [xsp+20h] [xbp-60h] BYREF
  void *v39; // [xsp+38h] [xbp-48h] BYREF
  void *v40; // [xsp+40h] [xbp-40h]
  __int64 v41; // [xsp+48h] [xbp-38h]
  __int64 vars8; // [xsp+88h] [xbp+8h]

  (*(void (__fastcall **)(const google::protobuf::Message *))(*(_QWORD *)a2 + 152LL))(a2);
  if ( v6 )
  {
    v7 = v6;
    v8 = (*(__int64 (__fastcall **)(const google::protobuf::Message *))(*(_QWORD *)a2 + 152LL))(a2);
    v9 = v8;
    v10 = *(_QWORD **)(a1 + 64);
    if ( v10 )
    {
      v11 = (_QWORD *)(a1 + 64);
      do
      {
        v12 = v10[4];
        v13 = v12 >= v8;
        if ( v12 >= v8 )
          v14 = v10;
        else
          v14 = v10 + 1;
        if ( v13 )
          v11 = v10;
        v10 = (_QWORD *)*v14;
      }
      while ( *v14 );
      if ( v11 != (_QWORD *)(a1 + 64) && v11[4] <= v8 )
      {
        v34 = *(void (**)(void))(*(_QWORD *)v11[5] + 16LL);
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        v34();
        return;
      }
    }
    v15 = *(_QWORD **)(v8 + 8);
    v16 = strlen("google.protobuf.Any");
    if ( *((char *)v15 + 23) < 0 )
    {
      if ( v16 != v15[1] )
        goto LABEL_33;
      if ( v16 == -1LL )
        goto LABEL_58;
      v15 = (_QWORD *)*v15;
    }
    else
    {
      if ( v16 != *((unsigned __int8 *)v15 + 23) )
        goto LABEL_33;
      if ( v16 == -1LL )
LABEL_58:
        sub_1000984D4(v15);
    }
    if ( !memcmp(v15, "google.protobuf.Any", v16)
      && *(_BYTE *)(a1 + 9)
      && (google::protobuf::TextFormat::Printer::PrintAny(a1, a2, a3) & 1) != 0 )
    {
      return;
    }
LABEL_33:
    v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    if ( *(_BYTE *)(*(_QWORD *)(v9 + 32) + 75LL) )
    {
      v20 = *(google::protobuf::FieldDescriptor **)(v9 + 40);
      v21 = (google::protobuf::FieldDescriptor **)operator new(8uLL);
      *v21 = v20;
      v36 = v21 + 1;
      v37 = v21 + 1;
      v35 = v21;
      v22 = *(_QWORD *)(v9 + 40);
      v23 = sub_10009A09C(&v37);
      *(_QWORD *)(v23 + 8) = v22 + 152;
      v24 = (char *)(v23 + 8);
      v26 = v23 + 8 * v25;
      v27 = (google::protobuf::FieldDescriptor **)(v23 + 16);
      v28 = (char *)v35;
      v29 = v36;
      if ( v36 != v35 )
      {
        do
        {
          v30 = (__int64)*--v29;
          *((_QWORD *)v24 - 1) = v30;
          v24 -= 8;
        }
        while ( v29 != (google::protobuf::FieldDescriptor **)v28 );
        v28 = (char *)v35;
      }
      v35 = v24;
      v36 = v27;
      v37 = (_QWORD *)v26;
      if ( v28 )
        operator delete(v28);
      v36 = v27;
    }
    else
    {
      google::protobuf::Reflection::ListFieldsOmitStripped((__int64)v7, a2, (char **)&v35);
      (*(void (__fastcall **)(const google::protobuf::Message *))(*(_QWORD *)a2 + 152LL))(a2);
    }
    v31 = (google::protobuf::FieldDescriptor **)v35;
    if ( *(_BYTE *)(a1 + 8) )
    {
      sub_1001015B8(v35);
      v31 = (google::protobuf::FieldDescriptor **)v35;
    }
    v32 = v36;
    while ( v31 != v32 )
      google::protobuf::TextFormat::Printer::PrintField(a1, a2, (int)v7, *v31++);
    if ( !*(_BYTE *)(a1 + 7) )
    {
      UnknownFields = google::protobuf::Reflection::GetUnknownFields(v7, (__int64)a2);
      google::protobuf::TextFormat::Printer::PrintUnknownFields(a1, UnknownFields, a3, 10LL);
    }
    v19 = v35;
    if ( v35 )
    {
      v36 = (google::protobuf::FieldDescriptor **)v35;
      goto LABEL_50;
    }
    return;
  }
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  google::protobuf::MessageLite::SerializeAsString(&__p, a2);
  if ( (__p.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
    v17 = HIBYTE(__p.__r_.__value_.__r.__words[2]);
  else
    v17 = __p.__r_.__value_.__r.__words[1];
  if ( (__p.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
    p_p = &__p;
  else
    p_p = (std::string *)__p.__r_.__value_.__r.__words[0];
  google::protobuf::io::ArrayInputStream::ArrayInputStream((google::protobuf::io::ArrayInputStream *)&v35, p_p, v17, -1);
  google::protobuf::UnknownFieldSet::ParseFromZeroCopyStream(&v39, &v35);
  if ( SHIBYTE(__p.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(__p.__r_.__value_.__l.__data_);
  google::protobuf::TextFormat::Printer::PrintUnknownFields(a1, &v39, a3, 10LL);
  v19 = v39;
  if ( v39 != v40 )
  {
    google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *)&v39);
    v19 = v39;
  }
  if ( v19 )
  {
    v40 = v19;
LABEL_50:
    operator delete(v19);
  }
}