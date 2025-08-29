__ZN6google8protobuf14DescriptorPool6Tables12AddExtensionEPKNS0_15FieldDescriptorE
__int64 __fastcall google::protobuf::DescriptorPool::Tables::AddExtension(
        google::protobuf::DescriptorPool::Tables *this,
        const google::protobuf::FieldDescriptor *a2)
{
  __int64 v3; // x23
  int v4; // w22
  char v5; // w1
  char v6; // w20
  unsigned __int64 v7; // x8
  unsigned __int64 v8; // x10
  __int64 v9; // x22
  __int64 v10; // x9
  __int64 v11; // x24
  __int64 v12; // x8
  __int64 v13; // x9
  __int64 v14; // x1
  __int64 v15; // x0
  __int64 v16; // x9
  __int64 v17; // x8
  char *v18; // x0
  char *v19; // x10
  __int64 v21; // [xsp+8h] [xbp-48h] BYREF
  int v22; // [xsp+10h] [xbp-40h]
  const google::protobuf::FieldDescriptor *v23; // [xsp+18h] [xbp-38h]

  v3 = *((_QWORD *)a2 + 10);
  v4 = *((_DWORD *)a2 + 17);
  v21 = v3;
  v22 = v4;
  v23 = a2;
  sub_10009B650((char *)this + 384, &v21, &v21);
  v6 = v5;
  if ( (v5 & 1) != 0 )
  {
    v8 = *((_QWORD *)this + 61);
    v7 = *((_QWORD *)this + 62);
    if ( v8 >= v7 )
    {
      v10 = *((_QWORD *)this + 60);
      v11 = (__int64)(v8 - v10) >> 4;
      if ( (unsigned __int64)(v11 + 1) >> 60 )
        sub_100097888((char *)this + 480);
      v12 = v7 - v10;
      v13 = v12 >> 3;
      if ( v12 >> 3 <= (unsigned __int64)(v11 + 1) )
        v13 = v11 + 1;
      if ( (unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF0LL )
        v14 = 0xFFFFFFFFFFFFFFFLL;
      else
        v14 = v13;
      if ( v14 )
        v15 = sub_10009A208((char *)this + 496);
      else
        v15 = 0LL;
      v16 = v15 + 16 * v11;
      v17 = v15 + 16 * v14;
      *(_QWORD *)v16 = v3;
      *(_DWORD *)(v16 + 8) = v4;
      v9 = v16 + 16;
      v19 = (char *)*((_QWORD *)this + 60);
      v18 = (char *)*((_QWORD *)this + 61);
      if ( v18 != v19 )
      {
        do
        {
          *(_OWORD *)(v16 - 16) = *((_OWORD *)v18 - 1);
          v16 -= 16LL;
          v18 -= 16;
        }
        while ( v18 != v19 );
        v18 = (char *)*((_QWORD *)this + 60);
      }
      *((_QWORD *)this + 60) = v16;
      *((_QWORD *)this + 61) = v9;
      *((_QWORD *)this + 62) = v17;
      if ( v18 )
        operator delete(v18);
    }
    else
    {
      *(_QWORD *)v8 = v3;
      *(_DWORD *)(v8 + 8) = v4;
      v9 = v8 + 16;
    }
    *((_QWORD *)this + 61) = v9;
  }
  return v6 & 1;
}