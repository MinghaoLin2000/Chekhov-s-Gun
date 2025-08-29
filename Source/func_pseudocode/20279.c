-[ipp_t _addResolution:name:unit:xres:yres:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[ipp_t _addResolution:name:unit:xres:yres:](ipp_t *self, SEL a2, int a3, id a4, int a5, int a6, int a7)
{
  __int64 v10; // x20
  id v12; // x19
  _QWORD v13[4]; // [xsp+0h] [xbp-60h] BYREF
  int v14; // [xsp+20h] [xbp-40h]
  int v15; // [xsp+24h] [xbp-3Ch]
  int v16; // [xsp+28h] [xbp-38h]

  v10 = *(_QWORD *)&a3;
  v12 = objc_retain(a4);
  if ( v12
    && (unsigned int)v10 <= 5
    && (_DWORD)v10 != 3
    && ((a7 | a6) & 0x80000000) == 0
    && (unsigned int)(a5 - 5) >= 0xFFFFFFFE )
  {
    v13[0] = _NSConcreteStackBlock;
    v13[1] = 3221225472LL;
    v13[2] = sub_10003DF14;
    v13[3] = &unk_10009EAB8;
    v14 = a6;
    v15 = a7;
    v16 = a5;
    -[ipp_t withNewAttr:groupTag:valueTag:apply:](self, "withNewAttr:groupTag:valueTag:apply:", v12, v10, 50LL, v13);
  }
  objc_release(v12);
}