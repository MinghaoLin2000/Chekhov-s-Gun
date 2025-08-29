__ZNK3TSP5Color18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::Color::_InternalSerialize(
        TSP::Color *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  int v6; // w21
  unsigned __int64 v7; // x9
  unsigned __int64 v8; // x8
  unsigned __int64 v9; // x9
  unsigned __int64 v10; // x10
  int v11; // s0
  int v12; // s0
  int v13; // s0
  int v14; // s0
  int v15; // s0
  int v16; // s0
  int v17; // s0
  int v18; // s0
  int v19; // s0
  unsigned __int64 v20; // x9
  unsigned __int64 v21; // x8
  unsigned __int64 v22; // x9
  unsigned __int64 v23; // x10
  __int64 v24; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 0x200) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v7 = *((int *)this + 15);
    *a2 = 8;
    if ( (unsigned int)v7 > 0x7F )
    {
      a2[1] = v7 | 0x80;
      v8 = v7 >> 7;
      if ( (unsigned int)v7 >> 14 )
      {
        a2 += 3;
        do
        {
          *(a2 - 1) = v8 | 0x80;
          v9 = v8 >> 7;
          ++a2;
          v10 = v8 >> 14;
          v8 >>= 7;
        }
        while ( v10 );
        *(a2 - 1) = v9;
        if ( (v6 & 1) != 0 )
          goto LABEL_24;
      }
      else
      {
        a2[2] = v8;
        a2 += 3;
        if ( (v6 & 1) != 0 )
          goto LABEL_24;
      }
    }
    else
    {
      a2[1] = v7;
      a2 += 2;
      if ( (v6 & 1) != 0 )
        goto LABEL_24;
    }
LABEL_3:
    if ( (v6 & 2) == 0 )
      goto LABEL_4;
    goto LABEL_27;
  }
  if ( (v6 & 1) == 0 )
    goto LABEL_3;
LABEL_24:
  if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
  v11 = *((_DWORD *)this + 6);
  *a2 = 29;
  *(_DWORD *)(a2 + 1) = v11;
  a2 += 5;
  if ( (v6 & 2) == 0 )
  {
LABEL_4:
    if ( (v6 & 4) == 0 )
      goto LABEL_5;
    goto LABEL_30;
  }
LABEL_27:
  if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
  v12 = *((_DWORD *)this + 7);
  *a2 = 37;
  *(_DWORD *)(a2 + 1) = v12;
  a2 += 5;
  if ( (v6 & 4) == 0 )
  {
LABEL_5:
    if ( (v6 & 0x400) == 0 )
      goto LABEL_6;
    goto LABEL_33;
  }
LABEL_30:
  if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
  v13 = *((_DWORD *)this + 8);
  *a2 = 45;
  *(_DWORD *)(a2 + 1) = v13;
  a2 += 5;
  if ( (v6 & 0x400) == 0 )
  {
LABEL_6:
    if ( (v6 & 8) == 0 )
      goto LABEL_7;
    goto LABEL_36;
  }
LABEL_33:
  if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
  v14 = *((_DWORD *)this + 16);
  *a2 = 53;
  *(_DWORD *)(a2 + 1) = v14;
  a2 += 5;
  if ( (v6 & 8) == 0 )
  {
LABEL_7:
    if ( (v6 & 0x10) == 0 )
      goto LABEL_8;
    goto LABEL_39;
  }
LABEL_36:
  if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
  v15 = *((_DWORD *)this + 9);
  *a2 = 61;
  *(_DWORD *)(a2 + 1) = v15;
  a2 += 5;
  if ( (v6 & 0x10) == 0 )
  {
LABEL_8:
    if ( (v6 & 0x20) == 0 )
      goto LABEL_9;
    goto LABEL_42;
  }
LABEL_39:
  if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
  v16 = *((_DWORD *)this + 10);
  *a2 = 69;
  *(_DWORD *)(a2 + 1) = v16;
  a2 += 5;
  if ( (v6 & 0x20) == 0 )
  {
LABEL_9:
    if ( (v6 & 0x40) == 0 )
      goto LABEL_10;
    goto LABEL_45;
  }
LABEL_42:
  if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
  v17 = *((_DWORD *)this + 11);
  *a2 = 77;
  *(_DWORD *)(a2 + 1) = v17;
  a2 += 5;
  if ( (v6 & 0x40) == 0 )
  {
LABEL_10:
    if ( (v6 & 0x80) == 0 )
      goto LABEL_11;
    goto LABEL_48;
  }
LABEL_45:
  if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
  v18 = *((_DWORD *)this + 12);
  *a2 = 85;
  *(_DWORD *)(a2 + 1) = v18;
  a2 += 5;
  if ( (v6 & 0x80) == 0 )
  {
LABEL_11:
    if ( (v6 & 0x100) == 0 )
      goto LABEL_60;
    goto LABEL_51;
  }
LABEL_48:
  if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
  v19 = *((_DWORD *)this + 13);
  *a2 = 93;
  *(_DWORD *)(a2 + 1) = v19;
  a2 += 5;
  if ( (v6 & 0x100) != 0 )
  {
LABEL_51:
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v20 = *((int *)this + 14);
    *a2 = 96;
    if ( (unsigned int)v20 > 0x7F )
    {
      a2[1] = v20 | 0x80;
      v21 = v20 >> 7;
      if ( (unsigned int)v20 >> 14 )
      {
        a2 += 3;
        do
        {
          *(a2 - 1) = v21 | 0x80;
          v22 = v21 >> 7;
          ++a2;
          v23 = v21 >> 14;
          v21 >>= 7;
        }
        while ( v23 );
        *(a2 - 1) = v22;
      }
      else
      {
        a2[2] = v21;
        a2 += 3;
      }
    }
    else
    {
      a2[1] = v20;
      a2 += 2;
    }
  }
LABEL_60:
  v24 = *((_QWORD *)this + 1);
  if ( (v24 & 1) == 0 )
    return a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v24 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)a2,
                              (unsigned __int8 *)a3,
                              a4);
}