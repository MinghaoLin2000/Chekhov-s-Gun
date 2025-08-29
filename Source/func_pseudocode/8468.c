_AuthorizationCreate
OSStatus __cdecl AuthorizationCreate(
        const AuthorizationRights *rights,
        const AuthorizationEnvironment *environment,
        AuthorizationFlags flags,
        AuthorizationRef *authorization)
{
  return _AuthorizationCreate(rights, environment, flags, authorization);
}