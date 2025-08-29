__ZN6google8protobuf17DescriptorBuilder9BuildFileERKNS0_19FileDescriptorProtoE
__int64 __fastcall google::protobuf::DescriptorBuilder::BuildFile(
        google::protobuf::DescriptorBuilder *this,
        const google::protobuf::FileDescriptorProto *a2)
{
  char *v4; // x21
  __int64 v5; // x22
  __int64 v6; // x0
  __int64 v7; // x21
  _QWORD *v8; // x2
  unsigned __int8 v9; // w22
  size_t v10; // x9
  unsigned __int64 v11; // x10
  int v12; // w23
  void **v13; // x1
  __int64 v14; // x8
  void **v15; // x9
  int v16; // w11
  int v17; // t1
  int v18; // w12
  int v19; // t1
  bool v21; // w10
  bool v22; // w24
  google::protobuf::DescriptorPool::Tables *v23; // x21
  __int64 v24; // x24
  __int64 v25; // x22
  unsigned __int64 v26; // x25
  int v27; // w26
  __int64 v28; // x27
  __int64 v29; // x28
  unsigned __int8 *v30; // x8
  __int64 v31; // x9
  __int64 v32; // x10
  unsigned __int8 *v33; // x1
  unsigned __int64 v34; // x1
  __int64 v35; // x0
  __int64 v36; // x22
  __int64 v37; // x21
  __int64 v38; // x0
  google::protobuf::DescriptorPool *v39; // x21
  __int64 v40; // x0
  google::protobuf::DescriptorPool::Tables *v42; // x22
  __int64 v43; // x8
  void **v44; // x23
  __int64 v45; // x20
  google::protobuf::DescriptorPool::Tables *v46; // x0
  __int64 v47; // x9
  __int64 v48; // x8
  unsigned __int64 v50; // [xsp+8h] [xbp-1A8h]
  __int64 v51[2]; // [xsp+10h] [xbp-1A0h] BYREF
  __int128 v52; // [xsp+20h] [xbp-190h] BYREF
  __int128 v53; // [xsp+30h] [xbp-180h] BYREF
  void *__p[2]; // [xsp+48h] [xbp-168h] BYREF
  unsigned __int8 v55; // [xsp+5Fh] [xbp-151h]
  __int128 v56; // [xsp+60h] [xbp-150h] BYREF
  int v57; // [xsp+70h] [xbp-140h]
  __int64 v58; // [xsp+120h] [xbp-90h] BYREF
  void *v59; // [xsp+140h] [xbp-70h] BYREF
  size_t v60; // [xsp+148h] [xbp-68h]
  unsigned __int8 v61; // [xsp+157h] [xbp-59h]

  v4 = (char *)this + 56;
  std::string::operator=(
    (std::string *)((char *)this + 56),
    (const std::string *)(*((_QWORD *)a2 + 22) & 0xFFFFFFFFFFFFFFFELL));
  v5 = *((_QWORD *)this + 1);
  sub_10007A644(&v53, v4);
  v56 = v53;
  v6 = sub_100096644(v5 + 344, &v56);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 32);
    if ( v7 )
    {
      google::protobuf::FileDescriptorProto::FileDescriptorProto((google::protobuf::FileDescriptorProto *)&v56, 0LL);
      google::protobuf::FileDescriptor::CopyTo(
        (google::protobuf::FileDescriptor *)v7,
        (google::protobuf::FileDescriptorProto *)&v56);
      if ( *(_DWORD *)(v7 + 60) == 2 && (*((_BYTE *)a2 + 16) & 4) != 0 )
      {
        v57 |= 4u;
        sub_10007A754((int)&v59, "proto2");
        v8 = (_QWORD *)(*((_QWORD *)&v56 + 1) & 0xFFFFFFFFFFFFFFFELL);
        if ( (BYTE8(v56) & 1) != 0 )
          v8 = (_QWORD *)*v8;
        google::protobuf::internal::ArenaStringPtr::Set(&v58, &v59, v8);
        if ( (char)v61 < 0 )
          operator delete(v59);
      }
      google::protobuf::MessageLite::SerializeAsString((__int64 *)&v59, (google::protobuf::MessageLite *)&v56);
      google::protobuf::MessageLite::SerializeAsString((__int64 *)__p, a2);
      v9 = v61;
      if ( (v61 & 0x80u) == 0 )
        v10 = v61;
      else
        v10 = v60;
      v11 = v55;
      v12 = (char)v55;
      if ( (v55 & 0x80u) != 0 )
        v11 = (unsigned __int64)__p[1];
      if ( v10 != v11 )
      {
        v22 = 0;
        if ( ((char)v55 & 0x80000000) == 0 )
          goto LABEL_32;
        goto LABEL_28;
      }
      if ( (v55 & 0x80u) == 0 )
        v13 = __p;
      else
        v13 = (void **)__p[0];
      if ( (char)v61 < 0 )
      {
        v22 = memcmp(v59, v13, v60) == 0;
      }
      else
      {
        if ( !v61 )
        {
          v22 = 1;
          if ( ((char)v55 & 0x80000000) == 0 )
          {
LABEL_32:
            if ( (v9 & 0x80) == 0 )
            {
LABEL_33:
              google::protobuf::FileDescriptorProto::~FileDescriptorProto((google::protobuf::FileDescriptorProto *)&v56);
              if ( v22 )
                return v7;
              goto LABEL_34;
            }
LABEL_29:
            operator delete(v59);
            goto LABEL_33;
          }
LABEL_28:
          operator delete(__p[0]);
          if ( (v61 & 0x80) == 0 )
            goto LABEL_33;
          goto LABEL_29;
        }
        v14 = v61 - 1LL;
        v15 = &v59;
        do
        {
          v17 = *(unsigned __int8 *)v15;
          v15 = (void **)((char *)v15 + 1);
          v16 = v17;
          v19 = *(unsigned __int8 *)v13;
          v13 = (void **)((char *)v13 + 1);
          v18 = v19;
          v21 = v14-- != 0;
          v22 = v16 == v18;
        }
        while ( v16 == v18 && v21 );
      }
      if ( (v12 & 0x80000000) == 0 )
        goto LABEL_32;
      goto LABEL_28;
    }
  }
