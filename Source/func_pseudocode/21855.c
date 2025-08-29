__ZN12ObjConverter9addVertexERNSt3__119basic_istringstreamIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
__int64 __fastcall ObjConverter::addVertex(_QWORD *a1, _QWORD *a2)
{
  float Float; // s8
  float v5; // s9
  float v6; // s0
  float *v7; // x8
  __int64 v8; // x0
  unsigned __int64 v9; // x8
  unsigned __int64 v10; // x9
  __int64 result; // x0
  float v12; // s8
  float v13; // s9
  float v14; // s0
  float *v15; // x8
  _DWORD v16[3]; // [xsp+8h] [xbp-38h] BYREF
  _DWORD v17[3]; // [xsp+14h] [xbp-2Ch] BYREF

  Float = fileFormatUtils::getFloat(a2);
  v5 = fileFormatUtils::getFloat(a2);
  v6 = fileFormatUtils::getFloat(a2);
  *(float *)v17 = Float;
  *(float *)&v17[1] = v5;
  *(float *)&v17[2] = v6;
  v7 = (float *)a1[2];
  if ( (unsigned __int64)v7 >= a1[3] )
  {
    v8 = sub_100007DF0(a1 + 1, v17);
  }
  else
  {
    *v7 = Float;
    v7[1] = v5;
    v8 = (__int64)(v7 + 3);
    v7[2] = v6;
  }
  a1[2] = v8;
  v9 = a2[5];
  v10 = a2[6];
  if ( v9 >= v10 )
  {
    result = (*(__int64 (**)(void))(a2[2] + 56LL))();
    if ( !result )
      return result;
  }
  else
  {
    result = v10 - v9;
    if ( v10 == v9 )
      return result;
  }
  v12 = fileFormatUtils::getFloat(a2);
  v13 = fileFormatUtils::getFloat(a2);
  v14 = fileFormatUtils::getFloat(a2);
  *(float *)v16 = v12;
  *(float *)&v16[1] = v13;
  *(float *)&v16[2] = v14;
  v15 = (float *)a1[5];
  if ( (unsigned __int64)v15 >= a1[6] )
  {
    result = sub_100007DF0(a1 + 4, v16);
  }
  else
  {
    *v15 = v12;
    v15[1] = v13;
    result = (__int64)(v15 + 3);
    v15[2] = v14;
  }
  a1[5] = result;
  return result;
}