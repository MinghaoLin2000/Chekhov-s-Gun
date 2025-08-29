-[IPXLibraryChooserService queryNote:]
void __cdecl -[IPXLibraryChooserService queryNote:](IPXLibraryChooserService *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x20
  NSXPCConnection *v6; // x21
  id v7; // x22
  void *v8; // x23
  void *v9; // x24
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "name"));
  v6 = objc_retainAutoreleasedReturnValue(-[IPXLibraryChooserService clientConnection](self, "clientConnection"));
  if ( (unsigned int)objc_msgSend(v5, "isEqualToString:", NSMetadataQueryDidStartGatheringNotification) )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[NSXPCConnection remoteObjectProxy](v6, "remoteObjectProxy"));
    objc_msgSend(v7, "didStartInitialResultGatheringPhase");
LABEL_5:
    objc_release(v7);
    goto LABEL_7;
  }
  if ( (unsigned int)objc_msgSend(v5, "isEqualToString:", NSMetadataQueryDidFinishGatheringNotification) )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[NSXPCConnection remoteObjectProxy](v6, "remoteObjectProxy"));
    objc_msgSend(v7, "didFinishInitialResultGatheringPhase");
    goto LABEL_5;
  }
  v8 = objc_autoreleasePoolPush();
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "userInfo"));
  -[IPXLibraryChooserService processSpotlightResults:](self, "processSpotlightResults:", v9);
  objc_release(v9);
  objc_autoreleasePoolPop(v8);
LABEL_7:
  objc_release(v6);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}