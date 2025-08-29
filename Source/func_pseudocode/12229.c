__ZN6google8protobuf8internal10WireFormat24ComputeUnknownFieldsSizeERKNS0_15UnknownFieldSetE
__int64 __fastcall google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        google::protobuf::internal::WireFormat *this,
        const google::protobuf::UnknownFieldSet *a2)
{
  int *v2; // x20
  unsigned __int64 v3; // x8
  __int64 v4; // x19
  __int64 v5; // x21
  __int64 v6; // x8
  __int64 v7; // x9
  __int64 v8; // x10
  __int64 v9; // x9
  int v10; // w25
  __int64 v11; // x26
  __int64 v12; // x0

  v2 = *(int **)this;
  v3 = *((_QWORD *)this + 1) - *(_QWORD *)this;
  if ( (int)(v3 >> 4) >= 1 )
  {
    v4 = 0LL;
    v5 = (unsigned int)(v3 >> 4);
    while ( 2 )
    {
      switch ( v2[1] )
      {
        case 0:
          v6 = (9 * (__clz((8 * *v2) | 1) ^ 0x1F) + 73) >> 6;
          v7 = v4 + ((9 * (__clz(*((_QWORD *)v2 + 1) | 1LL) ^ 0x3F) + 73) >> 6);
          goto LABEL_12;
        case 1:
          v4 += ((9 * (__clz((8 * *v2) | 5) ^ 0x1F) + 73) >> 6) + 4LL;
          goto LABEL_13;
        case 2:
          v4 += ((9 * (__clz((8 * *v2) | 1) ^ 0x1F) + 73) >> 6) + 8LL;
          goto LABEL_13;
        case 3:
          v8 = *((_QWORD *)v2 + 1);
          v6 = *(unsigned __int8 *)(v8 + 23);
          if ( (*(char *)(v8 + 23) & 0x80000000) == 0 )
          {
            LODWORD(v9) = *(unsigned __int8 *)(v8 + 23);
            if ( (v6 & 0x80) == 0 )
              goto LABEL_10;
LABEL_9:
            v6 = *(_QWORD *)(v8 + 8);
            goto LABEL_10;
          }
          v9 = *(_QWORD *)(v8 + 8);
          if ( (v6 & 0x80) != 0 )
            goto LABEL_9;
LABEL_10:
          v7 = v4 + ((9 * (__clz((8 * *v2) | 3) ^ 0x1F) + 73) >> 6) + ((9 * (__clz(v9 | 1) ^ 0x1F) + 73) >> 6);
LABEL_12:
          v4 = v7 + v6;
LABEL_13:
          v2 += 4;
          if ( !--v5 )
            return v4;
          continue;
        case 4:
          v10 = *v2;
          v11 = (9 * (__clz((8 * *v2) | 3) ^ 0x1F) + 73) >> 6;
          v12 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
                  *((google::protobuf::internal::WireFormat **)v2 + 1),
                  a2);
          v6 = (9 * (__clz((8 * v10) | 5) ^ 0x1F) + 73) >> 6;
          v7 = v12 + v4 + v11;
          goto LABEL_12;
        default:
          goto LABEL_13;
      }
    }
  }
  return 0LL;
}