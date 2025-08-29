-[NDANFHelper _resourceIDsFromURLs:]
id __cdecl -[NDANFHelper _resourceIDsFromURLs:](NDANFHelper *self, SEL a2, id a3)
{
  void *v3; // x0
  _QWORD v5[5]; // [xsp+8h] [xbp-28h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5[0] = _NSConcreteStackBlock;
  v5[1] = 3221225472LL;
  v5[2] = sub_100002DE4;
  v5[3] = &unk_100004178;
  v5[4] = self;
  v3 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(a3, "fc_arrayByTransformingWithBlock:", v5));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}