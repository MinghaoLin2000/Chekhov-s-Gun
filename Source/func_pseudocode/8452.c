-[SUContainedSoftwareUpdateController softwareUpdate:didChangeProgress:currentState:estimatedTimeForState:]
void __cdecl -[SUContainedSoftwareUpdateController softwareUpdate:didChangeProgress:currentState:estimatedTimeForState:](
        SUContainedSoftwareUpdateController *self,
        SEL a2,
        id a3,
        double a4,
        signed __int64 a5,
        double a6)
{
  id v9; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v9 = objc_retainAutoreleasedReturnValue(-[SUContainedSoftwareUpdateController _contextForCtrl:](self, "_contextForCtrl:", a3, a4, a6));
  -[SUContainedSoftwareUpdateController _notifyContextOfQueryStatus:status:state:](
    self,
    "_notifyContextOfQueryStatus:status:state:",
    v9,
    a5,
    a4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v9);
}