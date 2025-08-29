-[StoreUIService listener:shouldAcceptNewConnection:]
bool __cdecl -[StoreUIService listener:shouldAcceptNewConnection:](StoreUIService *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x20
  NSXPCInterface *v8; // x22
  NSSet *v9; // x24
  NSSet *v10; // x24
  NSSet *v11; // x24
  NSSet *v12; // x23
  NSSet *v13; // x23
  NSSet *v14; // x23
  NSSet *v15; // x23
  _QWORD v17[4]; // [xsp+8h] [xbp-A8h] BYREF
  id v18; // [xsp+28h] [xbp-88h] BYREF
  _QWORD v19[4]; // [xsp+30h] [xbp-80h] BYREF
  id v20; // [xsp+50h] [xbp-60h] BYREF
  id location; // [xsp+58h] [xbp-58h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  objc_storeStrong((id *)&self->_connection, a4);
  objc_msgSend(v7, "setExportedObject:", self);
  objc_opt_self(&OBJC_CLASS___StoreUIService);
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSXPCInterface interfaceWithProtocol:](
           &OBJC_CLASS___NSXPCInterface,
           "interfaceWithProtocol:",
           &OBJC_PROTOCOL___StoreUIServiceProtocol));
  v9 = objc_retainAutoreleasedReturnValue(
         +[NSSet setWithObjects:](
           &OBJC_CLASS___NSSet,
           "setWithObjects:",
           objc_opt_class(&OBJC_CLASS___AMSAuthenticateRequest),
           0LL));
  -[NSXPCInterface setClasses:forSelector:argumentIndex:ofReply:](
    v8,
    "setClasses:forSelector:argumentIndex:ofReply:",
    v9,
    "presentAuthenticateRequest:withResultHandler:",
    0LL,
    0LL);
  objc_release(v9);
  v10 = objc_retainAutoreleasedReturnValue(
          +[NSSet setWithObjects:](
            &OBJC_CLASS___NSSet,
            "setWithObjects:",
            objc_opt_class(&OBJC_CLASS___AMSDialogResult),
            0LL));
  -[NSXPCInterface setClasses:forSelector:argumentIndex:ofReply:](
    v8,
    "setClasses:forSelector:argumentIndex:ofReply:",
    v10,
    "presentAlertStyledDialogRequest:withResultHandler:",
    0LL,
    1LL);
  objc_release(v10);
  v11 = objc_retainAutoreleasedReturnValue(
          +[NSSet setWithObjects:](
            &OBJC_CLASS___NSSet,
            "setWithObjects:",
            objc_opt_class(&OBJC_CLASS___AMSAuthenticateResult),
            0LL));
  -[NSXPCInterface setClasses:forSelector:argumentIndex:ofReply:](
    v8,
    "setClasses:forSelector:argumentIndex:ofReply:",
    v11,
    "presentAuthenticateRequest:withResultHandler:",
    0LL,
    1LL);
  objc_release(v11);
  v12 = objc_retainAutoreleasedReturnValue(
          +[NSSet setWithObjects:](
            &OBJC_CLASS___NSSet,
            "setWithObjects:",
            objc_opt_class(&OBJC_CLASS___AMSDialogRequest),
            0LL));
  -[NSXPCInterface setClasses:forSelector:argumentIndex:ofReply:](
    v8,
    "setClasses:forSelector:argumentIndex:ofReply:",
    v12,
    "presentDialogRequest:withResultHandler:",
    0LL,
    0LL);
  objc_release(v12);
  v13 = objc_retainAutoreleasedReturnValue(
          +[NSSet setWithObjects:](
            &OBJC_CLASS___NSSet,
            "setWithObjects:",
            objc_opt_class(&OBJC_CLASS___AMSDialogResult),
            0LL));
  -[NSXPCInterface setClasses:forSelector:argumentIndex:ofReply:](
    v8,
    "setClasses:forSelector:argumentIndex:ofReply:",
    v13,
    "presentDialogRequest:withResultHandler:",
    0LL,
    1LL);
  objc_release(v13);
  v14 = objc_retainAutoreleasedReturnValue(
          +[NSSet setWithObject:](
            &OBJC_CLASS___NSSet,
            "setWithObject:",
            objc_opt_class(&OBJC_CLASS___AMSEngagementRequest)));
  -[NSXPCInterface setClasses:forSelector:argumentIndex:ofReply:](
    v8,
    "setClasses:forSelector:argumentIndex:ofReply:",
    v14,
    "presentEngagementRequest:withResultHandler:",
    0LL,
    0LL);
  objc_release(v14);
  v15 = objc_retainAutoreleasedReturnValue(
          +[NSSet setWithObject:](
            &OBJC_CLASS___NSSet,
            "setWithObject:",
            objc_opt_class(&OBJC_CLASS___AMSEngagementResult)));
  -[NSXPCInterface setClasses:forSelector:argumentIndex:ofReply:](
    v8,
    "setClasses:forSelector:argumentIndex:ofReply:",
    v15,
    "presentEngagementRequest:withResultHandler:",
    0LL,
    1LL);
  objc_release(v15);
  objc_msgSend(v7, "setExportedInterface:", v8);
  objc_release(v8);
  objc_initWeak(&location, self);
  v19[0] = _NSConcreteStackBlock;
  v19[1] = 3254779904LL;
  v19[2] = sub_100009B8C;
  v19[3] = &unk_1000108F8;
  objc_copyWeak(&v20, &location);
  objc_msgSend(v7, "setInvalidationHandler:", v19);
  v17[0] = _NSConcreteStackBlock;
  v17[1] = 3254779904LL;
  v17[2] = sub_100009C80;
  v17[3] = &unk_1000108F8;
  objc_copyWeak(&v18, &location);
  objc_msgSend(v7, "setInterruptionHandler:", v17);
  objc_msgSend(v7, "resume");
  objc_destroyWeak(&v18);
  objc_destroyWeak(&v20);
  objc_destroyWeak(&location);
  objc_release(v7);
  objc_release(v6);
  return 1;
}