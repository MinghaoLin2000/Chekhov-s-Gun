-[ipp_t _addOctetString:name:data:length:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[ipp_t _addOctetString:name:data:length:](ipp_t *self, SEL a2, int a3, id a4, const void *a5, int a6)
{
  __int64 v8; // x20
  id v10; // x19
  _QWORD v11[5]; // [xsp+0h] [xbp-60h] BYREF
  int v12; // [xsp+28h] [xbp-38h]

  v8 = *(_QWORD *)&a3;
  v10 = objc_retain(a4);
  if ( v10 && (unsigned int)v8 <= 5 && (_DWORD)v8 != 3 && !((unsigned int)a6 >> 15) )
  {
    v11[0] = _NSConcreteStackBlock;
    v11[1] = 3221225472LL;
    v11[2] = sub_10003E08C;
    v11[3] = &unk_10009EAB8;
    v11[4] = a5;
    v12 = a6;
    -[ipp_t withNewAttr:groupTag:valueTag:apply:](self, "withNewAttr:groupTag:valueTag:apply:", v10, v8, 48LL, v11);
  }
  objc_release(v10);
}