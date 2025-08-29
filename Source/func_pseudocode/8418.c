-[AuthorizationController interactiveAuthRequiredForSoftwareInstall]
bool __cdecl -[AuthorizationController interactiveAuthRequiredForSoftwareInstall](
        AuthorizationController *self,
        SEL a2)
{
  if ( self->_noninteractiveAuthFailed )
    return 1;
  else
    return !-[AuthorizationController _attemptNonInteractiveAuthorization](self, "_attemptNonInteractiveAuthorization");
}