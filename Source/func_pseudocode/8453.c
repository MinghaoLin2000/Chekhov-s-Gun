-[SUContainedSoftwareUpdateController softwareUpdateDidFinish:]
void __cdecl -[SUContainedSoftwareUpdateController softwareUpdateDidFinish:](
        SUContainedSoftwareUpdateController *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  id v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[SUContainedSoftwareUpdateController _contextForCtrl:](self, "_contextForCtrl:", v4));
  -[SUContainedSoftwareUpdateController _notifyContextOfQueryCompletion:error:](
    self,
    "_notifyContextOfQueryCompletion:error:",
    v5,
    0LL);
  objc_release(v5);
  -[SUContainedSoftwareUpdateController _setContext:forCTRL:](self, "_setContext:forCTRL:", 0LL, v4);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[SUContainedSoftwareUpdateController _dequeue](self, "_dequeue");
}