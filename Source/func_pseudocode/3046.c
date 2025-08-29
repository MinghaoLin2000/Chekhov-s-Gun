-[DeviceSetupViewController activationFailedViewController]
DeviceActivationFailedViewController *__cdecl -[DeviceSetupViewController activationFailedViewController](
        DeviceSetupViewController *self,
        SEL a2)
{
  DeviceSetupViewController *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x0
  DeviceActivationFailedViewController *activationFailedViewController; // x8
  DeviceActivationFailedViewController *v6; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retain(self);
  objc_sync_enter(v2);
  if ( !v2->_activationFailedViewController )
  {
    v4 = objc_opt_new(&OBJC_CLASS___DeviceActivationFailedViewController, v3);
    activationFailedViewController = v2->_activationFailedViewController;
    v2->_activationFailedViewController = (DeviceActivationFailedViewController *)v4;
    objc_release(activationFailedViewController);
  }
  objc_sync_exit(v2);
  objc_release(v2);
  v6 = v2->_activationFailedViewController;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v6);
}