__ZN6google8protobuf10TextFormat13ParseInfoTree12CreateNestedEPKNS0_15FieldDescriptorE
__int64 __fastcall google::protobuf::TextFormat::ParseInfoTree::CreateNested(
        google::protobuf::TextFormat::ParseInfoTree *this,
        const google::protobuf::FieldDescriptor *a2)
{
  _QWORD *v2; // x19
  __int64 v3; // x20
  __int64 *v4; // x21
  unsigned __int64 v5; // x10
  _QWORD *v6; // x21
  _QWORD *v7; // x9
  __int64 v8; // x22
  unsigned __int64 v9; // x11
  __int64 v10; // x10
  __int64 v11; // x1
  __int64 v12; // x0
  __int64 *v13; // x8
  __int64 v14; // x10
  __int64 v15; // t1
  __int128 v16; // q0
  __int64 v17; // x8
  const google::protobuf::FieldDescriptor *v19; // [xsp+8h] [xbp-58h] BYREF
  char v20; // [xsp+17h] [xbp-49h] BYREF
  const google::protobuf::FieldDescriptor **v21; // [xsp+18h] [xbp-48h] BYREF
  __int128 v22; // [xsp+20h] [xbp-40h]
  __int64 v23; // [xsp+30h] [xbp-30h]
  _QWORD *v24; // [xsp+38h] [xbp-28h]

  v19 = a2;
  v21 = &v19;
  v2 = (_QWORD *)sub_1001012E4((char *)this + 24, &v19, &unk_10018D8BB, &v21, &v20);
  v3 = operator new(48LL, 0x1020C404C310C12LL);
  *(_OWORD *)v3 = 0u;
  *(_OWORD *)(v3 + 16) = 0u;
  *(_QWORD *)v3 = v3 + 8;
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_QWORD *)(v3 + 24) = v3 + 32;
  v4 = (__int64 *)v2[6];
  v5 = v2[7];
  if ( (unsigned __int64)v4 >= v5 )
  {
    v7 = (_QWORD *)v2[5];
    v8 = v4 - v7;
    v9 = v8 + 1;
    if ( (unsigned __int64)(v8 + 1) >> 61 )
      sub_100097888(v2 + 5);
    v10 = v5 - (_QWORD)v7;
    if ( v10 >> 2 > v9 )
      v9 = v10 >> 2;
    if ( (unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL )
      v11 = 0x1FFFFFFFFFFFFFFFLL;
    else
      v11 = v9;
    v24 = v2 + 7;
    if ( v11 )
    {
      v12 = sub_10009A09C(v2 + 7);
      v7 = (_QWORD *)v2[5];
      v4 = (__int64 *)v2[6];
    }
    else
    {
      v12 = 0LL;
    }
    v13 = (__int64 *)(v12 + 8 * v8);
    v14 = v12 + 8 * v11;
    v23 = v14;
    *v13 = v3;
    *((_QWORD *)&v22 + 1) = v13 + 1;
    if ( v4 == v7 )
    {
      v6 = v13 + 1;
    }
    else
    {
      do
      {
        v15 = *--v4;
        *v4 = 0LL;
        *--v13 = v15;
      }
      while ( v4 != v7 );
      v6 = (_QWORD *)*((_QWORD *)&v22 + 1);
      v14 = v23;
    }
    v16 = *(_OWORD *)(v2 + 5);
    v2[5] = v13;
    v2[6] = v6;
    v22 = v16;
    v17 = v2[7];
    v2[7] = v14;
    v23 = v17;
    v21 = (const google::protobuf::FieldDescriptor **)v16;
    sub_100101564(&v21);
  }
  else
  {
    *v4 = v3;
    v6 = v4 + 1;
  }
  v2[6] = v6;
  return *(v6 - 1);
}