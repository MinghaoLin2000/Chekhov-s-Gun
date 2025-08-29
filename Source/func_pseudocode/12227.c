__ZN6google8protobuf8internal10WireFormat37InternalSerializeUnknownFieldsToArrayERKNS0_15UnknownFieldSetEPhPNS0_2io19EpsCopyOutputStreamE
const google::protobuf::UnknownFieldSet *__fastcall google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        google::protobuf::internal::WireFormat *this,
        const google::protobuf::UnknownFieldSet *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  __int64 v5; // x22
  __int64 v8; // x21
  int *v9; // x23
  unsigned __int64 v10; // x8
  unsigned int v11; // w10
  unsigned __int8 *v12; // x3
  int v13; // w9
  int v14; // w8
  unsigned int v15; // w10
  char *v16; // x3
  int v17; // w9
  __int64 v18; // x8
  unsigned int v19; // w10
  char *v20; // x3
  int v21; // w8
  unsigned int v22; // w9
  const google::protobuf::UnknownFieldSet *v23; // x3
  unsigned int v24; // w9
  unsigned int v25; // w9
  unsigned int v26; // w9
  unsigned int v27; // w8
  unsigned int v28; // w10
  unsigned int v29; // w11
  unsigned __int64 v30; // x9
  unsigned int v31; // w10
  unsigned int v32; // w11
  unsigned int v33; // w10
  unsigned int v34; // w11
  unsigned int v35; // w9
  unsigned int v36; // w10
  int v37; // w8
  unsigned int v38; // w9
  unsigned int v39; // w8
  unsigned __int64 v40; // x8
  unsigned __int64 v41; // x10
  unsigned int v42; // w9
  unsigned int v43; // w10

  v5 = *(_QWORD *)this;
  if ( (int)((*((_QWORD *)this + 1) - *(_QWORD *)this) >> 4) >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
        a2 = (const google::protobuf::UnknownFieldSet *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(
                                                          a3,
                                                          (unsigned __int8 *)a2);
      v9 = (int *)(v5 + 16 * v8);
      switch ( v9[1] )
      {
        case 0:
          v10 = *(_QWORD *)(v5 + 16 * v8 + 8);
          v11 = 8 * *v9;
          if ( v11 > 0x7F )
          {
            *(_BYTE *)a2 = v11 | 0x80;
            v24 = v11 >> 7;
            if ( v11 >> 14 )
            {
              v12 = (unsigned __int8 *)a2 + 2;
              do
              {
                *(v12 - 1) = v24 | 0x80;
                v28 = v24 >> 7;
                ++v12;
                v29 = v24 >> 14;
                v24 >>= 7;
              }
              while ( v29 );
              *(v12 - 1) = v28;
            }
            else
            {
              *((_BYTE *)a2 + 1) = v24;
              v12 = (unsigned __int8 *)a2 + 2;
            }
          }
          else
          {
            *(_BYTE *)a2 = v11;
            v12 = (unsigned __int8 *)a2 + 1;
          }
          if ( v10 > 0x7F )
          {
            *v12 = v10 | 0x80;
            v30 = v10 >> 7;
            if ( !(v10 >> 14) )
            {
              v12[1] = v30;
              goto LABEL_47;
            }
            a2 = (const google::protobuf::UnknownFieldSet *)(v12 + 2);
            do
            {
              *((_BYTE *)a2 - 1) = v30 | 0x80;
              v40 = v30 >> 7;
              a2 = (const google::protobuf::UnknownFieldSet *)((char *)a2 + 1);
              v41 = v30 >> 14;
              v30 >>= 7;
            }
            while ( v41 );
            *((_BYTE *)a2 - 1) = v40;
          }
          else
          {
            *v12 = v10;
            a2 = (const google::protobuf::UnknownFieldSet *)(v12 + 1);
          }
          break;
        case 1:
          v13 = *v9;
          v14 = *(_DWORD *)(v5 + 16 * v8 + 8);
          v15 = (8 * *v9) | 5;
          if ( v15 > 0x7F )
          {
            *(_BYTE *)a2 = (8 * *(_BYTE *)v9) | 0x85;
            v25 = (unsigned int)(8 * v13) >> 7;
            if ( v15 >> 14 )
            {
              v16 = (char *)a2 + 2;
              do
              {
                *(v16 - 1) = v25 | 0x80;
                v31 = v25 >> 7;
                ++v16;
                v32 = v25 >> 14;
                v25 >>= 7;
              }
              while ( v32 );
              *(v16 - 1) = v31;
            }
            else
            {
              *((_BYTE *)a2 + 1) = v25;
              v16 = (char *)a2 + 2;
            }
          }
          else
          {
            *(_BYTE *)a2 = v15;
            v16 = (char *)a2 + 1;
          }
          *(_DWORD *)v16 = v14;
          a2 = (const google::protobuf::UnknownFieldSet *)(v16 + 4);
          break;
        case 2:
          v17 = *v9;
          v18 = *(_QWORD *)(v5 + 16 * v8 + 8);
          v19 = (8 * *v9) | 1;
          if ( v19 > 0x7F )
          {
            *(_BYTE *)a2 = (8 * *(_BYTE *)v9) | 0x81;
            v26 = (unsigned int)(8 * v17) >> 7;
            if ( v19 >> 14 )
            {
              v20 = (char *)a2 + 2;
              do
              {
                *(v20 - 1) = v26 | 0x80;
                v33 = v26 >> 7;
                ++v20;
                v34 = v26 >> 14;
                v26 >>= 7;
              }
              while ( v34 );
              *(v20 - 1) = v33;
            }
            else
            {
              *((_BYTE *)a2 + 1) = v26;
              v20 = (char *)a2 + 2;
            }
          }
          else
          {
            *(_BYTE *)a2 = v19;
            v20 = (char *)a2 + 1;
          }
          *(_QWORD *)v20 = v18;
          a2 = (const google::protobuf::UnknownFieldSet *)(v20 + 8);
          break;
        case 3:
          a2 = (const google::protobuf::UnknownFieldSet *)sub_1000A2FD0(
                                                            (int)a3,
                                                            *v9,
                                                            *(_QWORD *)(v5 + 16 * v8 + 8),
                                                            (unsigned __int8 *)a2);
          break;
        case 4:
          v21 = *v9;
          v22 = (8 * *v9) | 3;
          if ( v22 > 0x7F )
          {
            *(_BYTE *)a2 = (8 * *(_BYTE *)v9) | 0x83;
            v27 = (unsigned int)(8 * v21) >> 7;
            if ( v22 >> 14 )
            {
              v23 = (const google::protobuf::UnknownFieldSet *)((char *)a2 + 2);
              do
              {
                *((_BYTE *)v23 - 1) = v27 | 0x80;
                v35 = v27 >> 7;
                v23 = (const google::protobuf::UnknownFieldSet *)((char *)v23 + 1);
                v36 = v27 >> 14;
                v27 >>= 7;
              }
              while ( v36 );
              *((_BYTE *)v23 - 1) = v35;
            }
            else
            {
              *((_BYTE *)a2 + 1) = v27;
              v23 = (const google::protobuf::UnknownFieldSet *)((char *)a2 + 2);
            }
          }
          else
          {
            *(_BYTE *)a2 = v22;
            v23 = (const google::protobuf::UnknownFieldSet *)((char *)a2 + 1);
          }
          v12 = (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                                     *(google::protobuf::internal::WireFormat **)(v5 + 16 * v8 + 8),
                                     v23,
                                     (unsigned __int8 *)a3,
                                     v23);
          if ( *(_QWORD *)a3 <= (unsigned __int64)v12 )
            v12 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v12);
          v37 = *v9;
          v38 = (8 * *v9) | 4;
          if ( v38 > 0x7F )
          {
            *v12 = (8 * *(_BYTE *)v9) | 0x84;
            v39 = (unsigned int)(8 * v37) >> 7;
            if ( v38 >> 14 )
            {
              a2 = (const google::protobuf::UnknownFieldSet *)(v12 + 2);
              do
              {
                *((_BYTE *)a2 - 1) = v39 | 0x80;
                v42 = v39 >> 7;
                a2 = (const google::protobuf::UnknownFieldSet *)((char *)a2 + 1);
                v43 = v39 >> 14;
                v39 >>= 7;
              }
              while ( v43 );
              *((_BYTE *)a2 - 1) = v42;
            }
            else
            {
              v12[1] = v39;
LABEL_47:
              a2 = (const google::protobuf::UnknownFieldSet *)(v12 + 2);
            }
          }
          else
          {
            *v12 = v38;
            a2 = (const google::protobuf::UnknownFieldSet *)(v12 + 1);
          }
          break;
        default:
          break;
      }
      ++v8;
      v5 = *(_QWORD *)this;
    }
    while ( v8 < (int)((*((_QWORD *)this + 1) - *(_QWORD *)this) >> 4) );
  }
  return a2;
}