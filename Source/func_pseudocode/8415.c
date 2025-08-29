-[AuthorizationController _attemptNonInteractiveAuthorizationForNonAdminUser]
bool __cdecl -[AuthorizationController _attemptNonInteractiveAuthorizationForNonAdminUser](
        AuthorizationController *self,
        SEL a2)
{
  AuthorizationOpaqueRef *authorization; // x0
  AuthorizationOpaqueRef **p_authorization; // x19
  OSStatus v4; // w8
  OSStatus v5; // w8
  AuthorizationRights rights; // [xsp+8h] [xbp-48h] BYREF
  _QWORD v8[3]; // [xsp+18h] [xbp-38h] BYREF
  int v9; // [xsp+30h] [xbp-20h]

  p_authorization = &self->_authorization;
  authorization = self->_authorization;
  if ( !authorization )
  {
    v8[1] = 0LL;
    v8[2] = 0LL;
    v8[0] = "system.install.apple-software.standard-user";
    v9 = 0;
    *(&rights.count + 1) = 0;
    rights.items = (AuthorizationItem *)v8;
    rights.count = 1;
    v4 = AuthorizationCreate(0LL, 0LL, 0, p_authorization);
    authorization = *p_authorization;
    if ( !v4 )
    {
      v5 = AuthorizationCopyRights(authorization, &rights, 0LL, 0x12u, 0LL);
      authorization = *p_authorization;
      if ( v5 )
      {
        AuthorizationFree(authorization, 0);
        authorization = 0LL;
        *p_authorization = 0LL;
      }
    }
  }
  return authorization != 0LL;
}