-[ipp_t _addRanges:name:values:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[ipp_t _addRanges:name:values:](ipp_t *self, SEL a2, int a3, id a4, id a5)
{
  __int64 v6; // x21
  id v8; // x19
  id v9; // x0
  void *v10; // x20
  _QWORD v11[4]; // [xsp+8h] [xbp-48h] BYREF
  id v12; // [xsp+28h] [xbp-28h]

  v6 = *(_QWORD *)&a3;
  v8 = objc_retain(a4);
  v9 = objc_retain(a5);
  v10 = v9;
  if ( v8 && (unsigned int)v6 <= 5 && (_DWORD)v6 != 3 && objc_msgSend(v9, "count") )
  {
    v11[0] = _NSConcreteStackBlock;
    v11[1] = 3254779904LL;
    v11[2] = sub_10003D12C;
    v11[3] = &unk_10009E958;
    v12 = objc_retain(v10);
    -[ipp_t withNewAttr:groupTag:valueTag:apply:](self, "withNewAttr:groupTag:valueTag:apply:", v8, v6, 51LL, v11);
    objc_release(v12);
  }
  objc_release(v10);
  objc_release(v8);
}