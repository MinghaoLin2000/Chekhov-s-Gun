+[TSUAssertionHandler _atomicIncrementAssertCount]
int __cdecl +[TSUAssertionHandler _atomicIncrementAssertCount](id a1, SEL a2)
{
  return atomic_fetch_add(&dword_1001F80C8, 1u);
}