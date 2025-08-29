__ZN6google8protobuf10TextFormat13ParseInfoTree14RecordLocationEPKNS0_15FieldDescriptorENS1_13ParseLocationE
void __fastcall google::protobuf::TextFormat::ParseInfoTree::RecordLocation(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // x19
  _QWORD *v5; // x22
  unsigned __int64 v6; // x8
  _QWORD *v7; // x22
  __int64 v8; // x9
  __int64 v9; // x22
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x1
  __int64 v13; // x0
  _QWORD *v14; // x9
  __int64 v15; // x8
  char *v16; // x0
  char *v17; // x10
  __int64 v18; // t1
  __int64 v19; // [xsp+8h] [xbp-38h] BYREF
  char v20; // [xsp+17h] [xbp-29h] BYREF
  __int64 *v21; // [xsp+18h] [xbp-28h] BYREF

  v19 = a2;
  v21 = &v19;
  v4 = (_QWORD *)sub_1001012E4(a1, &v19, &unk_10018D8BB, &v21, &v20);
  v5 = (_QWORD *)v4[6];
  v6 = v4[7];
  if ( (unsigned __int64)v5 >= v6 )
  {
    v8 = v4[5];
    v9 = ((__int64)v5 - v8) >> 3;
    if ( (unsigned __int64)(v9 + 1) >> 61 )
      sub_100097888(v4 + 5);
    v10 = v6 - v8;
    v11 = v10 >> 2;
    if ( v10 >> 2 <= (unsigned __int64)(v9 + 1) )
      v11 = v9 + 1;
    if ( (unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL )
      v12 = 0x1FFFFFFFFFFFFFFFLL;
    else
      v12 = v11;
    if ( v12 )
      v13 = sub_10009A09C(v4 + 7);
    else
      v13 = 0LL;
    v14 = (_QWORD *)(v13 + 8 * v9);
    v15 = v13 + 8 * v12;
    *v14 = a3;
    v7 = v14 + 1;
    v17 = (char *)v4[5];
    v16 = (char *)v4[6];
    if ( v16 != v17 )
    {
      do
      {
        v18 = *((_QWORD *)v16 - 1);
        v16 -= 8;
        *--v14 = v18;
      }
      while ( v16 != v17 );
      v16 = (char *)v4[5];
    }
    v4[5] = v14;
    v4[6] = v7;
    v4[7] = v15;
    if ( v16 )
      operator delete(v16);
  }
  else
  {
    *v5 = a3;
    v7 = v5 + 1;
  }
  v4[6] = v7;
}