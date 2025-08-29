-[AuthorizationController _attemptInteractiveAuthorization]
bool __cdecl -[AuthorizationController _attemptInteractiveAuthorization](AuthorizationController *self, SEL a2)
{
  AuthorizationOpaqueRef *authorization; // x0
  AuthorizationOpaqueRef **p_authorization; // x19
  OSStatus v4; // w8
  AuthorizationRights rights; // [xsp+8h] [xbp-48h] BYREF
  _QWORD v7[3]; // [xsp+18h] [xbp-38h] BYREF
  int v8; // [xsp+30h] [xbp-20h]

  p_authorization = &self->_authorization;
  authorization = self->_authorization;
  if ( !authorization )
  {
    v7[1] = 0LL;
    v7[2] = 0LL;
    v7[0] = "system.install.software";
    v8 = 0;
    AuthorizationCreate(0LL, 0LL, 0, p_authorization);
    *(&rights.count + 1) = 0;
    rights.items = (AuthorizationItem *)v7;
    rights.count = 1;
    v4 = AuthorizationCopyRights(*p_authorization, &rights, 0LL, 0, 0LL);
    authorization = *p_authorization;
    if ( v4 )
    {
      AuthorizationFree(authorization, 0);
      authorization = 0LL;
      *p_authorization = 0LL;
    }
  }
  return authorization != 0LL;
}