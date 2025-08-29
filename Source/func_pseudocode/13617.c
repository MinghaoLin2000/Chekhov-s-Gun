+[TSUAssertionHandler setDelegate:]
void __cdecl +[TSUAssertionHandler setDelegate:](id a1, SEL a2, id a3)
{
  id v4; // x0

  if ( qword_1001F80C0 )
  {
    v4 = objc_autorelease((id)qword_1001F80C0);
    qword_1001F80C0 = 0LL;
  }
  if ( a3 )
    qword_1001F80C0 = (__int64)objc_retain(a3);
}