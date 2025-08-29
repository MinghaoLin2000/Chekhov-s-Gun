-[AuthorizationController _isGuestUser]
bool __cdecl -[AuthorizationController _isGuestUser](AuthorizationController *self, SEL a2)
{
  return getuid() == 201;
}