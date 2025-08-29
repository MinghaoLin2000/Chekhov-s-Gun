__ZNK6google8protobuf15FieldDescriptor22DebugStringWithOptionsERKNS0_18DebugStringOptionsE
void __usercall google::protobuf::FieldDescriptor::DebugStringWithOptions(
        __int64 a1@<X0>,
        __int64 a2@<X1>,
        std::string *a3@<X8>)
{
  __int64 *v6; // x8
  int v7; // w9
  __int64 v8; // x11
  int v9; // w8
  __int64 v10; // x1
  __int128 v11; // [xsp+0h] [xbp-230h]
  __int64 v12; // [xsp+28h] [xbp-208h] BYREF
  int v13; // [xsp+30h] [xbp-200h]
  __int64 v14; // [xsp+58h] [xbp-1D8h] BYREF
  int v15; // [xsp+60h] [xbp-1D0h]
  __int64 v16; // [xsp+88h] [xbp-1A8h] BYREF
  int v17; // [xsp+90h] [xbp-1A0h]
  __int64 v18; // [xsp+B8h] [xbp-178h] BYREF
  int v19; // [xsp+C0h] [xbp-170h]
  __int64 v20; // [xsp+E8h] [xbp-148h] BYREF
  int v21; // [xsp+F0h] [xbp-140h]
  __int64 v22; // [xsp+118h] [xbp-118h] BYREF
  int v23; // [xsp+120h] [xbp-110h]
  __int64 v24; // [xsp+148h] [xbp-E8h] BYREF
  int v25; // [xsp+150h] [xbp-E0h]
  __int64 v26; // [xsp+178h] [xbp-B8h] BYREF
  int v27; // [xsp+180h] [xbp-B0h]
  __int64 v28; // [xsp+1A8h] [xbp-88h] BYREF
  int v29; // [xsp+1B0h] [xbp-80h]
  __int64 *v30; // [xsp+1D8h] [xbp-58h] BYREF
  int v31; // [xsp+1E0h] [xbp-50h]

  a3->__r_.__value_.__r.__words[0] = 0LL;
  a3->__r_.__value_.__l.__size_ = 0LL;
  a3->__r_.__value_.__r.__words[2] = 0LL;
  if ( *(_BYTE *)(a1 + 67) )
  {
    v6 = *(__int64 **)(*(_QWORD *)(a1 + 80) + 8LL);
    v7 = *((char *)v6 + 23);
    v8 = v6[1];
    if ( v7 < 0 )
      v6 = (__int64 *)*v6;
    v30 = v6;
    v9 = (unsigned __int8)v7;
    if ( v7 < 0 )
      v9 = v8;
    v31 = v9;
    v28 = 0LL;
    v29 = -1;
    v26 = 0LL;
    v27 = -1;
    v24 = 0LL;
    v25 = -1;
    v22 = 0LL;
    v23 = -1;
    v20 = 0LL;
    v21 = -1;
    v18 = 0LL;
    v19 = -1;
    v16 = 0LL;
    v17 = -1;
    v14 = 0LL;
    v15 = -1;
    v12 = 0LL;
    v13 = -1;
    *(_QWORD *)&v11 = &v18;
    *((_QWORD *)&v11 + 1) = &v16;
    google::protobuf::strings::SubstituteAndAppend(
      a3,
      (int)"extend .$0 {\n",
      (int)&v30,
      (int)&v28,
      (int)&v26,
      (int)&v24,
      (int)&v22,
      (int)&v20,
      v11,
      (__int64)&v14,
      (__int64)&v12);
    v10 = 1LL;
  }
  else
  {
    v10 = 0LL;
  }
  google::protobuf::FieldDescriptor::DebugString(a1, v10, a3, a2);
  if ( *(_BYTE *)(a1 + 67) )
    std::string::append(a3, "}\n");
}