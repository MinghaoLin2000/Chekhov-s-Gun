-[SPCloudStorageHelperListenerDelegate listener:shouldAcceptNewConnection:]
bool __cdecl -[SPCloudStorageHelperListenerDelegate listener:shouldAcceptNewConnection:](
        SPCloudStorageHelperListenerDelegate *self,
        SEL a2,
        id a3,
        id a4)
{
  id v4; // x20
  SPCloudStorageHelper *v5; // x19
  NSXPCInterface *v6; // x21
  id v7; // x21

  v4 = objc_retain(a4);
  v5 = objc_alloc_init(&OBJC_CLASS___SPCloudStorageHelper);
  objc_msgSend(v4, "setExportedObject:", v5);
  v6 = objc_retainAutoreleasedReturnValue(
         +[NSXPCInterface interfaceWithProtocol:](
           &OBJC_CLASS___NSXPCInterface,
           "interfaceWithProtocol:",
           &OBJC_PROTOCOL___SPCloudStorageHelper));
  objc_msgSend(v4, "setExportedInterface:", v6);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(+[SPCloudStorageHelper sharedDispatchQueue](&OBJC_CLASS___SPCloudStorageHelper, "sharedDispatchQueue"));
  objc_msgSend(v4, "_setQueue:", v7);
  objc_release(v7);
  objc_msgSend(v4, "resume");
  objc_release(v4);
  objc_release(v5);
  return 1;
}