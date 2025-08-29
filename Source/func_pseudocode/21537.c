_EtiquetteConfidenceSubtraction
id __fastcall EtiquetteConfidenceSubtraction(void *a1)
{
  id v1; // x20
  id v2; // x21
  void *v3; // x19
  _QWORD v5[4]; // [xsp+8h] [xbp-48h] BYREF
  id v6; // [xsp+28h] [xbp-28h]
  __int64 vars8; // [xsp+58h] [xbp+8h]

  if ( a1 )
  {
    v1 = objc_retain(a1);
    v5[0] = _NSConcreteStackBlock;
    v5[1] = 3254779904LL;
    v5[2] = sub_10003DB98;
    v5[3] = &unk_100059C58;
    v6 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
    v2 = objc_retain(v6);
    objc_msgSend(v1, "enumerateKeysAndObjectsUsingBlock:", v5);
    objc_release(v1);
    v3 = objc_msgSend(v2, "copy");
    objc_release(v6);
    objc_release(v2);
  }
  else
  {
    v3 = 0LL;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}