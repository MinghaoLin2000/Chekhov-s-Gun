_AuthorizationCopyRights
OSStatus __cdecl AuthorizationCopyRights(
        AuthorizationRef authorization,
        const AuthorizationRights *rights,
        const AuthorizationEnvironment *environment,
        AuthorizationFlags flags,
        AuthorizationRights **authorizedRights)
{
  return _AuthorizationCopyRights(authorization, rights, environment, flags, authorizedRights);
}