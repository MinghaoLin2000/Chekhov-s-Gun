-[IPXLibraryChooserConnectionAgent listener:shouldAcceptNewConnection:]
bool __cdecl -[IPXLibraryChooserConnectionAgent listener:shouldAcceptNewConnection:](
        IPXLibraryChooserConnectionAgent *self,
        SEL a2,
        id a3,
        id a4)
{
  id v4; // x19
  IPXLibraryChooserService *v5; // x20
  NSXPCInterface *v6; // x21
  IPXLibraryChooserService *v7; // x20
  NSXPCInterface *v8; // x21
  _QWORD v10[4]; // [xsp+8h] [xbp-48h] BYREF
  id v11; // [xsp+28h] [xbp-28h]

  v4 = objc_retain(a4);
  v5 = objc_alloc_init(&OBJC_CLASS___IPXLibraryChooserService);
  v6 = objc_retainAutoreleasedReturnValue(
         +[NSXPCInterface interfaceWithProtocol:](
           &OBJC_CLASS___NSXPCInterface,
           "interfaceWithProtocol:",
           &OBJC_PROTOCOL___IPXLibraryChooserServiceProtocol));
  objc_msgSend(v4, "setExportedInterface:", v6);
  objc_release(v6);
  objc_msgSend(v4, "setExportedObject:", v5);
  -[IPXLibraryChooserService setClientConnection:](v5, "setClientConnection:", v4);
  v10[0] = _NSConcreteStackBlock;
  v10[1] = 3254779904LL;
  v10[2] = sub_100002A90;
  v10[3] = &unk_1000041B0;
  v11 = v5;
  v7 = objc_retain(v5);
  objc_msgSend(v4, "setInvalidationHandler:", v10);
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSXPCInterface interfaceWithProtocol:](
           &OBJC_CLASS___NSXPCInterface,
           "interfaceWithProtocol:",
           &OBJC_PROTOCOL___IPXLibraryChooserClientProtocol));
  objc_msgSend(v4, "setRemoteObjectInterface:", v8);
  objc_release(v8);
  objc_msgSend(v4, "resume");
  objc_release(v4);
  objc_release(v11);
  objc_release(v7);
  return 1;
}