+[TSUExtendedAttribute extendedAttributeFromPath:name:options:error:]
// local variable allocation has failed, the output may be wrong!
id __cdecl +[TSUExtendedAttribute extendedAttributeFromPath:name:options:error:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        int a5,
        id *a6)
{
  __int64 v7; // x20
  id v10; // x23
  id v11; // x21
  void *v12; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v7 = *(_QWORD *)&a5;
  v10 = objc_retain(a4);
  v11 = objc_retain(a3);
  v12 = objc_msgSend(objc_alloc((Class)a1), "initFromPath:name:options:error:", v11, v10, v7, a6);
  objc_release(v10);
  objc_release(v11);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v12);
}