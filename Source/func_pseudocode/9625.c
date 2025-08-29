__ZNK3TSP11MessageInfo18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::MessageInfo::_InternalSerialize(
        TSP::MessageInfo *this,
        google::protobuf::UnknownFieldSet *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x4
  int v6; // w21
  unsigned int v7; // w9
  unsigned int v8; // w8
  unsigned int v9; // w9
  unsigned int v10; // w10
  int v11; // w3
  unsigned int v12; // w9
  unsigned int v13; // w8
  unsigned int v14; // w9
  unsigned int v15; // w10
  int v16; // w22
  int i; // w23
  TSP::FieldInfo *v18; // x0
  unsigned int v19; // w9
  unsigned __int8 *v20; // x1
  unsigned int v21; // w8
  unsigned int v22; // w9
  unsigned int v23; // w10
  int v24; // w3
  int v25; // w3
  unsigned int v26; // w9
  unsigned int v27; // w8
  unsigned int v28; // w9
  unsigned int v29; // w10
  int v30; // w3
  TSP::FieldPath *v31; // x0
  unsigned int v32; // w9
  google::protobuf::UnknownFieldSet *v33; // x1
  unsigned int v34; // w8
  unsigned int v35; // w9
  unsigned int v36; // w10
  int v37; // w21
  int j; // w22
  TSP::FieldPath *v39; // x0
  unsigned int v40; // w9
  google::protobuf::UnknownFieldSet *v41; // x1
  unsigned int v42; // w8
  unsigned int v43; // w9
  unsigned int v44; // w10
  google::protobuf::io::EpsCopyOutputStream *v45; // x3
  __int64 v46; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = (unsigned __int8 *)a2;
  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 2) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, (unsigned __int8 *)a2);
    v7 = *((_DWORD *)this + 50);
    *v4 = 8;
    if ( v7 > 0x7F )
    {
      v4[1] = v7 | 0x80;
      v8 = v7 >> 7;
      if ( v7 >> 14 )
      {
        v4 += 3;
        do
        {
          *(v4 - 1) = v8 | 0x80;
          v9 = v8 >> 7;
          ++v4;
          v10 = v8 >> 14;
          v8 >>= 7;
        }
        while ( v10 );
        *(v4 - 1) = v9;
      }
      else
      {
        v4[2] = v8;
        v4 += 3;
      }
    }
    else
    {
      v4[1] = v7;
      v4 += 2;
    }
  }
  v11 = *((_DWORD *)this + 10);
  if ( v11 >= 1 )
    v4 = (unsigned __int8 *)sub_100054554(a3, 2, (int)this + 24, v11, v4);
  if ( (v6 & 4) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v12 = *((_DWORD *)this + 51);
    *v4 = 24;
    if ( v12 > 0x7F )
    {
      v4[1] = v12 | 0x80;
      v13 = v12 >> 7;
      if ( v12 >> 14 )
      {
        v4 += 3;
        do
        {
          *(v4 - 1) = v13 | 0x80;
          v14 = v13 >> 7;
          ++v4;
          v15 = v13 >> 14;
          v13 >>= 7;
        }
        while ( v15 );
        *(v4 - 1) = v14;
      }
      else
      {
        v4[2] = v13;
        v4 += 3;
      }
    }
    else
    {
      v4[1] = v12;
      v4 += 2;
    }
  }
  v16 = *((_DWORD *)this + 14);
  if ( v16 )
  {
    for ( i = 0; i != v16; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v18 = *(TSP::FieldInfo **)(*((_QWORD *)this + 8) + 8LL * i + 8);
      *v4 = 34;
      v19 = *((_DWORD *)v18 + 5);
      if ( v19 > 0x7F )
      {
        v4[1] = v19 | 0x80;
        v21 = v19 >> 7;
        if ( v19 >> 14 )
        {
          v20 = v4 + 3;
          do
          {
            *(v20 - 1) = v21 | 0x80;
            v22 = v21 >> 7;
            ++v20;
            v23 = v21 >> 14;
            v21 >>= 7;
          }
          while ( v23 );
          *(v20 - 1) = v22;
        }
        else
        {
          v4[2] = v21;
          v20 = v4 + 3;
        }
      }
      else
      {
        v4[1] = v19;
        v20 = v4 + 2;
      }
      v4 = (unsigned __int8 *)TSP::FieldInfo::_InternalSerialize(v18, v20, a3);
    }
  }
  v24 = *((_DWORD *)this + 22);
  if ( v24 > 0 )
    v4 = (unsigned __int8 *)sub_1000546FC(a3, 5, (int)this + 72, v24, v4);
  v25 = *((_DWORD *)this + 28);
  if ( v25 >= 1 )
    v4 = (unsigned __int8 *)sub_1000546FC(a3, 6, (int)this + 96, v25, v4);
  if ( (v6 & 8) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v26 = *((_DWORD *)this + 52);
    *v4 = 56;
    if ( v26 > 0x7F )
    {
      v4[1] = v26 | 0x80;
      v27 = v26 >> 7;
      if ( v26 >> 14 )
      {
        v4 += 3;
        do
        {
          *(v4 - 1) = v27 | 0x80;
          v28 = v27 >> 7;
          ++v4;
          v29 = v27 >> 14;
          v27 >>= 7;
        }
        while ( v29 );
        *(v4 - 1) = v28;
      }
      else
      {
        v4[2] = v27;
        v4 += 3;
      }
    }
    else
    {
      v4[1] = v26;
      v4 += 2;
    }
  }
  v30 = *((_DWORD *)this + 34);
  if ( v30 >= 1 )
    v4 = (unsigned __int8 *)sub_100054554(a3, 8, (int)this + 120, v30, v4);
  if ( (v6 & 1) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v31 = (TSP::FieldPath *)*((_QWORD *)this + 24);
    *v4 = 74;
    v32 = *((_DWORD *)v31 + 9);
    if ( v32 > 0x7F )
    {
      v4[1] = v32 | 0x80;
      v34 = v32 >> 7;
      if ( v32 >> 14 )
      {
        v33 = (google::protobuf::UnknownFieldSet *)(v4 + 3);
        do
        {
          *((_BYTE *)v33 - 1) = v34 | 0x80;
          v35 = v34 >> 7;
          v33 = (google::protobuf::UnknownFieldSet *)((char *)v33 + 1);
          v36 = v34 >> 14;
          v34 >>= 7;
        }
        while ( v36 );
        *((_BYTE *)v33 - 1) = v35;
      }
      else
      {
        v4[2] = v34;
        v33 = (google::protobuf::UnknownFieldSet *)(v4 + 3);
      }
    }
    else
    {
      v4[1] = v32;
      v33 = (google::protobuf::UnknownFieldSet *)(v4 + 2);
    }
    v4 = (unsigned __int8 *)TSP::FieldPath::_InternalSerialize(v31, v33, a3);
  }
  v37 = *((_DWORD *)this + 38);
  if ( v37 )
  {
    for ( j = 0; j != v37; ++j )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v39 = *(TSP::FieldPath **)(*((_QWORD *)this + 20) + 8LL * j + 8);
      *v4 = 82;
      v40 = *((_DWORD *)v39 + 9);
      if ( v40 > 0x7F )
      {
        v4[1] = v40 | 0x80;
        v42 = v40 >> 7;
        if ( v40 >> 14 )
        {
          v41 = (google::protobuf::UnknownFieldSet *)(v4 + 3);
          do
          {
            *((_BYTE *)v41 - 1) = v42 | 0x80;
            v43 = v42 >> 7;
            v41 = (google::protobuf::UnknownFieldSet *)((char *)v41 + 1);
            v44 = v42 >> 14;
            v42 >>= 7;
          }
          while ( v44 );
          *((_BYTE *)v41 - 1) = v43;
        }
        else
        {
          v4[2] = v42;
          v41 = (google::protobuf::UnknownFieldSet *)(v4 + 3);
        }
      }
      else
      {
        v4[1] = v40;
        v41 = (google::protobuf::UnknownFieldSet *)(v4 + 2);
      }
      v4 = (unsigned __int8 *)TSP::FieldPath::_InternalSerialize(v39, v41, a3);
    }
  }
  v45 = (google::protobuf::io::EpsCopyOutputStream *)*((unsigned int *)this + 46);
  if ( (int)v45 > 0 )
    v4 = (unsigned __int8 *)sub_100054554(a3, 11, (int)this + 168, (int)v45, v4);
  v46 = *((_QWORD *)this + 1);
  if ( (v46 & 1) == 0 )
    return v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v46 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)v4,
                              (unsigned __int8 *)a3,
                              v45);
}