LABEL_34:
  v23 = (google::protobuf::DescriptorPool::Tables *)*((_QWORD *)this + 1);
  v24 = *(_QWORD *)v23;
  v50 = *((_QWORD *)v23 + 1);
  if ( v50 != *(_QWORD *)v23 )
  {
    v25 = 0LL;
    v26 = *((_QWORD *)a2 + 22) & 0xFFFFFFFFFFFFFFFELL;
    v27 = *(char *)(v26 + 23);
    if ( v27 >= 0 )
      v28 = *(unsigned __int8 *)(v26 + 23);
    else
      v28 = *(_QWORD *)(v26 + 8);
    if ( (unsigned __int64)((__int64)(v50 - v24) / 24) <= 1 )
      v29 = 1LL;
    else
      v29 = (__int64)(v50 - v24) / 24;
    do
    {
      v30 = (unsigned __int8 *)(v24 + 24 * v25);
      v31 = v30[23];
      if ( (v31 & 0x80u) == 0LL )
        v32 = v30[23];
      else
        v32 = *((_QWORD *)v30 + 1);
      if ( v32 == v28 )
      {
        if ( v27 >= 0 )
          v33 = (unsigned __int8 *)v26;
        else
          v33 = *(unsigned __int8 **)v26;
        if ( (v31 & 0x80) != 0 )
        {
          if ( !memcmp(*(const void **)v30, v33, *((_QWORD *)v30 + 1)) )
          {
LABEL_59:
            google::protobuf::DescriptorBuilder::AddRecursiveImportError(this, a2, v25);
            return 0LL;
          }
        }
        else
        {
          if ( !v30[23] )
            goto LABEL_59;
          while ( *v30 == *v33 )
          {
            ++v30;
            ++v33;
            if ( !--v31 )
              goto LABEL_59;
          }
        }
      }
      ++v25;
    }
    while ( v25 != v29 );
  }
  if ( !*(_BYTE *)(*(_QWORD *)this + 41LL) && *(_QWORD *)(*(_QWORD *)this + 8LL) )
  {
    v34 = *((_QWORD *)a2 + 22) & 0xFFFFFFFFFFFFFFFELL;
    if ( v50 >= *((_QWORD *)v23 + 2) )
    {
      v35 = sub_10009D0EC(v23, v34);
    }
    else
    {
      sub_10009D08C(v23, v34);
      v35 = v50 + 24;
    }
    *((_QWORD *)v23 + 1) = v35;
    if ( *((int *)a2 + 8) >= 1 )
    {
      v36 = 1LL;
      while ( 1 )
      {
        v37 = *((_QWORD *)this + 1);
        sub_10007A644(&v52, *(_QWORD *)(*((_QWORD *)a2 + 5) + 8 * v36));
        v56 = v52;
        v38 = sub_100096644(v37 + 344, &v56);
        if ( v38 && *(_QWORD *)(v38 + 32) )
          goto LABEL_71;
        v39 = *(google::protobuf::DescriptorPool **)this;
        v40 = *(_QWORD *)(*(_QWORD *)this + 24LL);
        if ( !v40 )
          goto LABEL_70;
        if ( !google::protobuf::DescriptorPool::FindFileByName(v40, *(_QWORD *)(*((_QWORD *)a2 + 5) + 8 * v36)) )
          break;
LABEL_71:
        if ( v36++ >= *((int *)a2 + 8) )
          goto LABEL_72;
      }
      v39 = *(google::protobuf::DescriptorPool **)this;
LABEL_70:
      sub_10007A644(v51, *(_QWORD *)(*((_QWORD *)a2 + 5) + 8 * v36));
      google::protobuf::DescriptorPool::TryFindFileInFallbackDatabase(v39, v51[0], v51[1]);
      goto LABEL_71;
    }
LABEL_72:
    v42 = (google::protobuf::DescriptorPool::Tables *)*((_QWORD *)this + 1);
    v43 = *((_QWORD *)v42 + 1);
    v44 = (void **)(v43 - 24);
    v23 = v42;
    if ( *(char *)(v43 - 1) < 0 )
    {
      operator delete(*v44);
      v23 = (google::protobuf::DescriptorPool::Tables *)*((_QWORD *)this + 1);
    }
    *((_QWORD *)v42 + 1) = v44;
  }
  google::protobuf::DescriptorPool::Tables::AddCheckpoint(v23);
  v7 = google::protobuf::DescriptorBuilder::BuildFileImpl(this, a2);
  v45 = *((_QWORD *)this + 11);
  sub_1000997DC(v45 + 80);
  sub_1000997DC(v45 + 136);
  v46 = (google::protobuf::DescriptorPool::Tables *)*((_QWORD *)this + 1);
  if ( v7 )
  {
    v47 = *((_QWORD *)v46 + 51);
    v48 = *((_QWORD *)v46 + 52) - 32LL;
    *((_QWORD *)v46 + 52) = v48;
    if ( v47 == v48 )
    {
      *((_QWORD *)v46 + 55) = *((_QWORD *)v46 + 54);
      *((_QWORD *)v46 + 58) = *((_QWORD *)v46 + 57);
      *((_QWORD *)v46 + 61) = *((_QWORD *)v46 + 60);
    }
    *(_BYTE *)(v7 + 65) = 1;
  }
  else
  {
    google::protobuf::DescriptorPool::Tables::RollbackToLastCheckpoint(v46);
  }
  return v7;
}