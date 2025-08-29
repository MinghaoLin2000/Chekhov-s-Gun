__ZN6google8protobuf25EncodedDescriptorDatabase15DescriptorIndex10EnsureFlatEv
__int64 __fastcall google::protobuf::EncodedDescriptorDatabase::DescriptorIndex::EnsureFlat(
        google::protobuf::EncodedDescriptorDatabase::DescriptorIndex *this)
{
  __int64 result; // x0
  __int64 v3; // x8
  __int64 v4; // x0
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x2
  __int64 v14; // x3
  __int128 v15; // [xsp+0h] [xbp-50h] BYREF
  __int64 v16; // [xsp+10h] [xbp-40h]
  __int64 v17; // [xsp+20h] [xbp-30h] BYREF
  __int128 *v18; // [xsp+28h] [xbp-28h] BYREF

  result = sub_1000BC5CC();
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
  {
    sub_1000BE23C(&v15, v3 + ((__int64)(*((_QWORD *)this + 8) - *((_QWORD *)this + 7)) >> 5));
    v4 = *((_QWORD *)this + 3);
    v5 = *((_QWORD *)this + 7);
    v6 = *((_QWORD *)this + 8);
    v17 = *((_QWORD *)this + 6);
    sub_1000BE3A4(v4, (char *)this + 32, v5, v6, v15, &v17);
    sub_1000BE59C((char *)this + 56);
    *(_OWORD *)((char *)this + 56) = v15;
    *((_QWORD *)this + 9) = v16;
    v16 = 0LL;
    v15 = 0uLL;
    sub_10009F464((char *)this + 24, *((_QWORD *)this + 4));
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 3) = (char *)this + 32;
    v18 = &v15;
    result = sub_1000BE300(&v18);
  }
  v7 = *((_QWORD *)this + 12);
  if ( v7 )
  {
    sub_1000BE5D8(&v15, v7 + ((__int64)(*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) >> 5));
    v8 = *((_QWORD *)this + 10);
    v9 = *((_QWORD *)this + 14);
    v10 = *((_QWORD *)this + 15);
    v17 = *((_QWORD *)this + 13);
    sub_1000BE658(v8, (char *)this + 88, v9, v10, v15, &v17);
    sub_1000BE59C((char *)this + 112);
    *((_OWORD *)this + 7) = v15;
    *((_QWORD *)this + 16) = v16;
    v16 = 0LL;
    v15 = 0uLL;
    sub_10009F464((char *)this + 80, *((_QWORD *)this + 11));
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 10) = (char *)this + 88;
    v18 = &v15;
    result = sub_1000BE300(&v18);
  }
  v11 = *((_QWORD *)this + 19);
  if ( v11 )
  {
    sub_1000BE758(&v15, v11 - 0x3333333333333333LL * ((__int64)(*((_QWORD *)this + 22) - *((_QWORD *)this + 21)) >> 3));
    v12 = *((_QWORD *)this + 17);
    v13 = *((_QWORD *)this + 21);
    v14 = *((_QWORD *)this + 22);
    v17 = *((_QWORD *)this + 20);
    sub_1000BE8F4(v12, (char *)this + 144, v13, v14, v15, &v17);
    sub_1000BEB18((char *)this + 168);
    *(_OWORD *)((char *)this + 168) = v15;
    *((_QWORD *)this + 23) = v16;
    v16 = 0LL;
    v15 = 0uLL;
    sub_10009F464((char *)this + 136, *((_QWORD *)this + 18));
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 17) = (char *)this + 144;
    v18 = &v15;
    return sub_1000BE850(&v18);
  }
  return result;
}