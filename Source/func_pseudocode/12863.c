-[TSUDatabase executeUpdateWithSql:error:]
bool __cdecl -[TSUDatabase executeUpdateWithSql:error:](TSUDatabase *self, SEL a2, const char *a3, id *a4)
{
  _BOOL4 v6; // w0
  __int64 v8; // [xsp+8h] [xbp-18h] BYREF

  v8 = 0LL;
  v6 = -[TSUDatabase prepareStatement:sql:error:](self, "prepareStatement:sql:error:", &v8, a3, a4);
  if ( v6 )
    LOBYTE(v6) = -[TSUDatabase executeUpdate:shouldFinalize:error:](
                   self,
                   "executeUpdate:shouldFinalize:error:",
                   v8,
                   1LL,
                   a4);
  return v6;
}