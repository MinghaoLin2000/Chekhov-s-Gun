__Z12getNamedAttrIU8__strongP7NSArrayIP16ipp_collection_tEET_P5ipp_tP8NSString
id __fastcall getNamedAttr<NSArray<ipp_collection_t *> * {__strong}>(void *a1, void *a2)
{
  id v3; // x20
  id v4; // x20
  id v5; // x19
  id v6; // x21
  _QWORD v8[4]; // [xsp+0h] [xbp-50h] BYREF
  id v9; // [xsp+20h] [xbp-30h]
  id v10; // [xsp+28h] [xbp-28h]
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v3 = objc_retain(a1);
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 3254779904LL;
  v8[2] = sub_100032AB0;
  v8[3] = &unk_10009E4F8;
  v9 = objc_retain(a2);
  v10 = v3;
  v4 = objc_retain(v3);
  v5 = objc_retain(v9);
  v6 = objc_retainAutoreleasedReturnValue((id)sub_100032324((int)v4, (int)v5, v8));
  objc_release(v10);
  objc_release(v9);
  objc_release(v4);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}