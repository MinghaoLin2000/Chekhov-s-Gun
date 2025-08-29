+[TSUAssertionHandler performBlockIgnoringAssertionsAndReturnList:]
id __cdecl +[TSUAssertionHandler performBlockIgnoringAssertionsAndReturnList:](id a1, SEL a2, id a3)
{
  return objc_msgSend(a1, "p_performBlockIgnoringAssertions:onlyFatal:", a3, 0LL);
}