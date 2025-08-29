-[AuthorizationController clearAuth]
void __cdecl -[AuthorizationController clearAuth](AuthorizationController *self, SEL a2)
{
  AuthorizationOpaqueRef *authorization; // x0

  authorization = self->_authorization;
  if ( authorization )
  {
    AuthorizationFree(authorization, 8u);
    self->_authorization = 0LL;
  }
}