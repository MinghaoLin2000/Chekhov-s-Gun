-[ipp_t _addString:valueTag:name:lang:value:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[ipp_t _addString:valueTag:name:lang:value:](ipp_t *self, SEL a2, int a3, int a4, id a5, id a6, id a7)
{
  __int64 v9; // x22
  __int64 v10; // x23
  id v12; // x19
  id v13; // x20
  id v14; // x0
  void *v15; // x21
  NSArray *v16; // x25
  id v17; // [xsp+0h] [xbp-50h] BYREF

  v9 = *(_QWORD *)&a4;
  v10 = *(_QWORD *)&a3;
  v12 = objc_retain(a5);
  v13 = objc_retain(a6);
  v14 = objc_retain(a7);
  v15 = v14;
  if ( v14 && (unsigned int)v10 <= 5 && (_DWORD)v10 != 3 )
  {
    v17 = v14;
    v16 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v17, 1LL));
    -[ipp_t _addStrings:valueTag:name:lang:values:](
      self,
      "_addStrings:valueTag:name:lang:values:",
      v10,
      v9,
      v12,
      v13,
      v16);
    objc_release(v16);
  }
  objc_release(v15);
  objc_release(v13);
  objc_release(v12);
}