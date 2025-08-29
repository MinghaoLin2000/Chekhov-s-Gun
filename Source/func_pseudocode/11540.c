__ZN6google8protobuf8internal12ExtensionSet6InsertEi
int *__fastcall google::protobuf::internal::ExtensionSet::Insert(
        google::protobuf::internal::ExtensionSet *this,
        int a2)
{
  unsigned int v3; // w10
  int *v4; // x21
  __int64 v6; // x9
  int *v7; // x8
  unsigned __int64 v8; // x12
  unsigned __int64 v9; // x13
  int *v10; // x14
  int *v11; // x14
  int v12; // t1
  int *result; // x0
  int v14; // [xsp+0h] [xbp-40h] BYREF
  __int64 v15; // [xsp+8h] [xbp-38h]
  __int64 v16; // [xsp+10h] [xbp-30h]
  __int64 v17; // [xsp+18h] [xbp-28h]

  v3 = *((unsigned __int16 *)this + 4);
  v4 = (int *)*((_QWORD *)this + 2);
  if ( v3 >= 0x101 )
  {
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v14 = a2;
    return (int *)(sub_1000C8C30(v4, &v14, &v14) + 40);
  }
  v6 = *((unsigned __int16 *)this + 5);
  v7 = &v4[8 * v6];
  if ( !*((_WORD *)this + 5) )
  {
    if ( !*((_WORD *)this + 4) )
      goto LABEL_18;
    LOWORD(v6) = 0;
LABEL_17:
    *((_WORD *)this + 5) = v6 + 1;
    *v7 = a2;
    *((_QWORD *)v7 + 1) = 0LL;
    result = v7 + 2;
    *((_QWORD *)v7 + 2) = 0LL;
    *((_QWORD *)v7 + 3) = 0LL;
    return result;
  }
  v8 = *((unsigned __int16 *)this + 5);
  do
  {
    v9 = v8 >> 1;
    v10 = &v4[8 * (v8 >> 1)];
    v12 = *v10;
    v11 = v10 + 8;
    v8 += ~(v8 >> 1);
    if ( v12 < a2 )
      v4 = v11;
    else
      v8 = v9;
  }
  while ( v8 );
  if ( v4 != v7 )
  {
    if ( *v4 == a2 )
      return v4 + 2;
    if ( (unsigned int)v6 < v3 )
    {
      memmove(v4 + 8, v4, (char *)v7 - (char *)v4);
      LOWORD(v6) = *((_WORD *)this + 5);
      v7 = v4;
      goto LABEL_17;
    }
    goto LABEL_18;
  }
  if ( (unsigned int)v6 < v3 )
    goto LABEL_17;
LABEL_18:
  google::protobuf::internal::ExtensionSet::GrowCapacity((unsigned __int16 *)this, v6 + 1);
  return (int *)google::protobuf::internal::ExtensionSet::Insert(this, a2);
}