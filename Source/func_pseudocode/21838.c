__ZN12StlConverter9addVertexERNSt3__119basic_istringstreamIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
__int64 __fastcall StlConverter::addVertex(__int64 result, __int64 a2)
{
  __int64 v2; // x8
  __int64 v3; // x8
  __int64 v5; // x19
  __int64 v6; // x21
  float Float; // s8
  float v8; // s0
  __int64 v9; // x20
  unsigned __int64 v10; // x8
  __int64 v11; // x9
  _DWORD v12[3]; // [xsp+4h] [xbp-3Ch] BYREF

  v2 = *(_QWORD *)(result + 32);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 80) - *(_QWORD *)(v2 + 72);
    if ( v3 )
    {
      v5 = result;
      v6 = v3 >> 2;
      v12[2] = 0;
      fileFormatUtils::getFloat(a2);
      Float = fileFormatUtils::getFloat(a2);
      *(float *)&v12[1] = Float;
      v8 = fileFormatUtils::getFloat(a2);
      *(float *)v12 = v8;
      v9 = *(_QWORD *)(v5 + 32);
      v10 = *(_QWORD *)(v9 + 32);
      if ( v10 >= *(_QWORD *)(v9 + 40) )
      {
        result = sub_100007DF0(v9 + 24, v12);
        v11 = *(_QWORD *)(v5 + 32);
      }
      else
      {
        *(float *)v10 = v8;
        *(float *)(v10 + 4) = Float;
        result = v10 + 12;
        v11 = v9;
        *(_DWORD *)(v10 + 8) = 0;
      }
      *(_QWORD *)(v9 + 32) = result;
      ++*(_DWORD *)(*(_QWORD *)(v11 + 72) + 4 * v6 - 4);
    }
  }
  return result;
}