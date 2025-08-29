-[ipp_t _addInteger:valueTag:name:value:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[ipp_t _addInteger:valueTag:name:value:](ipp_t *self, SEL a2, int a3, int a4, id a5, int a6)
{
  __int64 v7; // x20
  __int64 v8; // x21
  id v10; // x19
  _QWORD v11[4]; // [xsp+8h] [xbp-58h] BYREF
  int v12; // [xsp+28h] [xbp-38h]

  v7 = *(_QWORD *)&a4;
  v8 = *(_QWORD *)&a3;
  v10 = objc_retain(a5);
  if ( v10 && (unsigned int)v8 <= 5 && (_DWORD)v8 != 3 )
  {
    v11[0] = _NSConcreteStackBlock;
    v11[1] = 3221225472LL;
    v11[2] = sub_10003D500;
    v11[3] = &unk_10009E9E8;
    v12 = a6;
    -[ipp_t withNewAttr:groupTag:valueTag:apply:](self, "withNewAttr:groupTag:valueTag:apply:", v10, v8, v7, v11);
  }
  objc_release(v10);
}