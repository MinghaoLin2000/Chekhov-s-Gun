-[AuthorizationController _attemptNonInteractiveAuthorization]
bool __cdecl -[AuthorizationController _attemptNonInteractiveAuthorization](AuthorizationController *self, SEL a2)
{
  AuthorizationOpaqueRef *authorization; // x8
  AuthorizationOpaqueRef **p_authorization; // x19
  AuthorizationRights rights; // [xsp+8h] [xbp-48h] BYREF
  _QWORD v7[3]; // [xsp+18h] [xbp-38h] BYREF
  int v8; // [xsp+30h] [xbp-20h]

  p_authorization = &self->_authorization;
  authorization = self->_authorization;
  if ( !authorization )
  {
    v7[1] = 0LL;
    v7[2] = 0LL;
    v8 = 0;
    *(&rights.count + 1) = 0;
    rights.count = 1;
    rights.items = (AuthorizationItem *)v7;
    v7[0] = "system.install.apple-software";
    if ( !AuthorizationCreate(0LL, 0LL, 0, p_authorization) )
    {
      if ( AuthorizationCopyRights(*p_authorization, &rights, 0LL, 0x12u, 0LL) )
      {
        AuthorizationFree(self->_authorization, 0);
        self->_authorization = 0LL;
        if ( -[AuthorizationController _allowSoftwareInstallForNonAdminUser](
               self,
               "_allowSoftwareInstallForNonAdminUser") )
        {
          -[AuthorizationController _attemptNonInteractiveAuthorizationForNonAdminUser](
            self,
            "_attemptNonInteractiveAuthorizationForNonAdminUser");
        }
      }
    }
    authorization = *p_authorization;
  }
  return authorization != 0LL;
}