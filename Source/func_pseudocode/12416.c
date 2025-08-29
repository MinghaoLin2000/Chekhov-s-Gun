__ZN6snappy21GetUncompressedLengthEPNS_6SourceEPj
__int64 __fastcall snappy::GetUncompressedLength(snappy *this, snappy::Source *a2, unsigned int *a3)
{
  __int64 v3; // x19
  _QWORD v5[4]; // [xsp+0h] [xbp-40h] BYREF
  unsigned int v6; // [xsp+20h] [xbp-20h]
  char v7; // [xsp+24h] [xbp-1Ch]

  v6 = 0;
  v7 = 0;
  v5[1] = 0LL;
  v5[2] = 0LL;
  v5[0] = this;
  v3 = sub_10011BB5C(v5, a2, a3);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v5[0] + 32LL))(v5[0], v6);
  return v3;
}