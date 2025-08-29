__ZN6snappy13RawUncompressEPNS_6SourceEPc
bool __fastcall snappy::RawUncompress(snappy *this, snappy::Source *a2, char *a3)
{
  _BOOL8 v5; // x19
  snappy::Source *v8; // [xsp+18h] [xbp-58h]
  unsigned int v9; // [xsp+2Ch] [xbp-44h] BYREF
  _QWORD v10[4]; // [xsp+30h] [xbp-40h] BYREF
  unsigned int v11; // [xsp+50h] [xbp-20h]
  char v12; // [xsp+54h] [xbp-1Ch]

  v11 = 0;
  v12 = 0;
  v10[1] = 0LL;
  v10[2] = 0LL;
  v10[0] = this;
  v9 = 0;
  v5 = (sub_10011BB5C(v10, &v9, a3) & 1) != 0
    && ((*(void (__fastcall **)(snappy *))(*(_QWORD *)this + 16LL))(this),
        v8 = (snappy::Source *)((char *)a2 + v9),
        sub_10011C484((snappy::SnappyDecompressor *)v10),
        v12)
    && a2 == v8;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v10[0] + 32LL))(v10[0], v11);
  return v5;
}