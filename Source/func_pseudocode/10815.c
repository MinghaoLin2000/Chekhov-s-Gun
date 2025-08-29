__ZN6google8protobuf14DescriptorPool6TablesC2Ev
google::protobuf::DescriptorPool::Tables *__fastcall google::protobuf::DescriptorPool::Tables::Tables(
        google::protobuf::DescriptorPool::Tables *this)
{
  __int64 v2; // x27
  __int64 v3; // x20
  _BYTE v5[24]; // [xsp+30h] [xbp-260h] BYREF
  int v6; // [xsp+48h] [xbp-248h]
  _DWORD v7[8]; // [xsp+50h] [xbp-240h] BYREF
  _DWORD v8[8]; // [xsp+70h] [xbp-220h] BYREF
  _DWORD v9[8]; // [xsp+90h] [xbp-200h] BYREF
  _DWORD v10[8]; // [xsp+B0h] [xbp-1E0h] BYREF
  _DWORD v11[8]; // [xsp+D0h] [xbp-1C0h] BYREF
  _DWORD v12[8]; // [xsp+F0h] [xbp-1A0h] BYREF
  _DWORD v13[8]; // [xsp+110h] [xbp-180h] BYREF
  _DWORD v14[8]; // [xsp+130h] [xbp-160h] BYREF
  _DWORD v15[8]; // [xsp+150h] [xbp-140h] BYREF
  _DWORD v16[8]; // [xsp+170h] [xbp-120h] BYREF
  _DWORD v17[8]; // [xsp+190h] [xbp-100h] BYREF
  _DWORD v18[8]; // [xsp+1B0h] [xbp-E0h] BYREF
  _DWORD v19[8]; // [xsp+1D0h] [xbp-C0h] BYREF
  _DWORD v20[8]; // [xsp+1F0h] [xbp-A0h] BYREF
  _DWORD v21[8]; // [xsp+210h] [xbp-80h] BYREF

  *((_QWORD *)this + 6) = 0LL;
  *((_OWORD *)this + 1) = 0u;
  *((_OWORD *)this + 2) = 0u;
  *(_OWORD *)this = 0u;
  *((_DWORD *)this + 14) = 1065353216;
  sub_1000985D0((_DWORD)this + 24, 3uLL);
  *((_OWORD *)this + 4) = 0u;
  *((_OWORD *)this + 5) = 0u;
  *((_DWORD *)this + 24) = 1065353216;
  sub_1000985D0((_DWORD)this + 64, 3uLL);
  *(_OWORD *)((char *)this + 104) = 0u;
  *(_OWORD *)((char *)this + 120) = 0u;
  *((_DWORD *)this + 34) = 1065353216;
  sub_1000985D0((_DWORD)this + 104, 3uLL);
  *((_OWORD *)this + 9) = 0u;
  *((_OWORD *)this + 10) = 0u;
  *((_DWORD *)this + 44) = 1065353216;
  *(_OWORD *)((char *)this + 184) = 0u;
  *(_OWORD *)((char *)this + 232) = 0u;
  *(_OWORD *)((char *)this + 280) = 0u;
  *(_OWORD *)((char *)this + 200) = 0u;
  *(_OWORD *)((char *)this + 216) = 0u;
  *(_OWORD *)((char *)this + 248) = 0u;
  *(_OWORD *)((char *)this + 264) = 0u;
  *(_OWORD *)((char *)this + 296) = 0u;
  *(_OWORD *)((char *)this + 312) = 0u;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 84) = 1065353216;
  sub_1000985D0((_DWORD)this + 304, 3uLL);
  *(_OWORD *)((char *)this + 344) = 0u;
  *(_OWORD *)((char *)this + 360) = 0u;
  *((_DWORD *)this + 94) = 1065353216;
  sub_1000985D0((_DWORD)this + 344, 3uLL);
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 48) = (char *)this + 392;
  *(_OWORD *)((char *)this + 408) = 0u;
  *(_OWORD *)((char *)this + 424) = 0u;
  *(_OWORD *)((char *)this + 440) = 0u;
  *(_OWORD *)((char *)this + 456) = 0u;
  *(_OWORD *)((char *)this + 472) = 0u;
  *(_OWORD *)((char *)this + 488) = 0u;
  sub_10007A754((int)v5, "google.protobuf.DoubleValue");
  v6 = 1;
  sub_10007A754((int)v7, "google.protobuf.FloatValue");
  v7[6] = 2;
  sub_10007A754((int)v8, "google.protobuf.Int64Value");
  v8[6] = 3;
  sub_10007A754((int)v9, "google.protobuf.UInt64Value");
  v9[6] = 4;
  sub_10007A754((int)v10, "google.protobuf.Int32Value");
  v10[6] = 5;
  sub_10007A754((int)v11, "google.protobuf.UInt32Value");
  v11[6] = 6;
  sub_10007A754((int)v12, "google.protobuf.StringValue");
  v12[6] = 7;
  sub_10007A754((int)v13, "google.protobuf.BytesValue");
  v13[6] = 8;
  sub_10007A754((int)v14, "google.protobuf.BoolValue");
  v14[6] = 9;
  sub_10007A754((int)v15, "google.protobuf.Any");
  v15[6] = 10;
  sub_10007A754((int)v16, "google.protobuf.FieldMask");
  v16[6] = 11;
  sub_10007A754((int)v17, "google.protobuf.Duration");
  v17[6] = 12;
  sub_10007A754((int)v18, "google.protobuf.Timestamp");
  v18[6] = 13;
  sub_10007A754((int)v19, "google.protobuf.Value");
  v19[6] = 14;
  sub_10007A754((int)v20, "google.protobuf.ListValue");
  v20[6] = 15;
  sub_10007A754((int)v21, "google.protobuf.Struct");
  v2 = 0LL;
  v21[6] = 16;
  do
  {
    sub_100098D00((char *)this + 144, &v5[v2], &v5[v2]);
    v2 += 32LL;
  }
  while ( v2 != 512 );
  v3 = 512LL;
  do
  {
    if ( (char)v5[v3 - 9] < 0 )
      operator delete(*(void **)&v5[v3 - 32]);
    v3 -= 32LL;
  }
  while ( v3 );
  return this;
}