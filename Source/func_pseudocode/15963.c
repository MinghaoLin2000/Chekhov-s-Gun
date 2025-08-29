_uarpEndpointRoleToString
const char *__fastcall uarpEndpointRoleToString(unsigned int a1)
{
  if ( a1 > 2 )
    return "<unknown>";
  else
    return (&off_1000247C0)[a1];
}