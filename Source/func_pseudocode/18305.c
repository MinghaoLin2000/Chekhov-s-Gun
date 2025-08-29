-[AUCrashHandlerService notifyCrash:withCrashInfo:]
void __cdecl -[AUCrashHandlerService notifyCrash:withCrashInfo:](
        AUCrashHandlerService *self,
        SEL a2,
        $115C4C562B26FF47E01F9F4EA65B5887 *a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  __int128 v8; // q1
  _OWORD v9[2]; // [xsp+0h] [xbp-40h] BYREF

  v6 = objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(-[NSXPCConnection remoteObjectProxy](self->mConnection, "remoteObjectProxy"));
  v8 = *(_OWORD *)&a3->var0[4];
  v9[0] = *(_OWORD *)a3->var0;
  v9[1] = v8;
  objc_msgSend(v7, "notifyCrash:withCrashInfo:", v9, v6);
  objc_release(v7);
  objc_release(v6);
}