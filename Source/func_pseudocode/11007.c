__ZNK6google8protobuf19FileDescriptorProto18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall google::protobuf::FileDescriptorProto::_InternalSerialize(
        google::protobuf::FileDescriptorProto *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x3
  int v6; // w21
  __int64 v7; // x8
  __int64 v8; // x22
  __int64 v9; // x23
  int v10; // w22
  int i; // w23
  google::protobuf::DescriptorProto *v12; // x0
  unsigned int v13; // w9
  unsigned __int8 *v14; // x1
  unsigned int v15; // w8
  unsigned int v16; // w9
  unsigned int v17; // w10
  int v18; // w22
  int j; // w23
  google::protobuf::EnumDescriptorProto *v20; // x0
  unsigned int v21; // w9
  unsigned __int8 *v22; // x1
  unsigned int v23; // w8
  unsigned int v24; // w9
  unsigned int v25; // w10
  int v26; // w22
  int k; // w23
  google::protobuf::ServiceDescriptorProto *v28; // x0
  unsigned int v29; // w9
  unsigned __int8 *v30; // x1
  unsigned int v31; // w8
  unsigned int v32; // w9
  unsigned int v33; // w10
  int v34; // w22
  int m; // w23
  google::protobuf::FieldDescriptorProto *v36; // x0
  unsigned int v37; // w9
  unsigned __int8 *v38; // x1
  unsigned int v39; // w8
  unsigned int v40; // w9
  unsigned int v41; // w10
  google::protobuf::FileOptions *v42; // x0
  unsigned int v43; // w9
  unsigned __int8 *v44; // x1
  unsigned int v45; // w8
  unsigned int v46; // w9
  unsigned int v47; // w10
  google::protobuf::SourceCodeInfo *v48; // x0
  unsigned int v49; // w9
  unsigned __int8 *v50; // x1
  unsigned int v51; // w8
  unsigned int v52; // w9
  unsigned int v53; // w10
  __int64 v54; // x22
  __int64 n; // x23
  unsigned __int64 v56; // x9
  unsigned __int64 v57; // x8
  unsigned __int64 v58; // x9
  unsigned __int64 v59; // x10
  __int64 v60; // x22
  __int64 ii; // x23
  unsigned __int64 v62; // x9
  unsigned __int64 v63; // x8
  unsigned __int64 v64; // x9
  unsigned __int64 v65; // x10
  __int64 v66; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = a2;
  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 1) != 0 )
    v4 = (unsigned __int8 *)sub_100038F08((int)a3, 1, (unsigned int)*((_QWORD *)this + 22) & 0xFFFFFFFE, a2);
  if ( (v6 & 2) != 0 )
    v4 = (unsigned __int8 *)sub_100038F08((int)a3, 2, (unsigned int)*((_QWORD *)this + 23) & 0xFFFFFFFE, v4);
  v7 = *((unsigned int *)this + 8);
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    v9 = 8 * v7;
    do
    {
      v4 = (unsigned __int8 *)sub_1000A2FD0((int)a3, 3, *(_QWORD *)(*((_QWORD *)this + 5) + v8 + 8), v4);
      v8 += 8LL;
    }
    while ( v9 != v8 );
  }
  v10 = *((_DWORD *)this + 14);
  if ( v10 )
  {
    for ( i = 0; i != v10; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v12 = *(google::protobuf::DescriptorProto **)(*((_QWORD *)this + 8) + 8LL * i + 8);
      *v4 = 34;
      v13 = *((_DWORD *)v12 + 5);
      if ( v13 > 0x7F )
      {
        v4[1] = v13 | 0x80;
        v15 = v13 >> 7;
        if ( v13 >> 14 )
        {
          v14 = v4 + 3;
          do
          {
            *(v14 - 1) = v15 | 0x80;
            v16 = v15 >> 7;
            ++v14;
            v17 = v15 >> 14;
            v15 >>= 7;
          }
          while ( v17 );
          *(v14 - 1) = v16;
        }
        else
        {
          v4[2] = v15;
          v14 = v4 + 3;
        }
      }
      else
      {
        v4[1] = v13;
        v14 = v4 + 2;
      }
      v4 = (unsigned __int8 *)google::protobuf::DescriptorProto::_InternalSerialize(v12, v14, a3);
    }
  }
  v18 = *((_DWORD *)this + 20);
  if ( v18 )
  {
    for ( j = 0; j != v18; ++j )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v20 = *(google::protobuf::EnumDescriptorProto **)(*((_QWORD *)this + 11) + 8LL * j + 8);
      *v4 = 42;
      v21 = *((_DWORD *)v20 + 5);
      if ( v21 > 0x7F )
      {
        v4[1] = v21 | 0x80;
        v23 = v21 >> 7;
        if ( v21 >> 14 )
        {
          v22 = v4 + 3;
          do
          {
            *(v22 - 1) = v23 | 0x80;
            v24 = v23 >> 7;
            ++v22;
            v25 = v23 >> 14;
            v23 >>= 7;
          }
          while ( v25 );
          *(v22 - 1) = v24;
        }
        else
        {
          v4[2] = v23;
          v22 = v4 + 3;
        }
      }
      else
      {
        v4[1] = v21;
        v22 = v4 + 2;
      }
      v4 = (unsigned __int8 *)google::protobuf::EnumDescriptorProto::_InternalSerialize(v20, v22, a3);
    }
  }
  v26 = *((_DWORD *)this + 26);
  if ( v26 )
  {
    for ( k = 0; k != v26; ++k )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v28 = *(google::protobuf::ServiceDescriptorProto **)(*((_QWORD *)this + 14) + 8LL * k + 8);
      *v4 = 50;
      v29 = *((_DWORD *)v28 + 5);
      if ( v29 > 0x7F )
      {
        v4[1] = v29 | 0x80;
        v31 = v29 >> 7;
        if ( v29 >> 14 )
        {
          v30 = v4 + 3;
          do
          {
            *(v30 - 1) = v31 | 0x80;
            v32 = v31 >> 7;
            ++v30;
            v33 = v31 >> 14;
            v31 >>= 7;
          }
          while ( v33 );
          *(v30 - 1) = v32;
        }
        else
        {
          v4[2] = v31;
          v30 = v4 + 3;
        }
      }
      else
      {
        v4[1] = v29;
        v30 = v4 + 2;
      }
      v4 = (unsigned __int8 *)google::protobuf::ServiceDescriptorProto::_InternalSerialize(v28, v30, a3);
    }
  }
  v34 = *((_DWORD *)this + 32);
  if ( v34 )
  {
    for ( m = 0; m != v34; ++m )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v36 = *(google::protobuf::FieldDescriptorProto **)(*((_QWORD *)this + 17) + 8LL * m + 8);
      *v4 = 58;
      v37 = *((_DWORD *)v36 + 5);
      if ( v37 > 0x7F )
      {
        v4[1] = v37 | 0x80;
        v39 = v37 >> 7;
        if ( v37 >> 14 )
        {
          v38 = v4 + 3;
          do
          {
            *(v38 - 1) = v39 | 0x80;
            v40 = v39 >> 7;
            ++v38;
            v41 = v39 >> 14;
            v39 >>= 7;
          }
          while ( v41 );
          *(v38 - 1) = v40;
        }
        else
        {
          v4[2] = v39;
          v38 = v4 + 3;
        }
      }
      else
      {
        v4[1] = v37;
        v38 = v4 + 2;
      }
      v4 = (unsigned __int8 *)google::protobuf::FieldDescriptorProto::_InternalSerialize(v36, v38, a3);
    }
  }
  if ( (v6 & 8) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v42 = (google::protobuf::FileOptions *)*((_QWORD *)this + 25);
    *v4 = 66;
    v43 = *((_DWORD *)v42 + 11);
    if ( v43 > 0x7F )
    {
      v4[1] = v43 | 0x80;
      v45 = v43 >> 7;
      if ( v43 >> 14 )
      {
        v44 = v4 + 3;
        do
        {
          *(v44 - 1) = v45 | 0x80;
          v46 = v45 >> 7;
          ++v44;
          v47 = v45 >> 14;
          v45 >>= 7;
        }
        while ( v47 );
        *(v44 - 1) = v46;
      }
      else
      {
        v4[2] = v45;
        v44 = v4 + 3;
      }
    }
    else
    {
      v4[1] = v43;
      v44 = v4 + 2;
    }
    v4 = (unsigned __int8 *)google::protobuf::FileOptions::_InternalSerialize(v42, v44, a3);
  }
  if ( (v6 & 0x10) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v48 = (google::protobuf::SourceCodeInfo *)*((_QWORD *)this + 26);
    *v4 = 74;
    v49 = *((_DWORD *)v48 + 10);
    if ( v49 > 0x7F )
    {
      v4[1] = v49 | 0x80;
      v51 = v49 >> 7;
      if ( v49 >> 14 )
      {
        v50 = v4 + 3;
        do
        {
          *(v50 - 1) = v51 | 0x80;
          v52 = v51 >> 7;
          ++v50;
          v53 = v51 >> 14;
          v51 >>= 7;
        }
        while ( v53 );
        *(v50 - 1) = v52;
      }
      else
      {
        v4[2] = v51;
        v50 = v4 + 3;
      }
    }
    else
    {
      v4[1] = v49;
      v50 = v4 + 2;
    }
    v4 = (unsigned __int8 *)google::protobuf::SourceCodeInfo::_InternalSerialize(v48, v50, a3);
  }
  v54 = *((unsigned int *)this + 36);
  if ( (int)v54 >= 1 )
  {
    for ( n = 0LL; n != v54; ++n )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v56 = *(int *)(*((_QWORD *)this + 19) + 4 * n);
      *v4 = 80;
      if ( (unsigned int)v56 > 0x7F )
      {
        v4[1] = v56 | 0x80;
        v57 = v56 >> 7;
        if ( (unsigned int)v56 >> 14 )
        {
          v4 += 3;
          do
          {
            *(v4 - 1) = v57 | 0x80;
            v58 = v57 >> 7;
            ++v4;
            v59 = v57 >> 14;
            v57 >>= 7;
          }
          while ( v59 );
          *(v4 - 1) = v58;
        }
        else
        {
          v4[2] = v57;
          v4 += 3;
        }
      }
      else
      {
        v4[1] = v56;
        v4 += 2;
      }
    }
  }
  v60 = *((unsigned int *)this + 40);
  if ( (int)v60 >= 1 )
  {
    for ( ii = 0LL; ii != v60; ++ii )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v62 = *(int *)(*((_QWORD *)this + 21) + 4 * ii);
      *v4 = 88;
      if ( (unsigned int)v62 > 0x7F )
      {
        v4[1] = v62 | 0x80;
        v63 = v62 >> 7;
        if ( (unsigned int)v62 >> 14 )
        {
          v4 += 3;
          do
          {
            *(v4 - 1) = v63 | 0x80;
            v64 = v63 >> 7;
            ++v4;
            v65 = v63 >> 14;
            v63 >>= 7;
          }
          while ( v65 );
          *(v4 - 1) = v64;
        }
        else
        {
          v4[2] = v63;
          v4 += 3;
        }
      }
      else
      {
        v4[1] = v62;
        v4 += 2;
      }
    }
  }
  if ( (v6 & 4) != 0 )
    v4 = (unsigned __int8 *)sub_100038F08((int)a3, 12, (unsigned int)*((_QWORD *)this + 24) & 0xFFFFFFFE, v4);
  v66 = *((_QWORD *)this + 1);
  if ( (v66 & 1) == 0 )
    return v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v66 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)v4,
                              (unsigned __int8 *)a3,
                              (google::protobuf::io::EpsCopyOutputStream *)v4);
}