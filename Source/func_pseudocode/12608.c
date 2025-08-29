+[TSUUUIDPath tokenizeUUIDPathString:]
id __cdecl +[TSUUUIDPath tokenizeUUIDPathString:](id a1, SEL a2, id a3)
{
  return objc_msgSend(a3, "componentsSeparatedByString:", CFSTR("/"));
}