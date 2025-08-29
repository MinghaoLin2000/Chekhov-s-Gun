-[ipp_t _addStrings:valueTag:name:lang:values:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[ipp_t _addStrings:valueTag:name:lang:values:](ipp_t *self, SEL a2, int a3, int a4, id a5, id a6, id a7)
{
  __int64 v9; // x22
  __int64 v10; // x23
  id v12; // x19
  id v13; // x20
  id v14; // x0
  void *v15; // x21
  _QWORD v16[4]; // [xsp+8h] [xbp-68h] BYREF
  id v17; // [xsp+28h] [xbp-48h]
  id v18; // [xsp+30h] [xbp-40h]
  int v19; // [xsp+38h] [xbp-38h]

  v9 = *(_QWORD *)&a4;
  v10 = *(_QWORD *)&a3;
  v12 = objc_retain(a5);
  v13 = objc_retain(a6);
  v14 = objc_retain(a7);
  v15 = v14;
  if ( v12 && (unsigned int)v10 <= 5 && (_DWORD)v10 != 3 && objc_msgSend(v14, "count") )
  {
    v16[0] = _NSConcreteStackBlock;
    v16[1] = 3254779904LL;
    v16[2] = sub_10003D838;
    v16[3] = &unk_10009EA38;
    v17 = objc_retain(v15);
    v18 = objc_retain(v13);
    v19 = v9;
    -[ipp_t withNewAttr:groupTag:valueTag:apply:](self, "withNewAttr:groupTag:valueTag:apply:", v12, v10, v9, v16);
    objc_release(v18);
    objc_release(v17);
  }
  objc_release(v15);
  objc_release(v13);
  objc_release(v12);
}