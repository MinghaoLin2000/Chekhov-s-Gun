__ZN6google8protobuf8internal24GeneratedExtensionFinder4FindEiPNS1_13ExtensionInfoE
__int64 __fastcall google::protobuf::internal::GeneratedExtensionFinder::Find(__int64 a1, int a2, _OWORD *a3)
{
  int8x8_t v3; // x8
  unsigned __int64 v4; // x9
  unsigned __int64 v5; // x11
  unsigned __int64 v6; // x10
  unsigned __int64 v7; // x10
  uint8x8_t v8; // d0
  unsigned __int64 v9; // x12
  __int64 **v10; // x13
  __int64 *i; // x13
  unsigned __int64 v12; // x15
  __int128 v14; // q1

  if ( qword_1001F7C18 )
  {
    v3 = *(int8x8_t *)(qword_1001F7C18 + 8);
    if ( v3 )
    {
      v4 = *(_QWORD *)(a1 + 8);
      v5 = 0x9DDFEA08EB382D69LL * (((unsigned int)(8 * v4) + 8LL) ^ HIDWORD(v4));
      v6 = 0x9DDFEA08EB382D69LL * (HIDWORD(v4) ^ (v5 >> 47) ^ v5);
      v7 = (0x9DDFEA08EB382D69LL * (v6 ^ (v6 >> 47))) ^ a2;
      v8 = (uint8x8_t)vcnt_s8(v3);
      v8.i16[0] = vaddlv_u8(v8);
      if ( v8.u32[0] > 1uLL )
      {
        v9 = v7;
        if ( v7 >= *(_QWORD *)&v3 )
          v9 = v7 % *(_QWORD *)&v3;
      }
      else
      {
        v9 = (*(_QWORD *)&v3 - 1LL) & v7;
      }
      v10 = *(__int64 ***)(*(_QWORD *)qword_1001F7C18 + 8 * v9);
      if ( v10 )
      {
        for ( i = *v10; i; i = (__int64 *)*i )
        {
          v12 = i[1];
          if ( v7 == v12 )
          {
            if ( i[2] == v4 && *((_DWORD *)i + 6) == a2 )
            {
              v14 = *((_OWORD *)i + 3);
              *a3 = *((_OWORD *)i + 2);
              a3[1] = v14;
              return 1LL;
            }
          }
          else
          {
            if ( v8.u32[0] > 1uLL )
            {
              if ( v12 >= *(_QWORD *)&v3 )
                v12 %= *(_QWORD *)&v3;
            }
            else
            {
              v12 &= *(_QWORD *)&v3 - 1LL;
            }
            if ( v12 != v9 )
              return 0LL;
          }
        }
      }
    }
  }
  return 0LL;
}