-[ipp_t _addIntegers:valueTag:name:count:adder:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[ipp_t _addIntegers:valueTag:name:count:adder:](
        ipp_t *self,
        SEL a2,
        int a3,
        int a4,
        id a5,
        unsigned __int64 a6,
        id a7)
{
  __int64 v9; // x20
  __int64 v10; // x22
  id v12; // x19
  id v13; // x0
  void *v14; // x21
  _QWORD v15[4]; // [xsp+0h] [xbp-70h] BYREF
  id v16; // [xsp+20h] [xbp-50h]
  unsigned __int64 v17; // [xsp+28h] [xbp-48h]

  v9 = *(_QWORD *)&a4;
  v10 = *(_QWORD *)&a3;
  v12 = objc_retain(a5);
  v13 = objc_retain(a7);
  v14 = v13;
  if ( v12 && (unsigned int)v10 <= 5 && (_DWORD)v10 != 3 && a6 )
  {
    v15[0] = _NSConcreteStackBlock;
    v15[1] = 3254779904LL;
    v15[2] = sub_10003E348;
    v15[3] = &unk_10009EB08;
    v16 = objc_retain(v13);
    v17 = a6;
    -[ipp_t withNewAttr:groupTag:valueTag:apply:](self, "withNewAttr:groupTag:valueTag:apply:", v12, v10, v9, v15);
    objc_release(v16);
  }
  objc_release(v14);
  objc_release(v12);
}