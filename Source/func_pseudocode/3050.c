-[DeviceSetupViewController requestCompleteWithActivationInfo:forDeviceWithIdentifier:withError:]
void __cdecl -[DeviceSetupViewController requestCompleteWithActivationInfo:forDeviceWithIdentifier:withError:](
        DeviceSetupViewController *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v7; // x19
  id v8; // x20
  void *v9; // x0
  void *v10; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v7 = objc_retain(a3);
  v8 = objc_retain(a5);
  if ( -[DeviceSetupViewController sessionState](self, "sessionState") == 2 )
  {
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectForKeyedSubscript:", CFSTR("activation-url")));
    v10 = v9;
    if ( v8 || !v9 )
    {
      -[DeviceSetupViewController setSessionError:](self, "setSessionError:", v8);
      -[DeviceSetupViewController setSessionState:](self, "setSessionState:", 6LL);
    }
    else
    {
      -[DeviceSetupViewController setSessionState:](self, "setSessionState:", 3LL);
      -[DeviceSetupViewController setActivationInfo:](self, "setActivationInfo:", v7);
      -[DeviceSetupViewController sendActivationRequestWithURLString:](self, "sendActivationRequestWithURLString:", v10);
    }
    objc_release(v10);
  }
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}