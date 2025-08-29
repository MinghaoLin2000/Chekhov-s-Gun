-[ipp_t _addRange:name:lower:upper:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[ipp_t _addRange:name:lower:upper:](ipp_t *self, SEL a2, int a3, id a4, int a5, int a6)
{
  __int64 v8; // x20
  id v10; // x19
  _QWORD v11[4]; // [xsp+8h] [xbp-58h] BYREF
  int v12; // [xsp+28h] [xbp-38h]
  int v13; // [xsp+2Ch] [xbp-34h]

  v8 = *(_QWORD *)&a3;
  v10 = objc_retain(a4);
  if ( v10 && (unsigned int)v8 <= 5 && (_DWORD)v8 != 3 )
  {
    v11[0] = _NSConcreteStackBlock;
    v11[1] = 3221225472LL;
    v11[2] = sub_10003CF6C;
    v11[3] = &unk_10009E8D8;
    v12 = a5;
    v13 = a6;
    -[ipp_t withNewAttr:groupTag:valueTag:apply:](self, "withNewAttr:groupTag:valueTag:apply:", v10, v8, 51LL, v11);
  }
  objc_release(v10);
}