__ZN3TSP11MessageInfo5ClearEv
__int64 __fastcall TSP::MessageInfo::Clear(TSP::MessageInfo *this)
{
  __int64 v2; // x20
  TSP::FieldInfo **v3; // x21
  TSP::FieldInfo *v4; // t1
  __int64 result; // x0
  int v6; // w20
  __int64 v7; // x0
  char v8; // t1
  char *v9; // x19
  char v10; // t1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  *((_DWORD *)this + 6) = 0;
  v2 = *((unsigned int *)this + 14);
  if ( (int)v2 >= 1 )
  {
    v3 = (TSP::FieldInfo **)(*((_QWORD *)this + 8) + 8LL);
    do
    {
      v4 = *v3++;
      TSP::FieldInfo::Clear(v4);
      --v2;
    }
    while ( v2 );
    *((_DWORD *)this + 14) = 0;
  }
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 30) = 0;
  result = sub_1000542B4((char *)this + 144);
  *((_DWORD *)this + 42) = 0;
  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 1) != 0 )
  {
    v7 = *((_QWORD *)this + 24);
    v8 = *(_BYTE *)(v7 + 8);
    result = v7 + 8;
    *(_DWORD *)(result + 8) = 0;
    if ( (v8 & 1) != 0 )
      result = sub_10003A2A8(result);
  }
  if ( (v6 & 0xE) != 0 )
  {
    *((_DWORD *)this + 52) = 0;
    *((_QWORD *)this + 25) = 0LL;
  }
  v10 = *((_BYTE *)this + 8);
  v9 = (char *)this + 8;
  *((_DWORD *)v9 + 2) = 0;
  if ( (v10 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10003A2A8(v9);
  }
  return result;
}