_NDANFDecodingServiceXPCInterface
id NDANFDecodingServiceXPCInterface()
{
  void *v0; // x19
  NSSet *v1; // x0
  void *v2; // x20
  __int64 v3; // x22
  NSSet *v4; // x0
  void *v5; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v0 = (void *)objc_claimAutoreleasedReturnValue(
                 +[NSXPCInterface interfaceWithProtocol:](
                   &OBJC_CLASS___NSXPCInterface,
                   "interfaceWithProtocol:",
                   &OBJC_PROTOCOL___NDANFDecodingServiceType));
  v1 = +[NSSet setWithObjects:](&OBJC_CLASS___NSSet, "setWithObjects:", objc_opt_class(&OBJC_CLASS___NSData), 0LL);
  v2 = (void *)objc_claimAutoreleasedReturnValue(v1);
  objc_msgSend(v0, "setClasses:forSelector:argumentIndex:ofReply:", v2, "decodeANFDocumentData:completion:", 0LL, 0LL);
  objc_release(v2);
  v3 = objc_opt_class(&OBJC_CLASS___FCANFDocumentManifest);
  v4 = +[NSSet setWithObjects:](&OBJC_CLASS___NSSet, "setWithObjects:", v3, objc_opt_class(&OBJC_CLASS___NSError), 0LL);
  v5 = (void *)objc_claimAutoreleasedReturnValue(v4);
  objc_msgSend(v0, "setClasses:forSelector:argumentIndex:ofReply:", v5, "decodeANFDocumentData:completion:", 0LL, 1LL);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v0);
}