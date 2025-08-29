-[ipp_t _addBoolean:name:value:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[ipp_t _addBoolean:name:value:](ipp_t *self, SEL a2, int a3, id a4, bool a5)
{
  __int64 v6; // x20
  id v8; // x19
  _QWORD v9[4]; // [xsp+8h] [xbp-48h] BYREF
  bool v10; // [xsp+28h] [xbp-28h]

  v6 = *(_QWORD *)&a3;
  v8 = objc_retain(a4);
  if ( v8 && (unsigned int)v6 <= 5 && (_DWORD)v6 != 3 )
  {
    v9[0] = _NSConcreteStackBlock;
    v9[1] = 3221225472LL;
    v9[2] = sub_10003D3A0;
    v9[3] = &unk_10009E9A8;
    v10 = a5;
    -[ipp_t withNewAttr:groupTag:valueTag:apply:](self, "withNewAttr:groupTag:valueTag:apply:", v8, v6, 34LL, v9);
  }
  objc_release(v8);
}