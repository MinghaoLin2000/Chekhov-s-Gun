-[AuthorizationController authorizeForSoftwareInstall]
bool __cdecl -[AuthorizationController authorizeForSoftwareInstall](AuthorizationController *self, SEL a2)
{
  AuthorizationOpaqueRef *authorization; // x8
  void *v4; // x20

  authorization = self->_authorization;
  if ( !authorization )
  {
    if ( !-[AuthorizationController _attemptNonInteractiveAuthorization](self, "_attemptNonInteractiveAuthorization") )
      -[AuthorizationController _attemptInteractiveAuthorization](self, "_attemptInteractiveAuthorization");
    authorization = self->_authorization;
    if ( authorization )
    {
      v4 = objc_retainAutoreleasedReturnValue(
             +[SUAppStoreUpdateController sharedUpdateController](
               &OBJC_CLASS___SUAppStoreUpdateController,
               "sharedUpdateController"));
      objc_msgSend(v4, "setAuthorization:", self->_authorization);
      objc_release(v4);
      authorization = self->_authorization;
    }
  }
  return authorization != 0LL;
}