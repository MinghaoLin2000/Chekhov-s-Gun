+[TSUExtendedAttributeCollection removeExtraExtendedAttributesAtPath:forIntent:options:error:]
// local variable allocation has failed, the output may be wrong!
bool __cdecl +[TSUExtendedAttributeCollection removeExtraExtendedAttributesAtPath:forIntent:options:error:](
        id a1,
        SEL a2,
        id a3,
        unsigned int a4,
        int a5,
        id *a6)
{
  __int64 v7; // x21
  __int64 v8; // x22
  id v10; // x19
  void *v11; // x0
  void *v12; // x23
  unsigned __int8 v13; // w20

  v7 = *(_QWORD *)&a5;
  v8 = *(_QWORD *)&a4;
  v10 = objc_retain(a3);
  v11 = objc_msgSend(objc_alloc((Class)a1), "initWithPath:forRemoval:options:error:", v10, 1LL, v7, a6);
  v12 = v11;
  if ( v11 )
    v13 = (unsigned __int8)objc_msgSend(
                             v11,
                             "setAttributeCollectionToPath:intent:options:forRemoval:error:",
                             v10,
                             v8,
                             v7,
                             1LL,
                             a6);
  else
    v13 = 0;
  objc_release(v12);
  objc_release(v10);
  return v13;
}