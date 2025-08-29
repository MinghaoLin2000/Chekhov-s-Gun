-[DisplayMobileAssetUpdater queryPredicate]
id __cdecl -[DisplayMobileAssetUpdater queryPredicate](DisplayMobileAssetUpdater *self, SEL a2)
{
  NSPredicate *v2; // x0
  _QWORD v4[5]; // [xsp+8h] [xbp-28h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4[0] = _NSConcreteStackBlock;
  v4[1] = 3254779904LL;
  v4[2] = sub_100011540;
  v4[3] = &unk_100020910;
  v4[4] = self;
  v2 = objc_retainAutoreleasedReturnValue(+[NSPredicate predicateWithBlock:](&OBJC_CLASS___NSPredicate, "predicateWithBlock:", v4));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}