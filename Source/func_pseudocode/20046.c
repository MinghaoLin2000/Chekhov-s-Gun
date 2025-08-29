-[PKNANEndpoint textInfo]
NSDictionary *__cdecl -[PKNANEndpoint textInfo](PKNANEndpoint *self, SEL a2)
{
  NSMutableDictionary *v3; // x19
  WiFiAwareDiscoveryResult *v4; // x22
  void *v5; // x23
  void *v6; // x20
  WiFiAwareDiscoveryResult *v7; // x22
  void *v8; // x23
  void *v9; // x25
  NSDictionary *v10; // x21
  _QWORD v12[4]; // [xsp+8h] [xbp-68h] BYREF
  id v13; // [xsp+28h] [xbp-48h]
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v3 = objc_opt_new(&OBJC_CLASS___NSMutableDictionary);
  v4 = objc_retainAutoreleasedReturnValue(-[PKNANEndpoint discoveryResult](self, "discoveryResult"));
  v5 = objc_retainAutoreleasedReturnValue(-[WiFiAwareDiscoveryResult serviceSpecificInfo](v4, "serviceSpecificInfo"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "txtRecordData"));
  objc_release(v5);
  objc_release(v4);
  if ( v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[PKNANEndpoint discoveryResult](self, "discoveryResult"));
    v8 = objc_retainAutoreleasedReturnValue(-[WiFiAwareDiscoveryResult serviceSpecificInfo](v7, "serviceSpecificInfo"));
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "txtRecordData"));
    v10 = objc_retainAutoreleasedReturnValue(+[NSNetService dictionaryFromTXTRecordData:](&OBJC_CLASS___NSNetService, "dictionaryFromTXTRecordData:", v9));
    objc_release(v9);
    objc_release(v8);
    objc_release(v7);
    v12[0] = _NSConcreteStackBlock;
    v12[1] = 3254779904LL;
    v12[2] = sub_1000302F8;
    v12[3] = &unk_10009E348;
    v13 = objc_retain(v3);
    -[NSDictionary enumerateKeysAndObjectsUsingBlock:](v10, "enumerateKeysAndObjectsUsingBlock:", v12);
    objc_release(v13);
    objc_release(v10);
  }
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSDictionary *)objc_autoreleaseReturnValue(v3);
}