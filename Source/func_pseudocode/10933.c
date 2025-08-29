__ZN6google8protobuf17DescriptorBuilder19BuildExtensionRangeERKNS0_30DescriptorProto_ExtensionRangeEPKNS0_10DescriptorEPNS5_14ExtensionRangeE
void __fastcall google::protobuf::DescriptorBuilder::BuildExtensionRange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v8; // w8
  int v9; // w9
  unsigned __int64 v10; // x8
  char *v11; // x9
  char *v12; // x24
  char *v13; // x0
  __int64 v14; // x24
  unsigned __int64 v15; // x10
  __int64 v16; // x8
  __int64 v17; // x1
  __int64 v18; // x8
  char *v19; // x10
  int v20; // t1
  unsigned __int64 v21; // x26
  char *v22; // x25
  char *v23; // x0
  __int64 v24; // x25
  unsigned __int64 v25; // x9
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x8
  char *v29; // x9
  int v30; // t1
  char *v31; // x23
  char *v32; // x0
  __int64 v33; // x24
  unsigned __int64 v34; // x9
  __int64 v35; // x8
  __int64 v36; // x1
  __int64 v37; // x8
  char *v38; // x9
  __int64 v39; // x8
  int v40; // t1
  __int64 v41; // x22
  void *v42; // x21
  void *v43; // x3
  void *v44[2]; // [xsp+0h] [xbp-70h] BYREF
  char v45; // [xsp+17h] [xbp-59h]
  void *__p; // [xsp+18h] [xbp-58h] BYREF
  char *v47; // [xsp+20h] [xbp-50h]
  unsigned __int64 v48; // [xsp+28h] [xbp-48h] BYREF

  v8 = *(_DWORD *)(a2 + 32);
  *(_DWORD *)a4 = v8;
  v9 = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a4 + 4) = v9;
  if ( v8 <= 0 )
  {
    google::protobuf::DescriptorBuilder::AddError(
      a1,
      *(_QWORD *)(a3 + 8),
      a2,
      1LL,
      "Extension numbers must be positive integers.");
    v8 = *(_DWORD *)a4;
    v9 = *(_DWORD *)(a4 + 4);
  }
  if ( v8 >= v9 )
    google::protobuf::DescriptorBuilder::AddError(
      a1,
      *(_QWORD *)(a3 + 8),
      a2,
      1LL,
      "Extension range end number must be greater than start number.");
  *(_QWORD *)(a4 + 8) = 0LL;
  if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
  {
    __p = 0LL;
    v47 = 0LL;
    v48 = 0LL;
    google::protobuf::Descriptor::GetLocationPath(a3, (__int64)&__p);
    v11 = v47;
    v10 = v48;
    if ( (unsigned __int64)v47 >= v48 )
    {
      v13 = (char *)__p;
      v14 = (v47 - (_BYTE *)__p) >> 2;
      v15 = v14 + 1;
      if ( (unsigned __int64)(v14 + 1) >> 62 )
        sub_100097888(&__p);
      v16 = v48 - (_QWORD)__p;
      if ( (__int64)(v48 - (_QWORD)__p) >> 1 > v15 )
        v15 = v16 >> 1;
      if ( (unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFFCLL )
        v17 = 0x3FFFFFFFFFFFFFFFLL;
      else
        v17 = v15;
      if ( v17 )
      {
        v18 = sub_10009C294(&v48);
        v13 = (char *)__p;
        v11 = v47;
      }
      else
      {
        v18 = 0LL;
      }
      v19 = (char *)(v18 + 4 * v14);
      v10 = v18 + 4 * v17;
      *(_DWORD *)v19 = 5;
      v12 = v19 + 4;
      while ( v11 != v13 )
      {
        v20 = *((_DWORD *)v11 - 1);
        v11 -= 4;
        *((_DWORD *)v19 - 1) = v20;
        v19 -= 4;
      }
      __p = v19;
      v47 = v12;
      v48 = v10;
      if ( v13 )
      {
        operator delete(v13);
        v10 = v48;
      }
    }
    else
    {
      *(_DWORD *)v47 = 5;
      v12 = v11 + 4;
    }
    v47 = v12;
    v21 = (unsigned __int64)(a4 - *(_QWORD *)(a3 + 72)) >> 4;
    if ( (unsigned __int64)v12 >= v10 )
    {
      v23 = (char *)__p;
      v24 = (v12 - (_BYTE *)__p) >> 2;
      v25 = v24 + 1;
      if ( (unsigned __int64)(v24 + 1) >> 62 )
        sub_100097888(&__p);
      v26 = v10 - (_QWORD)__p;
      if ( v26 >> 1 > v25 )
        v25 = v26 >> 1;
      if ( (unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFFCLL )
        v27 = 0x3FFFFFFFFFFFFFFFLL;
      else
        v27 = v25;
      if ( v27 )
      {
        v28 = sub_10009C294(&v48);
        v23 = (char *)__p;
        v12 = v47;
      }
      else
      {
        v28 = 0LL;
      }
      v29 = (char *)(v28 + 4 * v24);
      v10 = v28 + 4 * v27;
      *(_DWORD *)v29 = v21;
      v22 = v29 + 4;
      while ( v12 != v23 )
      {
        v30 = *((_DWORD *)v12 - 1);
        v12 -= 4;
        *((_DWORD *)v29 - 1) = v30;
        v29 -= 4;
      }
      __p = v29;
      v47 = v22;
      v48 = v10;
      if ( v23 )
      {
        operator delete(v23);
        v10 = v48;
      }
    }
    else
    {
      *(_DWORD *)v12 = v21;
      v22 = v12 + 4;
    }
    v47 = v22;
    if ( (unsigned __int64)v22 >= v10 )
    {
      v32 = (char *)__p;
      v33 = (v22 - (_BYTE *)__p) >> 2;
      v34 = v33 + 1;
      if ( (unsigned __int64)(v33 + 1) >> 62 )
        sub_100097888(&__p);
      v35 = v10 - (_QWORD)__p;
      if ( v35 >> 1 > v34 )
        v34 = v35 >> 1;
      if ( (unsigned __int64)v35 >= 0x7FFFFFFFFFFFFFFCLL )
        v36 = 0x3FFFFFFFFFFFFFFFLL;
      else
        v36 = v34;
      if ( v36 )
      {
        v37 = sub_10009C294(&v48);
        v32 = (char *)__p;
        v22 = v47;
      }
      else
      {
        v37 = 0LL;
      }
      v38 = (char *)(v37 + 4 * v33);
      v39 = v37 + 4 * v36;
      *(_DWORD *)v38 = 3;
      v31 = v38 + 4;
      while ( v22 != v32 )
      {
        v40 = *((_DWORD *)v22 - 1);
        v22 -= 4;
        *((_DWORD *)v38 - 1) = v40;
        v38 -= 4;
      }
      __p = v38;
      v47 = v31;
      v48 = v39;
      if ( v32 )
        operator delete(v32);
    }
    else
    {
      *(_DWORD *)v22 = 3;
      v31 = v22 + 4;
    }
    v47 = v31;
    v41 = *(_QWORD *)(a3 + 8);
    v42 = *(void **)(a2 + 24);
    sub_10007A754((int)v44, "google.protobuf.ExtensionRangeOptions");
    if ( v42 )
      v43 = v42;
    else
      v43 = &google::protobuf::_ExtensionRangeOptions_default_instance_;
    sub_10008DBF4(a1, v41, v41, v43, a4, &__p, v44);
    if ( v45 < 0 )
      operator delete(v44[0]);
    if ( __p )
    {
      v47 = (char *)__p;
      operator delete(__p);
    }
  }
}