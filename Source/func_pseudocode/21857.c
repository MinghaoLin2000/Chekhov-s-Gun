__ZN12ObjConverter9addNormalERNSt3__119basic_istringstreamIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
__int64 __fastcall ObjConverter::addNormal(__int64 a1, __int64 a2)
{
  float Float; // s8
  float v5; // s9
  float v6; // s0
  float *v7; // x8
  __int64 result; // x0
  _DWORD v9[3]; // [xsp+4h] [xbp-2Ch] BYREF

  Float = fileFormatUtils::getFloat(a2);
  v5 = fileFormatUtils::getFloat(a2);
  v6 = fileFormatUtils::getFloat(a2);
  *(float *)v9 = Float;
  *(float *)&v9[1] = v5;
  *(float *)&v9[2] = v6;
  v7 = *(float **)(a1 + 88);
  if ( (unsigned __int64)v7 >= *(_QWORD *)(a1 + 96) )
  {
    result = sub_100007DF0(a1 + 80, v9);
  }
  else
  {
    *v7 = Float;
    v7[1] = v5;
    result = (__int64)(v7 + 3);
    v7[2] = v6;
  }
  *(_QWORD *)(a1 + 88) = result;
  return result;
}