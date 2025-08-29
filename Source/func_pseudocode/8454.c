-[SUContainedSoftwareUpdateController softwareUpdate:didFailWithError:]
void __cdecl -[SUContainedSoftwareUpdateController softwareUpdate:didFailWithError:](
        SUContainedSoftwareUpdateController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x21
  id v7; // x19
  id v8; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_retain(a4);
  v7 = objc_retain(a3);
  v8 = objc_retainAutoreleasedReturnValue(-[SUContainedSoftwareUpdateController _contextForCtrl:](self, "_contextForCtrl:", v7));
  -[SUContainedSoftwareUpdateController _notifyContextOfQueryCompletion:error:](
    self,
    "_notifyContextOfQueryCompletion:error:",
    v8,
    v6);
  objc_release(v6);
  objc_release(v8);
  -[SUContainedSoftwareUpdateController _setContext:forCTRL:](self, "_setContext:forCTRL:", 0LL, v7);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[SUContainedSoftwareUpdateController _dequeue](self, "_dequeue");
}